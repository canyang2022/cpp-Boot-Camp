# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = "/home/cyang46/Documents/CPP BootCamp/Group Project/Team-Treadless_fi"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/cyang46/Documents/CPP BootCamp/Group Project/Team-Treadless_fi/build"

# Utility rule file for avic_autogen.

# Include the progress variables for this target.
include App/Avic/CMakeFiles/avic_autogen.dir/progress.make

App/Avic/CMakeFiles/avic_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir="/home/cyang46/Documents/CPP BootCamp/Group Project/Team-Treadless_fi/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC, UIC and RCC for target avic"
	cd "/home/cyang46/Documents/CPP BootCamp/Group Project/Team-Treadless_fi/build/App/Avic" && /usr/bin/cmake -E cmake_autogen "/home/cyang46/Documents/CPP BootCamp/Group Project/Team-Treadless_fi/build/App/Avic/CMakeFiles/avic_autogen.dir" ""

avic_autogen: App/Avic/CMakeFiles/avic_autogen
avic_autogen: App/Avic/CMakeFiles/avic_autogen.dir/build.make

.PHONY : avic_autogen

# Rule to build all files generated by this target.
App/Avic/CMakeFiles/avic_autogen.dir/build: avic_autogen

.PHONY : App/Avic/CMakeFiles/avic_autogen.dir/build

App/Avic/CMakeFiles/avic_autogen.dir/clean:
	cd "/home/cyang46/Documents/CPP BootCamp/Group Project/Team-Treadless_fi/build/App/Avic" && $(CMAKE_COMMAND) -P CMakeFiles/avic_autogen.dir/cmake_clean.cmake
.PHONY : App/Avic/CMakeFiles/avic_autogen.dir/clean

App/Avic/CMakeFiles/avic_autogen.dir/depend:
	cd "/home/cyang46/Documents/CPP BootCamp/Group Project/Team-Treadless_fi/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/cyang46/Documents/CPP BootCamp/Group Project/Team-Treadless_fi" "/home/cyang46/Documents/CPP BootCamp/Group Project/Team-Treadless_fi/App/Avic" "/home/cyang46/Documents/CPP BootCamp/Group Project/Team-Treadless_fi/build" "/home/cyang46/Documents/CPP BootCamp/Group Project/Team-Treadless_fi/build/App/Avic" "/home/cyang46/Documents/CPP BootCamp/Group Project/Team-Treadless_fi/build/App/Avic/CMakeFiles/avic_autogen.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : App/Avic/CMakeFiles/avic_autogen.dir/depend
