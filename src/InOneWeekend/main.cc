#include "rtweekend.h"

#include "camera.h"
#include "hittable.h"
#include "hittable_list.h"
#include "material.h"
#include "sphere.h"

int main(){

    hittable_list world;

    auto material1 = make_shared<metal>(color(0.5, 0.5, 0.5), 0.0);
    world.add(make_shared<sphere>(point3(1, 1, -1), 0.8, material1));

    auto material2 = make_shared<metal>(color(0.3, 0.0, 1.0), 0.0);
    world.add(make_shared<sphere>(point3(1, 1, 1), 0.8, material2));

    auto material3 = make_shared<metal>(color(0.4, 0.4, 0.7), 0.0);
    world.add(make_shared<sphere>(point3(1, -1, -1), 0.8, material3));

    auto material4 = make_shared<metal>(color(0.9, 0.5, 0.5), 0.0);
    world.add(make_shared<sphere>(point3(1, -1, 1), 0.8, material4));

    camera cam;

    cam.aspect_ratio      = 16.0 / 9.0;
    cam.image_width       = 1200;
    cam.samples_per_pixel = 100;
    cam.max_depth         = 50;

    cam.vfov     = 30;
    cam.lookfrom = point3(-8,0,0);
    cam.lookat   = point3(0,0,0);
    cam.vup      = vec3(0,1,0);

    cam.defocus_angle = 0;
    cam.focus_dist = 8.0; // focus_dist = length(lookat - lookfrom);

    //cam.defocus_angle = 0.6;
    //cam.focus_dist    = 10.0;

    cam.render(world);
}