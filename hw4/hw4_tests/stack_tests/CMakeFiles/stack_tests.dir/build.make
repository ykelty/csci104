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

# Include any dependencies generated for this target.
include stack_tests/CMakeFiles/stack_tests.dir/depend.make

# Include the progress variables for this target.
include stack_tests/CMakeFiles/stack_tests.dir/progress.make

# Include the compile flags for this target's objects.
include stack_tests/CMakeFiles/stack_tests.dir/flags.make

stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.o: stack_tests/CMakeFiles/stack_tests.dir/flags.make
stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.o: stack_tests/stack_tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw4/hw4_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.o"
	cd /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stack_tests.dir/stack_tests.cpp.o -c /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests/stack_tests.cpp

stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stack_tests.dir/stack_tests.cpp.i"
	cd /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests/stack_tests.cpp > CMakeFiles/stack_tests.dir/stack_tests.cpp.i

stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stack_tests.dir/stack_tests.cpp.s"
	cd /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests/stack_tests.cpp -o CMakeFiles/stack_tests.dir/stack_tests.cpp.s

stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.o.requires:

.PHONY : stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.o.requires

stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.o.provides: stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.o.requires
	$(MAKE) -f stack_tests/CMakeFiles/stack_tests.dir/build.make stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.o.provides.build
.PHONY : stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.o.provides

stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.o.provides.build: stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.o


# Object files for target stack_tests
stack_tests_OBJECTS = \
"CMakeFiles/stack_tests.dir/stack_tests.cpp.o"

# External object files for target stack_tests
stack_tests_EXTERNAL_OBJECTS =

stack_tests/stack_tests: stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.o
stack_tests/stack_tests: stack_tests/CMakeFiles/stack_tests.dir/build.make
stack_tests/stack_tests: testing_utils/libtesting_utils.a
stack_tests/stack_tests: /usr/lib/libgtest_main.a
stack_tests/stack_tests: /usr/lib/libgtest.a
stack_tests/stack_tests: testing_utils/kwsys/libkwsys.a
stack_tests/stack_tests: testing_utils/libperf/libperf.a
stack_tests/stack_tests: stack_tests/CMakeFiles/stack_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cs104/hw-ykelty/hw4/hw4_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stack_tests"
	cd /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stack_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
stack_tests/CMakeFiles/stack_tests.dir/build: stack_tests/stack_tests

.PHONY : stack_tests/CMakeFiles/stack_tests.dir/build

stack_tests/CMakeFiles/stack_tests.dir/requires: stack_tests/CMakeFiles/stack_tests.dir/stack_tests.cpp.o.requires

.PHONY : stack_tests/CMakeFiles/stack_tests.dir/requires

stack_tests/CMakeFiles/stack_tests.dir/clean:
	cd /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests && $(CMAKE_COMMAND) -P CMakeFiles/stack_tests.dir/cmake_clean.cmake
.PHONY : stack_tests/CMakeFiles/stack_tests.dir/clean

stack_tests/CMakeFiles/stack_tests.dir/depend:
	cd /home/cs104/hw-ykelty/hw4/hw4_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cs104/hw-ykelty/hw4/hw4_tests /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests /home/cs104/hw-ykelty/hw4/hw4_tests /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests /home/cs104/hw-ykelty/hw4/hw4_tests/stack_tests/CMakeFiles/stack_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : stack_tests/CMakeFiles/stack_tests.dir/depend

