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

# Include any dependencies generated for this target.
include mentions_tests/CMakeFiles/hw5_mentions.dir/depend.make

# Include the progress variables for this target.
include mentions_tests/CMakeFiles/hw5_mentions.dir/progress.make

# Include the compile flags for this target's objects.
include mentions_tests/CMakeFiles/hw5_mentions.dir/flags.make

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o: mentions_tests/CMakeFiles/hw5_mentions.dir/flags.make
mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o: /home/cs104/hw-ykelty/hw5/util.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw5/hw5_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o -c /home/cs104/hw-ykelty/hw5/util.cpp

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.i"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw5/util.cpp > CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.i

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.s"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw5/util.cpp -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.s

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o.requires:

.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o.requires

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o.provides: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o.requires
	$(MAKE) -f mentions_tests/CMakeFiles/hw5_mentions.dir/build.make mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o.provides.build
.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o.provides

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o.provides.build: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o


mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o: mentions_tests/CMakeFiles/hw5_mentions.dir/flags.make
mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o: /home/cs104/hw-ykelty/hw5/tweet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw5/hw5_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o -c /home/cs104/hw-ykelty/hw5/tweet.cpp

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.i"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw5/tweet.cpp > CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.i

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.s"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw5/tweet.cpp -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.s

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o.requires:

.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o.requires

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o.provides: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o.requires
	$(MAKE) -f mentions_tests/CMakeFiles/hw5_mentions.dir/build.make mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o.provides.build
.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o.provides

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o.provides.build: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o


mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o: mentions_tests/CMakeFiles/hw5_mentions.dir/flags.make
mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o: /home/cs104/hw-ykelty/hw5/twiteng.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw5/hw5_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o -c /home/cs104/hw-ykelty/hw5/twiteng.cpp

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.i"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw5/twiteng.cpp > CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.i

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.s"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw5/twiteng.cpp -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.s

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o.requires:

.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o.requires

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o.provides: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o.requires
	$(MAKE) -f mentions_tests/CMakeFiles/hw5_mentions.dir/build.make mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o.provides.build
.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o.provides

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o.provides.build: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o


mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o: mentions_tests/CMakeFiles/hw5_mentions.dir/flags.make
mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o: /home/cs104/hw-ykelty/hw5/hsort.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw5/hw5_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o -c /home/cs104/hw-ykelty/hw5/hsort.cpp

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.i"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw5/hsort.cpp > CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.i

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.s"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw5/hsort.cpp -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.s

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o.requires:

.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o.requires

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o.provides: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o.requires
	$(MAKE) -f mentions_tests/CMakeFiles/hw5_mentions.dir/build.make mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o.provides.build
.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o.provides

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o.provides.build: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o


mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o: mentions_tests/CMakeFiles/hw5_mentions.dir/flags.make
mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o: /home/cs104/hw-ykelty/hw5/datetime.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw5/hw5_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o -c /home/cs104/hw-ykelty/hw5/datetime.cpp

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.i"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw5/datetime.cpp > CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.i

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.s"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw5/datetime.cpp -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.s

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o.requires:

.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o.requires

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o.provides: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o.requires
	$(MAKE) -f mentions_tests/CMakeFiles/hw5_mentions.dir/build.make mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o.provides.build
.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o.provides

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o.provides.build: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o


mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o: mentions_tests/CMakeFiles/hw5_mentions.dir/flags.make
mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o: /home/cs104/hw-ykelty/hw5/cmdhandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw5/hw5_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o -c /home/cs104/hw-ykelty/hw5/cmdhandler.cpp

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.i"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw5/cmdhandler.cpp > CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.i

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.s"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw5/cmdhandler.cpp -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.s

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o.requires:

.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o.requires

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o.provides: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o.requires
	$(MAKE) -f mentions_tests/CMakeFiles/hw5_mentions.dir/build.make mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o.provides.build
.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o.provides

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o.provides.build: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o


mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o: mentions_tests/CMakeFiles/hw5_mentions.dir/flags.make
mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o: /home/cs104/hw-ykelty/hw5/test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw5/hw5_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o -c /home/cs104/hw-ykelty/hw5/test.cpp

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.i"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw5/test.cpp > CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.i

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.s"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw5/test.cpp -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.s

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o.requires:

.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o.requires

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o.provides: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o.requires
	$(MAKE) -f mentions_tests/CMakeFiles/hw5_mentions.dir/build.make mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o.provides.build
.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o.provides

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o.provides.build: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o


mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o: mentions_tests/CMakeFiles/hw5_mentions.dir/flags.make
mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o: /home/cs104/hw-ykelty/hw5/handler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw5/hw5_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o -c /home/cs104/hw-ykelty/hw5/handler.cpp

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.i"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw5/handler.cpp > CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.i

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.s"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw5/handler.cpp -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.s

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o.requires:

