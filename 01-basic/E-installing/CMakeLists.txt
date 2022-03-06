cmake_minimum_required(VERSION 3.5)

project(installing)

add_library(shared_library SHARED src/Hello.cpp)

target_include_directories(shared_library PUBLIC ${PROJECT_SOURCE_DIR}/include)


# Add an executable with the above sources
add_executable(cmake_examples_inst_bin
    src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries( cmake_examples_inst_bin
    PRIVATE 
        shared_library)


install(TARGETS cmake_examples_inst_bin DESTINATION bin)

install(TARGETS shared_library LIBRARY DESTINATION lib)

install(DIRECTORY ${PROJECT_SOURCE_DIR}/include/ DESTINATION include)
install(FILES cmake-examples.conf DESTINATION etc)