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
include setops_tests/CMakeFiles/hw2_setops.dir/depend.make

# Include the progress variables for this target.
include setops_tests/CMakeFiles/hw2_setops.dir/progress.make

# Include the compile flags for this target's objects.
include setops_tests/CMakeFiles/hw2_setops.dir/flags.make

setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o: setops_tests/CMakeFiles/hw2_setops.dir/flags.make
setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o: /home/cs104/hw-ykelty/hw2/setops.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw2/hw2_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o"
	cd /home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o -c /home/cs104/hw-ykelty/hw2/setops.cpp

setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.i"
	cd /home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw2/setops.cpp > CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.i

setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.s"
	cd /home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw2/setops.cpp -o CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.s

setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o.requires:

.PHONY : setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o.requires

setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o.provides: setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o.requires
	$(MAKE) -f setops_tests/CMakeFiles/hw2_setops.dir/build.make setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o.provides.build
.PHONY : setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o.provides

setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o.provides.build: setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o


# Object files for target hw2_setops
hw2_setops_OBJECTS = \
"CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o"

# External object files for target hw2_setops
hw2_setops_EXTERNAL_OBJECTS =

setops_tests/libhw2_setops.a: setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o
setops_tests/libhw2_setops.a: setops_tests/CMakeFiles/hw2_setops.dir/build.make
setops_tests/libhw2_setops.a: setops_tests/CMakeFiles/hw2_setops.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cs104/hw-ykelty/hw2/hw2_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libhw2_setops.a"
	cd /home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests && $(CMAKE_COMMAND) -P CMakeFiles/hw2_setops.dir/cmake_clean_target.cmake
	cd /home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw2_setops.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
setops_tests/CMakeFiles/hw2_setops.dir/build: setops_tests/libhw2_setops.a

.PHONY : setops_tests/CMakeFiles/hw2_setops.dir/build

setops_tests/CMakeFiles/hw2_setops.dir/requires: setops_tests/CMakeFiles/hw2_setops.dir/home/cs104/hw-ykelty/hw2/setops.cpp.o.requires

.PHONY : setops_tests/CMakeFiles/hw2_setops.dir/requires

setops_tests/CMakeFiles/hw2_setops.dir/clean:
	cd /home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests && $(CMAKE_COMMAND) -P CMakeFiles/hw2_setops.dir/cmake_clean.cmake
.PHONY : setops_tests/CMakeFiles/hw2_setops.dir/clean

setops_tests/CMakeFiles/hw2_setops.dir/depend:
	cd /home/cs104/hw-ykelty/hw2/hw2_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cs104/hw-ykelty/hw2/hw2_tests /home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests /home/cs104/hw-ykelty/hw2/hw2_tests /home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests /home/cs104/hw-ykelty/hw2/hw2_tests/setops_tests/CMakeFiles/hw2_setops.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : setops_tests/CMakeFiles/hw2_setops.dir/depend

