# Building procedure

- Delete the build folder
- Run: cmake -B build -G "MinGW Makefiles" -DCMAKE_CXX_COMPILER=g++

## Generating Images

- Update your build with the modified coding running: cmake --build build --config release
- Generate Image with: build\inOneWeekend.exe > 'file_image_name.ppm'