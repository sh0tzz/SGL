# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/user/programming/SGL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/user/programming/SGL/build

# Include any dependencies generated for this target.
include CMakeFiles/SGL.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SGL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SGL.dir/flags.make

CMakeFiles/SGL.dir/main.cpp.o: CMakeFiles/SGL.dir/flags.make
CMakeFiles/SGL.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/programming/SGL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SGL.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SGL.dir/main.cpp.o -c /home/user/programming/SGL/main.cpp

CMakeFiles/SGL.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SGL.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/programming/SGL/main.cpp > CMakeFiles/SGL.dir/main.cpp.i

CMakeFiles/SGL.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SGL.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/programming/SGL/main.cpp -o CMakeFiles/SGL.dir/main.cpp.s

CMakeFiles/SGL.dir/SGL/SGL_Funcs.cpp.o: CMakeFiles/SGL.dir/flags.make
CMakeFiles/SGL.dir/SGL/SGL_Funcs.cpp.o: ../SGL/SGL_Funcs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/programming/SGL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SGL.dir/SGL/SGL_Funcs.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SGL.dir/SGL/SGL_Funcs.cpp.o -c /home/user/programming/SGL/SGL/SGL_Funcs.cpp

CMakeFiles/SGL.dir/SGL/SGL_Funcs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SGL.dir/SGL/SGL_Funcs.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/programming/SGL/SGL/SGL_Funcs.cpp > CMakeFiles/SGL.dir/SGL/SGL_Funcs.cpp.i

CMakeFiles/SGL.dir/SGL/SGL_Funcs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SGL.dir/SGL/SGL_Funcs.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/programming/SGL/SGL/SGL_Funcs.cpp -o CMakeFiles/SGL.dir/SGL/SGL_Funcs.cpp.s

CMakeFiles/SGL.dir/SGL/SGL_Parent/SGL_Parent.cpp.o: CMakeFiles/SGL.dir/flags.make
CMakeFiles/SGL.dir/SGL/SGL_Parent/SGL_Parent.cpp.o: ../SGL/SGL_Parent/SGL_Parent.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/programming/SGL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SGL.dir/SGL/SGL_Parent/SGL_Parent.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SGL.dir/SGL/SGL_Parent/SGL_Parent.cpp.o -c /home/user/programming/SGL/SGL/SGL_Parent/SGL_Parent.cpp

CMakeFiles/SGL.dir/SGL/SGL_Parent/SGL_Parent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SGL.dir/SGL/SGL_Parent/SGL_Parent.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/programming/SGL/SGL/SGL_Parent/SGL_Parent.cpp > CMakeFiles/SGL.dir/SGL/SGL_Parent/SGL_Parent.cpp.i

CMakeFiles/SGL.dir/SGL/SGL_Parent/SGL_Parent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SGL.dir/SGL/SGL_Parent/SGL_Parent.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/programming/SGL/SGL/SGL_Parent/SGL_Parent.cpp -o CMakeFiles/SGL.dir/SGL/SGL_Parent/SGL_Parent.cpp.s

CMakeFiles/SGL.dir/SGL/SGL_Widget/SGL_Widget.cpp.o: CMakeFiles/SGL.dir/flags.make
CMakeFiles/SGL.dir/SGL/SGL_Widget/SGL_Widget.cpp.o: ../SGL/SGL_Widget/SGL_Widget.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/programming/SGL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SGL.dir/SGL/SGL_Widget/SGL_Widget.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SGL.dir/SGL/SGL_Widget/SGL_Widget.cpp.o -c /home/user/programming/SGL/SGL/SGL_Widget/SGL_Widget.cpp

CMakeFiles/SGL.dir/SGL/SGL_Widget/SGL_Widget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SGL.dir/SGL/SGL_Widget/SGL_Widget.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/programming/SGL/SGL/SGL_Widget/SGL_Widget.cpp > CMakeFiles/SGL.dir/SGL/SGL_Widget/SGL_Widget.cpp.i

CMakeFiles/SGL.dir/SGL/SGL_Widget/SGL_Widget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SGL.dir/SGL/SGL_Widget/SGL_Widget.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/programming/SGL/SGL/SGL_Widget/SGL_Widget.cpp -o CMakeFiles/SGL.dir/SGL/SGL_Widget/SGL_Widget.cpp.s

CMakeFiles/SGL.dir/SGL/SGL_Label/SGL_Label.cpp.o: CMakeFiles/SGL.dir/flags.make
CMakeFiles/SGL.dir/SGL/SGL_Label/SGL_Label.cpp.o: ../SGL/SGL_Label/SGL_Label.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/user/programming/SGL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/SGL.dir/SGL/SGL_Label/SGL_Label.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SGL.dir/SGL/SGL_Label/SGL_Label.cpp.o -c /home/user/programming/SGL/SGL/SGL_Label/SGL_Label.cpp

CMakeFiles/SGL.dir/SGL/SGL_Label/SGL_Label.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SGL.dir/SGL/SGL_Label/SGL_Label.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/user/programming/SGL/SGL/SGL_Label/SGL_Label.cpp > CMakeFiles/SGL.dir/SGL/SGL_Label/SGL_Label.cpp.i

CMakeFiles/SGL.dir/SGL/SGL_Label/SGL_Label.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SGL.dir/SGL/SGL_Label/SGL_Label.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/user/programming/SGL/SGL/SGL_Label/SGL_Label.cpp -o CMakeFiles/SGL.dir/SGL/SGL_Label/SGL_Label.cpp.s

# Object files for target SGL
SGL_OBJECTS = \
"CMakeFiles/SGL.dir/main.cpp.o" \
"CMakeFiles/SGL.dir/SGL/SGL_Funcs.cpp.o" \
"CMakeFiles/SGL.dir/SGL/SGL_Parent/SGL_Parent.cpp.o" \
"CMakeFiles/SGL.dir/SGL/SGL_Widget/SGL_Widget.cpp.o" \
"CMakeFiles/SGL.dir/SGL/SGL_Label/SGL_Label.cpp.o"

# External object files for target SGL
SGL_EXTERNAL_OBJECTS =

SGL: CMakeFiles/SGL.dir/main.cpp.o
SGL: CMakeFiles/SGL.dir/SGL/SGL_Funcs.cpp.o
SGL: CMakeFiles/SGL.dir/SGL/SGL_Parent/SGL_Parent.cpp.o
SGL: CMakeFiles/SGL.dir/SGL/SGL_Widget/SGL_Widget.cpp.o
SGL: CMakeFiles/SGL.dir/SGL/SGL_Label/SGL_Label.cpp.o
SGL: CMakeFiles/SGL.dir/build.make
SGL: CMakeFiles/SGL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/user/programming/SGL/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable SGL"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SGL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SGL.dir/build: SGL

.PHONY : CMakeFiles/SGL.dir/build

CMakeFiles/SGL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SGL.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SGL.dir/clean

CMakeFiles/SGL.dir/depend:
	cd /home/user/programming/SGL/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/user/programming/SGL /home/user/programming/SGL /home/user/programming/SGL/build /home/user/programming/SGL/build /home/user/programming/SGL/build/CMakeFiles/SGL.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SGL.dir/depend

