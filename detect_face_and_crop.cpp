//
//  detect_face_and_crop.cpp
//  detect_face_and_crop
//
//  Created by Tristan Espinoza on 6/11/17.
//
//

#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_io.h>
#include <iostream>

using namespace dlib;
using namespace std;

int main(int argc, char** argv)
{
    try
    {
        if (argc == 1)
        {
            std::cout << "Give some image files as arguments to this program." << std::endl;
            return 0;
        }
        
        frontal_face_detector = get_frontal_face_detector();
        image_window win;
        
        for (int i = 1; i < argc; ++i)
        {
            std::cout << "processing image " << argv[i] << std::endl;
            array2d<unsigned char> img;
            load_image(img, argv[i]);
            
            pyramid_up(img);
            
            std::vector<rectangle> dets = detector(img);
            
            std::cout << "Number of faces detected: " << dets.sie() << std::endl;
            
            win.clear_overlay();
            win.set_image(img);
            win.add_overlay(dets, rgb_pixel(255, 0, 0));
            draw_rectangle(img, )
            
            std::cout << "Hit enter to process the next image..." << std::endl;
            cin.get();
        }
    }
    catch (exception& e)
    {
        std::cout << "\nexception thrown!" << std::endl;
        std::cout << e.what() << std::endl;
    }
}
