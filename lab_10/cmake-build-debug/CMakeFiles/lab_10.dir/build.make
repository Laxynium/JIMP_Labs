# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab_10.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab_10.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab_10.dir/flags.make

CMakeFiles/lab_10.dir/main.c.o: CMakeFiles/lab_10.dir/flags.make
CMakeFiles/lab_10.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab_10.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab_10.dir/main.c.o   -c /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/main.c

CMakeFiles/lab_10.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab_10.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/main.c > CMakeFiles/lab_10.dir/main.c.i

CMakeFiles/lab_10.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab_10.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/main.c -o CMakeFiles/lab_10.dir/main.c.s

CMakeFiles/lab_10.dir/main.c.o.requires:

.PHONY : CMakeFiles/lab_10.dir/main.c.o.requires

CMakeFiles/lab_10.dir/main.c.o.provides: CMakeFiles/lab_10.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/lab_10.dir/build.make CMakeFiles/lab_10.dir/main.c.o.provides.build
.PHONY : CMakeFiles/lab_10.dir/main.c.o.provides

CMakeFiles/lab_10.dir/main.c.o.provides.build: CMakeFiles/lab_10.dir/main.c.o


CMakeFiles/lab_10.dir/GenericList.c.o: CMakeFiles/lab_10.dir/flags.make
CMakeFiles/lab_10.dir/GenericList.c.o: ../GenericList.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/lab_10.dir/GenericList.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab_10.dir/GenericList.c.o   -c /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/GenericList.c

CMakeFiles/lab_10.dir/GenericList.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab_10.dir/GenericList.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/GenericList.c > CMakeFiles/lab_10.dir/GenericList.c.i

CMakeFiles/lab_10.dir/GenericList.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab_10.dir/GenericList.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/GenericList.c -o CMakeFiles/lab_10.dir/GenericList.c.s

CMakeFiles/lab_10.dir/GenericList.c.o.requires:

.PHONY : CMakeFiles/lab_10.dir/GenericList.c.o.requires

CMakeFiles/lab_10.dir/GenericList.c.o.provides: CMakeFiles/lab_10.dir/GenericList.c.o.requires
	$(MAKE) -f CMakeFiles/lab_10.dir/build.make CMakeFiles/lab_10.dir/GenericList.c.o.provides.build
.PHONY : CMakeFiles/lab_10.dir/GenericList.c.o.provides

CMakeFiles/lab_10.dir/GenericList.c.o.provides.build: CMakeFiles/lab_10.dir/GenericList.c.o


# Object files for target lab_10
lab_10_OBJECTS = \
"CMakeFiles/lab_10.dir/main.c.o" \
"CMakeFiles/lab_10.dir/GenericList.c.o"

# External object files for target lab_10
lab_10_EXTERNAL_OBJECTS =

lab_10: CMakeFiles/lab_10.dir/main.c.o
lab_10: CMakeFiles/lab_10.dir/GenericList.c.o
lab_10: CMakeFiles/lab_10.dir/build.make
lab_10: CMakeFiles/lab_10.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable lab_10"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab_10.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab_10.dir/build: lab_10

.PHONY : CMakeFiles/lab_10.dir/build

CMakeFiles/lab_10.dir/requires: CMakeFiles/lab_10.dir/main.c.o.requires
CMakeFiles/lab_10.dir/requires: CMakeFiles/lab_10.dir/GenericList.c.o.requires

.PHONY : CMakeFiles/lab_10.dir/requires

CMakeFiles/lab_10.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab_10.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab_10.dir/clean

CMakeFiles/lab_10.dir/depend:
	cd /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10 /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10 /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/cmake-build-debug /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/cmake-build-debug /Network/Servers/lab-server.local/NetUsers/2017.1n.grzegorz.gruszczyk/Documents/JIMP/JIMP_Labs/lab_10/cmake-build-debug/CMakeFiles/lab_10.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab_10.dir/depend
