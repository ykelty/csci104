# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/cs104/hw-ykelty/hw4/hw4_tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cs104/hw-ykelty/hw4/hw4_tests

# Utility rule file for debug-StackStress.2x10000Elements.

# Include the progress variables for this target.
include stack_tests/CMakeFiles/debug-StackStress.2x10000Elements.dir/progress.make

stack_tests/CMakeFiles/debug-StackStress.2x10000Elements:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cs104/hw-ykelty/hw4/hw4_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Debugging StackStress.2x10000Elements with GDB..."
	cd /home/cs104/hw-ykelty/hw4 && gdb --args /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests/stack_tests --gtest_filter=StackStress.2x10000Elements

debug-StackStress.2x10000Elements: stack_tests/CMakeFiles/debug-StackStress.2x10000Elements
debug-StackStress.2x10000Elements: stack_tests/CMakeFiles/debug-StackStress.2x10000Elements.dir/build.make

.PHONY : debug-StackStress.2x10000Elements

# Rule to build all files generated by this target.
stack_tests/CMakeFiles/debug-StackStress.2x10000Elements.dir/build: debug-StackStress.2x10000Elements

.PHONY : stack_tests/CMakeFiles/debug-StackStress.2x10000Elements.dir/build

stack_tests/CMakeFiles/debug-StackStress.2x10000Elements.dir/clean:
	cd /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests && $(CMAKE_COMMAND) -P CMakeFiles/debug-StackStress.2x10000Elements.dir/cmake_clean.cmake
.PHONY : stack_tests/CMakeFiles/debug-StackStress.2x10000Elements.dir/clean

stack_tests/CMakeFiles/debug-StackStress.2x10000Elements.dir/depend:
	cd /home/cs104/hw-ykelty/hw4/hw4_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cs104/hw-ykelty/hw4/hw4_tests /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests /home/cs104/hw-ykelty/hw4/hw4_tests /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests/CMakeFiles/debug-StackStress.2x10000Elements.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : stack_tests/CMakeFiles/debug-StackStress.2x10000Elements.dir/depend

