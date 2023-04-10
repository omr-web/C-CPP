
cmake_minimum_required(VERSION 3.8)
project( ObjectTracking )
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS}
                      include   )
                      
add_executable( Pointers pointers.cpp 
                               
              )
# target_link_libraries( ObjectTracking ${OpenCV_LIBS} )