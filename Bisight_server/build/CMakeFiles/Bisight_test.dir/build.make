# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/fuerte_workspace/sandbox/PanTilt/Bisight_server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/fuerte_workspace/sandbox/PanTilt/Bisight_server/build

# Include any dependencies generated for this target.
include CMakeFiles/Bisight_test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bisight_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bisight_test.dir/flags.make

CMakeFiles/Bisight_test.dir/src/bisight_test.o: CMakeFiles/Bisight_test.dir/flags.make
CMakeFiles/Bisight_test.dir/src/bisight_test.o: ../src/bisight_test.cpp
CMakeFiles/Bisight_test.dir/src/bisight_test.o: ../manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/stacks/bullet/manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/share/geometry_msgs/manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/share/sensor_msgs/manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/share/roslang/manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/share/roscpp/manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/share/rosconsole/manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/stacks/geometry/angles/manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/share/rospy/manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/share/rostest/manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/share/roswtf/manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/share/message_filters/manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/stacks/geometry/tf/manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /home/user/fuerte_workspace/sandbox/PanTilt/DPPanTilt_msgs/manifest.xml
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/stacks/geometry/tf/msg_gen/generated
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /opt/ros/fuerte/stacks/geometry/tf/srv_gen/generated
CMakeFiles/Bisight_test.dir/src/bisight_test.o: /home/user/fuerte_workspace/sandbox/PanTilt/DPPanTilt_msgs/msg_gen/generated
	$(CMAKE_COMMAND) -E cmake_progress_report /home/user/fuerte_workspace/sandbox/PanTilt/Bisight_server/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/Bisight_test.dir/src/bisight_test.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -DBT_USE_DOUBLE_PRECISION -DBT_EULER_DEFAULT_ZYX -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -o CMakeFiles/Bisight_test.dir/src/bisight_test.o -c /home/user/fuerte_workspace/sandbox/PanTilt/Bisight_server/src/bisight_test.cpp

CMakeFiles/Bisight_test.dir/src/bisight_test.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bisight_test.dir/src/bisight_test.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -DBT_USE_DOUBLE_PRECISION -DBT_EULER_DEFAULT_ZYX -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -E /home/user/fuerte_workspace/sandbox/PanTilt/Bisight_server/src/bisight_test.cpp > CMakeFiles/Bisight_test.dir/src/bisight_test.i

CMakeFiles/Bisight_test.dir/src/bisight_test.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bisight_test.dir/src/bisight_test.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -DBT_USE_DOUBLE_PRECISION -DBT_EULER_DEFAULT_ZYX -W -Wall -Wno-unused-parameter -fno-strict-aliasing -pthread -S /home/user/fuerte_workspace/sandbox/PanTilt/Bisight_server/src/bisight_test.cpp -o CMakeFiles/Bisight_test.dir/src/bisight_test.s

CMakeFiles/Bisight_test.dir/src/bisight_test.o.requires:
.PHONY : CMakeFiles/Bisight_test.dir/src/bisight_test.o.requires

CMakeFiles/Bisight_test.dir/src/bisight_test.o.provides: CMakeFiles/Bisight_test.dir/src/bisight_test.o.requires
	$(MAKE) -f CMakeFiles/Bisight_test.dir/build.make CMakeFiles/Bisight_test.dir/src/bisight_test.o.provides.build
.PHONY : CMakeFiles/Bisight_test.dir/src/bisight_test.o.provides

CMakeFiles/Bisight_test.dir/src/bisight_test.o.provides.build: CMakeFiles/Bisight_test.dir/src/bisight_test.o

# Object files for target Bisight_test
Bisight_test_OBJECTS = \
"CMakeFiles/Bisight_test.dir/src/bisight_test.o"

# External object files for target Bisight_test
Bisight_test_EXTERNAL_OBJECTS =

../bin/Bisight_test: CMakeFiles/Bisight_test.dir/src/bisight_test.o
../bin/Bisight_test: CMakeFiles/Bisight_test.dir/build.make
../bin/Bisight_test: CMakeFiles/Bisight_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../bin/Bisight_test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Bisight_test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bisight_test.dir/build: ../bin/Bisight_test
.PHONY : CMakeFiles/Bisight_test.dir/build

CMakeFiles/Bisight_test.dir/requires: CMakeFiles/Bisight_test.dir/src/bisight_test.o.requires
.PHONY : CMakeFiles/Bisight_test.dir/requires

CMakeFiles/Bisight_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Bisight_test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Bisight_test.dir/clean

CMakeFiles/Bisight_test.dir/depend:
	cd /home/user/fuerte_workspace/sandbox/PanTilt/Bisight_server/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/fuerte_workspace/sandbox/PanTilt/Bisight_server /home/user/fuerte_workspace/sandbox/PanTilt/Bisight_server /home/user/fuerte_workspace/sandbox/PanTilt/Bisight_server/build /home/user/fuerte_workspace/sandbox/PanTilt/Bisight_server/build /home/user/fuerte_workspace/sandbox/PanTilt/Bisight_server/build/CMakeFiles/Bisight_test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Bisight_test.dir/depend

