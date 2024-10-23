file(GLOB_RECURSE srcs CONFIGURE_DEPENDS src/*.cpp include/*.h)
add_library(cm STATIC ${srcs})

target_include_directories(cm PUBLIC include)


find_package(nlohmann_json CONFIG REQUIRED)

target_link_libraries(cm PRIVATE nlohmann_json::nlohmann_json)
