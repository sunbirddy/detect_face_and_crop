//
//  detect_face_and_crop.cpp
//  detect_face_and_crop
//
//  Created by Tristan Espinoza on 6/11/17.
//
//

#include <dlib/dnn.h>
#include <dlib/gui_widgets.h>
#include <dlib/clustering.h>
#include <dlib/string.h>
#include <dlib/image_io.h>
#include <dlib/image_processing/frontal_face_detector.h>

using namespace dlib;
using namespace std;

int main (int argc, char** argv) try
{
    /* from dnn face recognition example */
    if (argc != 2)
    {
        cout << "Run this example by invoking it like this: " << endl;
        cout << "   ./dnn_face_recognition_ex faces/bald_guys.jpg" << endl;
        cout << endl;
        cout << "You will also need to get the face landmarking model file as well as " << endl;
        cout << "the face recognition model file.  Download and then decompress these files from: " << endl;
        cout << "http://dlib.net/files/shape_predictor_68_face_landmarks.dat.bz2" << endl;
        cout << "http://dlib.net/files/dlib_face_recognition_resnet_model_v1.dat.bz2" << endl;
        cout << endl;
        return 1;
    }
        
    frontal_face_detector detector = get_frontal_face_detector();
    shape_predictor sp;
    deserialize("shape_predictor_68_face_landmarks.dat") >> sp;
    anet_type net;
    deserialize("dlib_face_recognition_resnet_model_v1.dat") >> net;
        
}
