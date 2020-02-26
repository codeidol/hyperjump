set(TARGET use_allocator)
add_executable(${TARGET} use_allocator.cpp)
set_target_properties(${TARGET} PROPERTIES FOLDER "example")
target_include_directories(${TARGET} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${TARGET} PRIVATE libfoundation)
install(TARGETS ${TARGET} DESTINATION ${CMAKE_INSTALL_BINDIR})
source_group("" FILES use_allocator.cpp)

