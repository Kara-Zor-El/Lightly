# Install script for directory: /home/kara/Dev/manual-installs/Lightly/kstyle/config

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "lightly" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/kstyle_lightly_config.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/kstyle_lightly_config.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/kstyle_lightly_config.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/qt/plugins" TYPE MODULE FILES "/home/kara/Dev/manual-installs/Lightly/build/bin/kstyle_lightly_config.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/kstyle_lightly_config.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/kstyle_lightly_config.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/qt/plugins/kstyle_lightly_config.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "lightly" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kservices5" TYPE FILE FILES "/home/kara/Dev/manual-installs/Lightly/kstyle/config/lightlystyleconfig.desktop")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "lightly" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lightly-settings6" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lightly-settings6")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lightly-settings6"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/kara/Dev/manual-installs/Lightly/build/bin/lightly-settings6")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lightly-settings6" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lightly-settings6")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/lightly-settings6")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "lightly" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/icons/hicolor/scalable/apps" TYPE FILE RENAME "lightly-settings.svgz" FILES "/home/kara/Dev/manual-installs/Lightly/kstyle/config/sc-apps-lightly-settings.svgz")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "lightly" OR NOT CMAKE_INSTALL_COMPONENT)
  
    set(DESTDIR_VALUE "$ENV{DESTDIR}")
    if (NOT DESTDIR_VALUE)
        execute_process(COMMAND "/usr/bin/cmake" -E touch "/usr/share/icons/hicolor")
        set(HAVE_GTK_UPDATE_ICON_CACHE_EXEC /usr/bin/gtk-update-icon-cache)
        if (HAVE_GTK_UPDATE_ICON_CACHE_EXEC)
            execute_process(COMMAND /usr/bin/gtk-update-icon-cache -q -t -i . WORKING_DIRECTORY "/usr/share/icons/hicolor")
        endif ()
    endif (NOT DESTDIR_VALUE)
    
endif()

