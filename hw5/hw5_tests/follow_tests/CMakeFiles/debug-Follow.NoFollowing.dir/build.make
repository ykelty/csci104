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
CMAKE_SOURCE_DIR = /home/cs104/hw-ykelty/hw5/hw5_tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cs104/hw-ykelty/hw5/hw5_tests

# Utility rule file for debug-Follow.NoFollowing.

# Include the progress variables for this target.
include follow_tests/CMakeFiles/debug-Follow.NoFollowing.dir/progress.make

follow_tests/CMakeFiles/debug-Follow.NoFollowing:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cs104/hw-ykelty/hw5/hw5_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Debugging Follow.NoFollowing with GDB..."
	cd /home/cs104/hw-ykelty/hw5 && gdb --args /home/cs104/hw-ykelty/hw5/hw5_tests/follow_tests/follow_tests --gtest_filter=Follow.NoFollowing

debug-Follow.NoFollowing: follow_tests/CMakeFiles/debug-Follow.NoFollowing
debug-Follow.NoFollowing: follow_tests/CMakeFiles/debug-Follow.NoFollowing.dir/build.make

.PHONY : debug-Follow.NoFollowing

# Rule to build all files generated by this target.
follow_tests/CMakeFiles/debug-Follow.NoFollowing.dir/build: debug-Follow.NoFollowing

.PHONY : follow_tests/CMakeFiles/debug-Follow.NoFollowing.dir/build

follow_tests/CMakeFiles/debug-Follow.NoFollowing.dir/clean:
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/follow_tests && $(CMAKE_COMMAND) -P CMakeFiles/debug-Follow.NoFollowing.dir/cmake_clean.cmake
.PHONY : follow_tests/CMakeFiles/debug-Follow.NoFollowing.dir/clean

follow_tests/CMakeFiles/debug-Follow.NoFollowing.dir/depend:
	cd /home/cs104/hw-ykelty/hw5/hw5_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cs104/hw-ykelty/hw5/hw5_tests /home/cs104/hw-ykelty/hw5/hw5_tests/follow_tests /home/cs104/hw-ykelty/hw5/hw5_tests /home/cs104/hw-ykelty/hw5/hw5_tests/follow_tests /home/cs104/hw-ykelty/hw5/hw5_tests/follow_tests/CMakeFiles/debug-Follow.NoFollowing.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : follow_tests/CMakeFiles/debug-Follow.NoFollowing.dir/depend

