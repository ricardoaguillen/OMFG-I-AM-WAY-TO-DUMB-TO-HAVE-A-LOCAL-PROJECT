# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Programas\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Programas\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\General Files\Coding Files\Clion Projects\saved"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\General Files\Coding Files\Clion Projects\saved\cmake-build-debug"

# Utility rule file for NightlyTest.

# Include the progress variables for this target.
include lib/yaml-cpp/CMakeFiles/NightlyTest.dir/progress.make

lib/yaml-cpp/CMakeFiles/NightlyTest:
	cd /d "D:\General Files\Coding Files\Clion Projects\saved\cmake-build-debug\lib\yaml-cpp" && "D:\Programas\CLion 2020.3.2\bin\cmake\win\bin\ctest.exe" -D NightlyTest

NightlyTest: lib/yaml-cpp/CMakeFiles/NightlyTest
NightlyTest: lib/yaml-cpp/CMakeFiles/NightlyTest.dir/build.make

.PHONY : NightlyTest

# Rule to build all files generated by this target.
lib/yaml-cpp/CMakeFiles/NightlyTest.dir/build: NightlyTest

.PHONY : lib/yaml-cpp/CMakeFiles/NightlyTest.dir/build

lib/yaml-cpp/CMakeFiles/NightlyTest.dir/clean:
	cd /d "D:\General Files\Coding Files\Clion Projects\saved\cmake-build-debug\lib\yaml-cpp" && $(CMAKE_COMMAND) -P CMakeFiles\NightlyTest.dir\cmake_clean.cmake
.PHONY : lib/yaml-cpp/CMakeFiles/NightlyTest.dir/clean

lib/yaml-cpp/CMakeFiles/NightlyTest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\General Files\Coding Files\Clion Projects\saved" "D:\General Files\Coding Files\Clion Projects\saved\lib\yaml-cpp" "D:\General Files\Coding Files\Clion Projects\saved\cmake-build-debug" "D:\General Files\Coding Files\Clion Projects\saved\cmake-build-debug\lib\yaml-cpp" "D:\General Files\Coding Files\Clion Projects\saved\cmake-build-debug\lib\yaml-cpp\CMakeFiles\NightlyTest.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : lib/yaml-cpp/CMakeFiles/NightlyTest.dir/depend

