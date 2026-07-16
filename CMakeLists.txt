project(eui CXX ASM)

add_library(eui OBJECT
    include/eui/ctrl/euiControlBase.h
    include/eui/message/euiFontMgr.h
    include/eui/message/euiMessageMgr.h
    include/eui/message/euiScalableFontMgr.h
    include/eui/sys/euiSharcArchive.h

    src/eui/ctrl/euiControlBase.cpp
)

target_compile_options(eui PRIVATE -fno-exceptions)
target_compile_options(eui PRIVATE -fno-strict-aliasing)
target_compile_options(eui PRIVATE -Wno-invalid-offsetof)
target_include_directories(eui PUBLIC include/)

if(NOT TARGET sead)
  add_subdirectory(../sead)
endif()
if(NOT TARGET agl)
  add_subdirectory(../agl)
endif()
target_link_libraries(eui PUBLIC agl sead)
