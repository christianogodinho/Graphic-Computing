cmake_minimum_required( VERSION 3.12.0 )

project ( RTWeekend LANGUAGES CXX )

# Source

set ( SOURCE_ONE_WEEKEND
    src/InOneWeekend/main.cc
)

# Executables 
add_executable(inOneWeekend     ${EXTERNAL} ${SOURCE_ONE_WEEKEND})
