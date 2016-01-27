#ifndef CAMERA_H
#define CAMERA_H

class Camera
{
private:
    double focalLength;
    double width;
    double length;
    int widthPixel;
    int lengthPixel;
public:
   Camera(double inFocalLength, double inWidth, double inLength, int inWidthPixel, int inLengthPixel);
    ~Camera();
    void setFocalLength(double inFocalLength);
    void setWidth(double inWidth);
    void setLength(double inLength);
    void setWidthPixel(int inWidthPixel);
    void setLengthPixel(int inLengthPixel);
    double getFocalLength();
    double getWidth();
    double getLenght();
    int getWidthPixel();
    int getLenghtPixel();
};

#endif // CAMERA_H
