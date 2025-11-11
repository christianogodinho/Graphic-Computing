#include <iostream>
#include "color.h"
#include "vec3.h"

int main(){
    //Image 
    int image_width = 800;
    int image_height = 800;
    int squares = 8;

    int square_height = image_height/squares;
    int square_width = image_width/squares;

    //Render
    std::cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; j++){
        std::clog << "\rScanlines remaining: " << (image_height - j) << ' ' << std::flush;
        for (int i = 0; i< image_width; i++){

            int row = j/square_height;
            int col = i/square_width;

            bool paint_white = (row + col) % 2 ==0;

            auto pixel_color = color(double(paint_white ? 255 :0), double(paint_white ? 255 :0), double(paint_white ? 255 :0));
            write_color(std::cout, pixel_color);

        }
    }

    std::clog << "\r Done.          \n";
}