################# dependencies #################
### Qt/KDE
find_package(Qt6 REQUIRED CONFIG COMPONENTS Widgets)

################# lightlystyle target #################
set(lightlycommon_LIB_SRCS
    lightlyboxshadowrenderer.cpp
)

add_library(lightlycommon6 ${lightlycommon_LIB_SRCS})

generate_export_header(lightlycommon6
    BASE_NAME lightlycommon
    EXPORT_FILE_NAME lightlycommon_export.h)


find_package(Qt6 REQUIRED CONFIG COMPONENTS Core Gui)
target_include_directories(lightlycommon6 PUBLIC
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>"
    "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
    "$<INSTALL_INTERFACE:${KDE_INSTALL_INCLUDEDIR}/LightlyCommon6>"
)
target_link_libraries(lightlycommon6 PRIVATE 
    Qt6::Core
    Qt6::Gui
)


target_link_libraries(lightlycommon6
    PUBLIC
        Qt6::Core
        Qt6::Gui)

set_target_properties(lightlycommon6 PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR})

install(TARGETS lightlycommon6 ${INSTALL_TARGETS_DEFAULT_ARGS} LIBRARY NAMELINK_SKIP)
