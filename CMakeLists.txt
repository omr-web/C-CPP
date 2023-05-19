
cmake_minimum_required(VERSION 3.8)
project( cppCodes )


include_directories( 
    ${PROJECT_SOURCE_DIR}/headers   )
          

# add_executable( MyClass  src/main.cpp src/MyClass.cpp
                      
#               )

# add_executable( MyClass2  src/main.cpp src/MyClass_2.cpp
                      
#               )

# add_executable(Doctor src/main.cpp src/doctor.cpp)

add_executable( Pointers pointers.cpp                               
              )

# add_executable( StringLibrary src/string_library.cpp
#                             src/main.cpp
                                                         
#               )

add_executable( Structures data_structures.cpp
                                         
)

add_executable(Inline inline_keyword.cpp )
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

add_executable(ConstStatic const_static_keywords.cpp)

add_executable(Friend friend.cpp)



add_executable( SintLibrary src/sint.cpp
                            src/main.cpp
                                                         
              )

