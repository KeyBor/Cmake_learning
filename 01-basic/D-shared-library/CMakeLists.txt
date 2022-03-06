# cmake_minimum_required(VERSION 3.5)

# project(hello_shared_library)


# ############################################################
# # Create a library
# ############################################################

# #Generate the shared library from the library sources
# add_library(hello_shared_library SHARED
#             src/Hello.cpp)


# add_library(hello::library ALIAS hello_shared_library)

# target_include_directories(hello_shared_library PUBLIC ${PROJECT_SOURCE_DIR}/include)



# ############################################################
# # Create an executable
# ############################################################

# add_executable(hello_binary src/main.cpp)

# target_include_directories(hello_binary PUBLIC ${PROJECT_SOURCE_DIR}/include)

# target_link_libraries(hello_binary PRIVATE hello::library)


cmake_minimum_required(VERSION 3.5)

project(hello_shared_library)

############################################################
# Create a library
############################################################

#Generate the shared library from the library sources
add_library(hello_library SHARED 
    src/Hello.cpp
)
add_library(hello::library ALIAS hello_library)

target_include_directories(hello_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(hello_binary
    src/main.cpp
)

# target_include_directories(hello_binary PUBLIC ${PROJECT_SOURCE_DIR}/include)

# link the new hello_library target with the hello_binary target
target_link_libraries( hello_binary
    PRIVATE 
        hello::library
)