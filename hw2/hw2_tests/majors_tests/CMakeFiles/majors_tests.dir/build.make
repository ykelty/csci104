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
CMAKE_SOURCE_DIR = /home/cs104/hw-ykelty/hw2/hw2_tests

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/cs104/hw-ykelty/hw2/hw2_tests

# Include any dependencies generated for this target.
include majors_tests/CMakeFiles/majors_tests.dir/depend.make

# Include the progress variables for this target.
include majors_tests/CMakeFiles/majors_tests.dir/progress.make

# Include the compile flags for this target's objects.
include majors_tests/CMakeFiles/majors_tests.dir/flags.make

majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.o: majors_tests/CMakeFiles/majors_tests.dir/flags.make
majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.o: majors_tests/majors_tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw2/hw2_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.o"
	cd /home/cs104/hw-ykelty/hw2/hw2_tests/majors_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/majors_tests.dir/majors_tests.cpp.o -c /home/cs104/hw-ykelty/hw2/hw2_tests/majors_tests/majors_tests.cpp

majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/majors_tests.dir/majors_tests.cpp.i"
	cd /home/cs104/hw-ykelty/hw2/hw2_tests/majors_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw2/hw2_tests/majors_tests/majors_tests.cpp > CMakeFiles/majors_tests.dir/majors_tests.cpp.i

majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/majors_tests.dir/majors_tests.cpp.s"
	cd /home/cs104/hw-ykelty/hw2/hw2_tests/majors_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw2/hw2_tests/majors_tests/majors_tests.cpp -o CMakeFiles/majors_tests.dir/majors_tests.cpp.s

majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.o.requires:

.PHONY : majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.o.requires

majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.o.provides: majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.o.requires
	$(MAKE) -f majors_tests/CMakeFiles/majors_tests.dir/build.make majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.o.provides.build
.PHONY : majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.o.provides

majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.o.provides.build: majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.o


# Object files for target majors_tests
majors_tests_OBJECTS = \
"CMakeFiles/majors_tests.dir/majors_tests.cpp.o"

# External object files for target majors_tests
majors_tests_EXTERNAL_OBJECTS =

majors_tests/majors_tests: majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.o
majors_tests/majors_tests: majors_tests/CMakeFiles/majors_tests.dir/build.make
majors_tests/majors_tests: testing_utils/libtesting_utils.a
majors_tests/majors_tests: /usr/lib/libgtest_main.a
majors_tests/majors_tests: /usr/lib/libgtest.a
majors_tests/majors_tests: testing_utils/kwsys/libkwsys.a
majors_tests/majors_tests: testing_utils/libperf/libperf.a
majors_tests/majors_tests: majors_tests/CMakeFiles/majors_tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cs104/hw-ykelty/hw2/hw2_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable majors_tests"
	cd /home/cs104/hw-ykelty/hw2/hw2_tests/majors_tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/majors_tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
majors_tests/CMakeFiles/majors_tests.dir/build: majors_tests/majors_tests

.PHONY : majors_tests/CMakeFiles/majors_tests.dir/build

majors_tests/CMakeFiles/majors_tests.dir/requires: majors_tests/CMakeFiles/majors_tests.dir/majors_tests.cpp.o.requires

.PHONY : majors_tests/CMakeFiles/majors_tests.dir/requires

majors_tests/CMakeFiles/majors_tests.dir/clean:
	cd /home/cs104/hw-ykelty/hw2/hw2_tests/majors_tests && $(CMAKE_COMMAND) -P CMakeFiles/majors_tests.dir/cmake_clean.cmake
.PHONY : majors_tests/CMakeFiles/majors_tests.dir/clean

majors_tests/CMakeFiles/majors_tests.dir/depend:
	cd /home/cs104/hw-ykelty/hw2/hw2_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cs104/hw-ykelty/hw2/hw2_tests /home/cs104/hw-ykelty/hw2/hw2_tests/majors_tests /home/cs104/hw-ykelty/hw2/hw2_tests /home/cs104/hw-ykelty/hw2/hw2_tests/majors_tests /home/cs104/hw-ykelty/hw2/hw2_tests/majors_tests/CMakeFiles/majors_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : majors_tests/CMakeFiles/majors_tests.dir/depend

