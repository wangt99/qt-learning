# includes directory
# set(HEADER_DIR "${CMAKE_SOURCE_DIR}/include")

file(GLOB sources PRIVATE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp")

add_executable(${PROJECT_NAME} ${sources})

target_link_libraries(${PROJECT_NAME} Qt6::Widgets)
# target_include_directories(${PROJECT_NAME} PUBLIC ${HEADER_DIR})


set_target_properties(${PROJECT_NAME} PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)