cmake_minimum_required(VERSION 3.20)

project(Family_Phone_Book LANGUAGES CXX RC)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(wxWidgets_ROOT_DIR "${CMAKE_SOURCE_DIR}/external/wxWidgets")
set(wxWidgets_LIB_DIR "${wxWidgets_ROOT_DIR}/lib/vc14x_x64_dll")
set(wxWidgets_CONFIGURATION mswu)

find_package(wxWidgets REQUIRED COMPONENTS core base)
include(${wxWidgets_USE_FILE})

file(GLOB SOURCES CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/*.cpp"
)

set(RESOURCE_FILES resource.rc)

add_executable(${PROJECT_NAME} WIN32 ${SOURCES} ${RESOURCE_FILES})

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${wxWidgets_LIBRARIES}
)

file(GLOB WX_DLLS
    "${wxWidgets_LIB_DIR}/*.dll"
)

file(GLOB TEXT_FILES
    "${CMAKE_SOURCE_DIR}/*.txt"
)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${WX_DLLS}
        "$<TARGET_FILE_DIR:${PROJECT_NAME}>"
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
        ${TEXT_FILES}
        "$<TARGET_FILE_DIR:${PROJECT_NAME}>"
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "${CMAKE_SOURCE_DIR}/photos"
        $<TARGET_FILE_DIR:${PROJECT_NAME}>/photos
)