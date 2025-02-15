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
CMAKE_SOURCE_DIR = /home/azzathesis/ardupilot/modules/PX4Firmware

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/azzathesis/ardupilot/build/px4-v2/modules/PX4Firmware

# Utility rule file for mixer_gen.

# Include the progress variables for this target.
include src/modules/systemlib/mixer/CMakeFiles/mixer_gen.dir/progress.make

src/modules/systemlib/mixer/CMakeFiles/mixer_gen: src/modules/systemlib/mixer/mixer_multirotor.generated.h
src/modules/systemlib/mixer/CMakeFiles/mixer_gen: /home/azzathesis/ardupilot/modules/PX4Firmware/src/modules/systemlib/mixer/multi_tables.py


src/modules/systemlib/mixer/mixer_multirotor.generated.h:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/azzathesis/ardupilot/build/px4-v2/modules/PX4Firmware/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating mixer_multirotor.generated.h"
	cd /home/azzathesis/ardupilot/build/px4-v2/modules/PX4Firmware/src/modules/systemlib/mixer && /usr/bin/python /home/azzathesis/ardupilot/modules/PX4Firmware/src/modules/systemlib/mixer/multi_tables.py > mixer_multirotor.generated.h

mixer_gen: src/modules/systemlib/mixer/CMakeFiles/mixer_gen
mixer_gen: src/modules/systemlib/mixer/mixer_multirotor.generated.h
mixer_gen: src/modules/systemlib/mixer/CMakeFiles/mixer_gen.dir/build.make

.PHONY : mixer_gen

# Rule to build all files generated by this target.
src/modules/systemlib/mixer/CMakeFiles/mixer_gen.dir/build: mixer_gen

.PHONY : src/modules/systemlib/mixer/CMakeFiles/mixer_gen.dir/build

src/modules/systemlib/mixer/CMakeFiles/mixer_gen.dir/clean:
	cd /home/azzathesis/ardupilot/build/px4-v2/modules/PX4Firmware/src/modules/systemlib/mixer && $(CMAKE_COMMAND) -P CMakeFiles/mixer_gen.dir/cmake_clean.cmake
.PHONY : src/modules/systemlib/mixer/CMakeFiles/mixer_gen.dir/clean

src/modules/systemlib/mixer/CMakeFiles/mixer_gen.dir/depend:
	cd /home/azzathesis/ardupilot/build/px4-v2/modules/PX4Firmware && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/azzathesis/ardupilot/modules/PX4Firmware /home/azzathesis/ardupilot/modules/PX4Firmware/src/modules/systemlib/mixer /home/azzathesis/ardupilot/build/px4-v2/modules/PX4Firmware /home/azzathesis/ardupilot/build/px4-v2/modules/PX4Firmware/src/modules/systemlib/mixer /home/azzathesis/ardupilot/build/px4-v2/modules/PX4Firmware/src/modules/systemlib/mixer/CMakeFiles/mixer_gen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/modules/systemlib/mixer/CMakeFiles/mixer_gen.dir/depend

