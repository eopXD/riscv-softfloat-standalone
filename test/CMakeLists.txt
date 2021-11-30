include_directories(${INC})

add_executable(test test.c)
target_link_libraries(test softfloat)
