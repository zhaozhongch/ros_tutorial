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
CMAKE_SOURCE_DIR = /home/zhaozhong/C++Test/ros_tutorial/templateTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhaozhong/C++Test/ros_tutorial/templateTest/build

# Include any dependencies generated for this target.
include CMakeFiles/templateClass1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/templateClass1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/templateClass1.dir/flags.make

CMakeFiles/templateClass1.dir/templateClass1.cpp.o: CMakeFiles/templateClass1.dir/flags.make
CMakeFiles/templateClass1.dir/templateClass1.cpp.o: ../templateClass1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zhaozhong/C++Test/ros_tutorial/templateTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/templateClass1.dir/templateClass1.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/templateClass1.dir/templateClass1.cpp.o -c /home/zhaozhong/C++Test/ros_tutorial/templateTest/templateClass1.cpp

CMakeFiles/templateClass1.dir/templateClass1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/templateClass1.dir/templateClass1.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zhaozhong/C++Test/ros_tutorial/templateTest/templateClass1.cpp > CMakeFiles/templateClass1.dir/templateClass1.cpp.i

CMakeFiles/templateClass1.dir/templateClass1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/templateClass1.dir/templateClass1.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zhaozhong/C++Test/ros_tutorial/templateTest/templateClass1.cpp -o CMakeFiles/templateClass1.dir/templateClass1.cpp.s

CMakeFiles/templateClass1.dir/templateClass1.cpp.o.requires:

.PHONY : CMakeFiles/templateClass1.dir/templateClass1.cpp.o.requires

CMakeFiles/templateClass1.dir/templateClass1.cpp.o.provides: CMakeFiles/templateClass1.dir/templateClass1.cpp.o.requires
	$(MAKE) -f CMakeFiles/templateClass1.dir/build.make CMakeFiles/templateClass1.dir/templateClass1.cpp.o.provides.build
.PHONY : CMakeFiles/templateClass1.dir/templateClass1.cpp.o.provides

CMakeFiles/templateClass1.dir/templateClass1.cpp.o.provides.build: CMakeFiles/templateClass1.dir/templateClass1.cpp.o


# Object files for target templateClass1
templateClass1_OBJECTS = \
"CMakeFiles/templateClass1.dir/templateClass1.cpp.o"

# External object files for target templateClass1
templateClass1_EXTERNAL_OBJECTS =

templateClass1: CMakeFiles/templateClass1.dir/templateClass1.cpp.o
templateClass1: CMakeFiles/templateClass1.dir/build.make
templateClass1: CMakeFiles/templateClass1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zhaozhong/C++Test/ros_tutorial/templateTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable templateClass1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/templateClass1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/templateClass1.dir/build: templateClass1

.PHONY : CMakeFiles/templateClass1.dir/build

CMakeFiles/templateClass1.dir/requires: CMakeFiles/templateClass1.dir/templateClass1.cpp.o.requires

.PHONY : CMakeFiles/templateClass1.dir/requires

CMakeFiles/templateClass1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/templateClass1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/templateClass1.dir/clean

CMakeFiles/templateClass1.dir/depend:
	cd /home/zhaozhong/C++Test/ros_tutorial/templateTest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhaozhong/C++Test/ros_tutorial/templateTest /home/zhaozhong/C++Test/ros_tutorial/templateTest /home/zhaozhong/C++Test/ros_tutorial/templateTest/build /home/zhaozhong/C++Test/ros_tutorial/templateTest/build /home/zhaozhong/C++Test/ros_tutorial/templateTest/build/CMakeFiles/templateClass1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/templateClass1.dir/depend

