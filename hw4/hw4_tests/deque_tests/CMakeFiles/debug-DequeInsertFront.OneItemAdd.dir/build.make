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

# Utility rule file for debug-DequeInsertFront.OneItemAdd.

# Include the progress variables for this target.
include deque_tests/CMakeFiles/debug-DequeInsertFront.OneItemAdd.dir/progress.make

deque_tests/CMakeFiles/debug-DequeInsertFront.OneItemAdd:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/cs104/hw-ykelty/hw4/hw4_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Debugging DequeInsertFront.OneItemAdd with GDB..."
	cd /home/cs104/hw-ykelty/hw4 && gdb --args /home/cs104/hw-ykelty/hw4/hw4_tests/deque_tests/deque_tests --gtest_filter=DequeInsertFront.OneItemAdd

debug-DequeInsertFront.OneItemAdd: deque_tests/CMakeFiles/debug-DequeInsertFront.OneItemAdd
debug-DequeInsertFront.OneItemAdd: deque_tests/CMakeFiles/debug-DequeInsertFront.OneItemAdd.dir/build.make

.PHONY : debug-DequeInsertFront.OneItemAdd

# Rule to build all files generated by this target.
deque_tests/CMakeFiles/debug-DequeInsertFront.OneItemAdd.dir/build: debug-DequeInsertFront.OneItemAdd

.PHONY : deque_tests/CMakeFiles/debug-DequeInsertFront.OneItemAdd.dir/build

deque_tests/CMakeFiles/debug-DequeInsertFront.OneItemAdd.dir/clean:
	cd /home/cs104/hw-ykelty/hw4/hw4_tests/deque_tests && $(CMAKE_COMMAND) -P CMakeFiles/debug-DequeInsertFront.OneItemAdd.dir/cmake_clean.cmake
.PHONY : deque_tests/CMakeFiles/debug-DequeInsertFront.OneItemAdd.dir/clean

deque_tests/CMakeFiles/debug-DequeInsertFront.OneItemAdd.dir/depend:
	cd /home/cs104/hw-ykelty/hw4/hw4_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cs104/hw-ykelty/hw4/hw4_tests /home/cs104/hw-ykelty/hw4/hw4_tests/deque_tests /home/cs104/hw-ykelty/hw4/hw4_tests /home/cs104/hw-ykelty/hw4/hw4_tests/deque_tests /home/cs104/hw-ykelty/hw4/hw4_tests/deque_tests/CMakeFiles/debug-DequeInsertFront.OneItemAdd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : deque_tests/CMakeFiles/debug-DequeInsertFront.OneItemAdd.dir/depend

