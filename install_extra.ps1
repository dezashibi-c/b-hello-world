# ***************************************************************************************
#    Project: Extra Development Tools Installer Script
#    File: install_extra.ps1
#    Date: 2024-08-20
#    Author: Navid Dezashibi
#    Contact: navid@dezashibi.com
#    Website: https://www.dezashibi.com | https://github.com/dezashibi
#    License:
#     Please refer to the LICENSE file in the repository or website for more information
#     about the licensing of this work. If you have any questions or concerns,
#     please feel free to contact me at the email address provided above.
# ***************************************************************************************
# *  Description: refer to readme file
# ***************************************************************************************

$toolsToDownload = @(
    @{
        Name         = "PortableGit"
        RepoOwner    = "git-for-windows"
        RepoName     = "git"
        AssetPattern = "PortableGit-{version}-64-bit.7z.exe"
        ExtractCmd   = "Start-Process -FilePath `"{tempFile}`" -ArgumentList '-o `"{destFolder}`" -y' -Wait"
        Destination  = "C:\PortableGit"
        PathToAdd    = "C:\PortableGit\bin"
    },
    @{
        Name         = "CMake"
        RepoOwner    = "Kitware"
        RepoName     = "CMake"
        AssetPattern = "cmake-{version}-windows-x86_64.zip"
        ExtractCmd   = "Expand-Archive -Path `"{tempFile}`" -DestinationPath `"{destFolder}`""
        Destination  = "C:\"
        PathToAdd    = "C:\cmake-{version}-windows-x86_64\bin"
    }
)

function Download-And-Setup {
    param (
        [string]$repoOwner,
        [string]$repoName,
        [string]$assetPattern,
        [string]$extractCmd,
        [string]$destination,
        [string]$pathToAdd
    )

    $apiUrl = "https://api.github.com/repos/$repoOwner/$repoName/releases/latest"

    # Get the latest release information
    $latestRelease = Invoke-RestMethod -Uri $apiUrl -Headers @{ "User-Agent" = "PowerShell Script" }

    # Extract the version number from the release tag
    $releaseTag = $latestRelease.tag_name
    $version = $releaseTag -replace '^v(\d+\.\d+\.\d+).*', '$1'

    $correctedPattern = $assetPattern -replace '\{version\}', $version

    # Filter assets and get the desired one
    $asset = $latestRelease.assets | Where-Object { $_.name -match $correctedPattern } | Select-Object -First 1

    if ($asset -eq $null) {
        Write-Host "No matching asset found for version $version in $repoName."
        return
    }

    $downloadUrl = $asset.browser_download_url
    $tempFile = "$env:TEMP\$($asset.name)"

    Invoke-WebRequest -Uri $downloadUrl -OutFile $tempFile

    Write-Host "Downloaded $($asset.name) to $tempFile"

    $destFolder = $destination
    if (-not (Test-Path -Path $destFolder)) {
        New-Item -ItemType Directory -Path $destFolder -Force | Out-Null
    }

    # Extract the file
    $extractCmd = $extractCmd -replace '\{tempFile\}', "$tempFile" -replace '\{destFolder\}', "$destFolder" -replace '\{version\}', $version
    Invoke-Expression $extractCmd
    Write-Host "Extracted $($asset.name) to $destination"

    # Check if the path is already in the user's PATH
    $pathToAdd = $pathToAdd -replace '\{version\}', $version
    $currentPath = [Environment]::GetEnvironmentVariable("Path", [EnvironmentVariableTarget]::User)
    if (-not ($currentPath.Split(';') -contains $pathToAdd)) {
        # If the path is not present, add it
        $newPath = "$currentPath;$pathToAdd"
        [Environment]::SetEnvironmentVariable("Path", $newPath, [EnvironmentVariableTarget]::User)
        Write-Host "$pathToAdd added to PATH."
    } else {
        Write-Host "$pathToAdd is already in the PATH."
    }


    Remove-Item -Path $tempFile -Force
    Write-Host "Removed temp file $tempFile"
}

# Main Process
foreach ($tool in $toolsToDownload) {
    Download-And-Setup -repoOwner $tool.RepoOwner -repoName $tool.RepoName -assetPattern $tool.AssetPattern -extractCmd $tool.ExtractCmd -destination $tool.Destination -pathToAdd $tool.PathToAdd
}

Write-Host "All tools downloaded, extracted, and configured."
