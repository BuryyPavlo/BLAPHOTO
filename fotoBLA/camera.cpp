#include <camera.h>


Camera::Camera(double inFocalLength, double inWidth, double inLength, int inWidthPixel, int inLengthPixel)
{
 focalLength = inFocalLength;
 width = inWidth;
 length = inLength;
 widthPixel = inWidthPixel;
 lengthPixel = inLengthPixel;
}

Camera::~Camera(){

}

void Camera::setFocalLength(double inFocalLength){
   focalLength=inFocalLength;
}

void Camera::setWidth(double inWidth){
   width=inWidth;
}

void Camera::setLength(double inLength){
    length=inLength;
}

void Camera::setWidthPixel(int inWidthPixel){
    widthPixel=inWidthPixel;
}

void Camera::setLengthPixel(int inLengthPixel){
    lengthPixel=inLengthPixel;
}

double Camera::getFocalLength(){
    return  focalLength;
}

double Camera::getWidth(){
    return  width;
}

double Camera::getLenght(){
 return length;
}

int Camera::getWidthPixel(){
 return widthPixel;
}

int Camera::getLenghtPixel(){
 return lengthPixel;
}
