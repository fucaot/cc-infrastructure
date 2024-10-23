file(GLOB_RECURSE srcs CONFIGURE_DEPENDS src/*.cpp include/*.h)
add_executable(core ${srcs})

target_include_directories(core PUBLIC include)

target_link_libraries(core PUBLIC engine)
