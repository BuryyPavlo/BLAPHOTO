#ifndef CAMERA_H
#define CAMERA_H

class Camera
{
private:
    double focalLength;
    double width;
    double length;
    int widthPixel;
    int lengthPixe;
public:
    Camera(double inFocalLength, double inWidth, double inLength, int inWidthPixel, int inLengthPixe);
    ~Camera();
    void setFocalLength(double inFocalLength);
    void setWidth(double inWidth);
    void setLength(double inLength);
    void setWidthPixel(int inWidthPixel);
    void setLengthPixel(int inLengthPixe);
    double getFocalLength();
    double getWidth();
    double getLenght();
    double getWidthPixel();
    double getLenghtPixel();


}

#endif // CAMERA_H
