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
include laundry_tests/CMakeFiles/hw4_laundry.dir/depend.make

# Include the progress variables for this target.
include laundry_tests/CMakeFiles/hw4_laundry.dir/progress.make

# Include the compile flags for this target's objects.
include laundry_tests/CMakeFiles/hw4_laundry.dir/flags.make

laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o: laundry_tests/CMakeFiles/hw4_laundry.dir/flags.make
laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o: /home/cs104/hw-ykelty/hw4/laundry.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw4/hw4_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o"
	cd /home/cs104/hw-ykelty/hw4/hw4_tests/laundry_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o -c /home/cs104/hw-ykelty/hw4/laundry.cpp

laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.i"
	cd /home/cs104/hw-ykelty/hw4/hw4_tests/laundry_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw4/laundry.cpp > CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.i

laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.s"
	cd /home/cs104/hw-ykelty/hw4/hw4_tests/laundry_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw4/laundry.cpp -o CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.s

laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o.requires:

.PHONY : laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o.requires

laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o.provides: laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o.requires
	$(MAKE) -f laundry_tests/CMakeFiles/hw4_laundry.dir/build.make laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o.provides.build
.PHONY : laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o.provides

laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o.provides.build: laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o


# Object files for target hw4_laundry
hw4_laundry_OBJECTS = \
"CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o"

# External object files for target hw4_laundry
hw4_laundry_EXTERNAL_OBJECTS =

laundry_tests/hw4_laundry: laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o
laundry_tests/hw4_laundry: laundry_tests/CMakeFiles/hw4_laundry.dir/build.make
laundry_tests/hw4_laundry: laundry_tests/CMakeFiles/hw4_laundry.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cs104/hw-ykelty/hw4/hw4_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hw4_laundry"
	cd /home/cs104/hw-ykelty/hw4/hw4_tests/laundry_tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw4_laundry.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
laundry_tests/CMakeFiles/hw4_laundry.dir/build: laundry_tests/hw4_laundry

.PHONY : laundry_tests/CMakeFiles/hw4_laundry.dir/build

laundry_tests/CMakeFiles/hw4_laundry.dir/requires: laundry_tests/CMakeFiles/hw4_laundry.dir/home/cs104/hw-ykelty/hw4/laundry.cpp.o.requires

.PHONY : laundry_tests/CMakeFiles/hw4_laundry.dir/requires

laundry_tests/CMakeFiles/hw4_laundry.dir/clean:
	cd /home/cs104/hw-ykelty/hw4/hw4_tests/laundry_tests && $(CMAKE_COMMAND) -P CMakeFiles/hw4_laundry.dir/cmake_clean.cmake
.PHONY : laundry_tests/CMakeFiles/hw4_laundry.dir/clean

laundry_tests/CMakeFiles/hw4_laundry.dir/depend:
	cd /home/cs104/hw-ykelty/hw4/hw4_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cs104/hw-ykelty/hw4/hw4_tests /home/cs104/hw-ykelty/hw4/hw4_tests/laundry_tests /home/cs104/hw-ykelty/hw4/hw4_tests /home/cs104/hw-ykelty/hw4/hw4_tests/laundry_tests /home/cs104/hw-ykelty/hw4/hw4_tests/laundry_tests/CMakeFiles/hw4_laundry.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : laundry_tests/CMakeFiles/hw4_laundry.dir/depend
