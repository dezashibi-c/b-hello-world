# ***************************************************************************************
#    Project: Using Makefiles with multiple file projects
#    File: Makefile
#    Date: 2024-07-24
#    Author: Navid Dezashibi
#    Contact: navid@dezashibi.com
#    Website: https://www.dezashibi.com | https://github.com/dezashibi
#    License:
#     Please refer to the LICENSE file in the repository or website for more information
#     about the licensing of this work. If you have any questions or concerns,
#     please feel free to contact me at the email address provided above.
# ***************************************************************************************
# *  Description: This Makefile is used to compile the project with incremental builds.
# *               It contains rules to compile individual object files and link them
# *               together to create the final executable.
# ***************************************************************************************

# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -pedantic

# Executable name
TARGET = multifile_project.out

# Source files
SRCS = main.c math_utils.c

# Object files
OBJS = $(SRCS:.c=.o)

# Default target
all: $(TARGET)

# Run the target
run: $(TARGET)
	./$(TARGET)

# Rule to link the object files and create the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up the build files
clean:
	rm -f $(TARGET) $(OBJS)

# Phony targets
.PHONY: all clean
