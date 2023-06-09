#include "BitmapImage.h"

BitmapImage::BitmapImage() : width(640), height(480) , channels(3), depth(8){
    buffer = new char[width * height * 3];
}

bool BitmapImage::load(std::string name) {
    // check it is a supported image file
    std::string fileExt = name.substr(name.find_last_of(".") + 1);
    if (fileExt == "jpg"||fileExt == "png"||fileExt == "bmp") {
        // load image file
        // decompress into buffer
        return true;
    }
    return false;
}


bool BitmapImage::save(std::string name) {
    return true;
}

bool BitmapImage::save(int width, int height) {
    return true;
}


BitmapImage::~BitmapImage() {
    delete[] buffer;
}
