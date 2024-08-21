# Hello World (Beginner)

Get started with C as quickly as possible.

## What is the `Hello World` project all about?

This repository contains concise code examples with sufficient explanations to help readers begin programming in C. The focus is on idiomatic and standard C practices without complicated or overly opinionated design decisions.

**NOTE: I've purposefully have used `.exe` for target extension files in examples, it makes the `Makefile` and the compile commands can be used on windows and linux the same.**

## Setting Up the Compiler

There are numerous resources available for setting up a C compiler, and if you're here, you likely have one installed. This guide assumes you're familiar with command-line compilation using `gcc` or `clang` on POSIX or Wondows operating systems.

If you prefer using an IDE like CLion or Visual Studio 2022, feel free to consult specific resources for those tools.

### An Alternative

The `Zig` programming language compiler can serve as a convenient, drop-in C compiler.

You can download it from [here](https://ziglang.org/learn/getting-started/#installing-zig). After installation, add it to your system path or use it directly from the command line with `../../zig/zig cc ...`. You get the idea.

### Portable development environment for Windows users

Here is an alternative if you want a portable and fully configured `gnu` build environment check out [W64DevKit](https://github.com/skeeto/w64devkit).

To setup and config the environment automatically you can run the following script ([source code here](/install.ps1)) on Windows Powershell:

```powershell
powershell -c "irm https://raw.githubusercontent.com/dezashibi-c/b-hello-world/main/install.ps1 | iex"
```

**Note:** The script downloads the latest release and install it in `C` drive and add the bin folder
to the user's `PATH`.

#### Need `CMake` and `git`, what about good old `DevCPP`?

Don't worry I have that script for you as well!

Same as `W64DevKit` installer, this script downloads latest `DevCPP`, `git` and `cmake`, extract them to `C` drive and add their corresponding bin folder to the user's `PATH`, for `DevCPP` a shortcut to it's portable executable file also will be created on your desktop.

```powershell
powershell -c "irm https://raw.githubusercontent.com/dezashibi-c/b-hello-world/main/install_extra.ps1 | iex"
```

**👉 Together with `W64DevKit` you have now everything to start writing code, well go on!**

## License

Creative Commons Attribution-NonCommercial 4.0 International (CC BY-NC 4.0) License.

Please refer to [LICENSE](/LICENSE) file.

## DevCPP License

The [devcpp.zip](/devcpp.zip) file is built by downloading the latest version of `Dev-C++` from [here](https://github.com/Embarcadero/Dev-Cpp/releases/tag/v6.3), extracting it and re-packing it to `zip` instead of `7z` after configuration to work with `W64DevKit`.

👉 This re-distribution complies with `Dev-C++` license [here](https://github.com/Embarcadero/Dev-Cpp/blob/master/LICENSE).