.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o.requires

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o.provides: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o.requires
	$(MAKE) -f mentions_tests/CMakeFiles/hw5_mentions.dir/build.make mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o.provides.build
.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o.provides

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o.provides.build: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o


mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o: mentions_tests/CMakeFiles/hw5_mentions.dir/flags.make
mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o: /home/cs104/hw-ykelty/hw5/twitter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw5/hw5_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o -c /home/cs104/hw-ykelty/hw5/twitter.cpp

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.i"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw5/twitter.cpp > CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.i

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.s"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw5/twitter.cpp -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.s

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o.requires:

.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o.requires

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o.provides: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o.requires
	$(MAKE) -f mentions_tests/CMakeFiles/hw5_mentions.dir/build.make mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o.provides.build
.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o.provides

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o.provides.build: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o


mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o: mentions_tests/CMakeFiles/hw5_mentions.dir/flags.make
mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o: /home/cs104/hw-ykelty/hw5/user.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/cs104/hw-ykelty/hw5/hw5_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o -c /home/cs104/hw-ykelty/hw5/user.cpp

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.i"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/cs104/hw-ykelty/hw5/user.cpp > CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.i

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.s"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/cs104/hw-ykelty/hw5/user.cpp -o CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.s

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o.requires:

.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o.requires

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o.provides: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o.requires
	$(MAKE) -f mentions_tests/CMakeFiles/hw5_mentions.dir/build.make mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o.provides.build
.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o.provides

mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o.provides.build: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o


# Object files for target hw5_mentions
hw5_mentions_OBJECTS = \
"CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o" \
"CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o" \
"CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o" \
"CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o" \
"CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o" \
"CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o" \
"CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o" \
"CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o" \
"CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o" \
"CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o"

# External object files for target hw5_mentions
hw5_mentions_EXTERNAL_OBJECTS =

mentions_tests/libhw5_mentions.a: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o
mentions_tests/libhw5_mentions.a: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o
mentions_tests/libhw5_mentions.a: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o
mentions_tests/libhw5_mentions.a: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o
mentions_tests/libhw5_mentions.a: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o
mentions_tests/libhw5_mentions.a: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o
mentions_tests/libhw5_mentions.a: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o
mentions_tests/libhw5_mentions.a: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o
mentions_tests/libhw5_mentions.a: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o
mentions_tests/libhw5_mentions.a: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o
mentions_tests/libhw5_mentions.a: mentions_tests/CMakeFiles/hw5_mentions.dir/build.make
mentions_tests/libhw5_mentions.a: mentions_tests/CMakeFiles/hw5_mentions.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/cs104/hw-ykelty/hw5/hw5_tests/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX static library libhw5_mentions.a"
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && $(CMAKE_COMMAND) -P CMakeFiles/hw5_mentions.dir/cmake_clean_target.cmake
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hw5_mentions.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
mentions_tests/CMakeFiles/hw5_mentions.dir/build: mentions_tests/libhw5_mentions.a

.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/build

mentions_tests/CMakeFiles/hw5_mentions.dir/requires: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/util.cpp.o.requires
mentions_tests/CMakeFiles/hw5_mentions.dir/requires: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/tweet.cpp.o.requires
mentions_tests/CMakeFiles/hw5_mentions.dir/requires: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twiteng.cpp.o.requires
mentions_tests/CMakeFiles/hw5_mentions.dir/requires: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/hsort.cpp.o.requires
mentions_tests/CMakeFiles/hw5_mentions.dir/requires: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/datetime.cpp.o.requires
mentions_tests/CMakeFiles/hw5_mentions.dir/requires: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/cmdhandler.cpp.o.requires
mentions_tests/CMakeFiles/hw5_mentions.dir/requires: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/test.cpp.o.requires
mentions_tests/CMakeFiles/hw5_mentions.dir/requires: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/handler.cpp.o.requires
mentions_tests/CMakeFiles/hw5_mentions.dir/requires: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/twitter.cpp.o.requires
mentions_tests/CMakeFiles/hw5_mentions.dir/requires: mentions_tests/CMakeFiles/hw5_mentions.dir/home/cs104/hw-ykelty/hw5/user.cpp.o.requires

.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/requires

mentions_tests/CMakeFiles/hw5_mentions.dir/clean:
	cd /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests && $(CMAKE_COMMAND) -P CMakeFiles/hw5_mentions.dir/cmake_clean.cmake
.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/clean

mentions_tests/CMakeFiles/hw5_mentions.dir/depend:
	cd /home/cs104/hw-ykelty/hw5/hw5_tests && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/cs104/hw-ykelty/hw5/hw5_tests /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests /home/cs104/hw-ykelty/hw5/hw5_tests /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests /home/cs104/hw-ykelty/hw5/hw5_tests/mentions_tests/CMakeFiles/hw5_mentions.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : mentions_tests/CMakeFiles/hw5_mentions.dir/depend
