
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

add_executable( Reference references.cpp
                                         
)

add_executable( DefaultArguments default_arguments.cpp)

add_executable(functionOverloading function_overloading.cpp)

add_executable(dynamicMemory dynamic_memory.cpp)
add_executable(turNiteleyiciler tur_niteleyiciler.cpp)

add_executable(NewDelete new_delete.cpp)

add_executable(nameSpace namespace.cpp)

add_executable(Class classes.cpp)


add_executable(OperatorOverloading operator_overloading.cpp)

