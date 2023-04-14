
cmake_minimum_required(VERSION 3.8)
project( cppCodes )


include_directories( 
                      headers   )
                      
add_executable( Pointers pointers.cpp                               
              )

add_executable( StringLibrary src/string_library.cpp
                              main.cpp                               
              )

add_executable( Structures data_structures.cpp
                                         
)
