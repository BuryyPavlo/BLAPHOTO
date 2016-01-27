#ifndef CAMERA_H
#define CAMERA_H


class Camera{
private:
    double focalLength;
    double width;
    double length;
    double widthPixel;
    double lengthPixel;
public:
    Camera(double inFocalLength, double inWidth, double inLength, double inWidthPixel, double inLengthPixel);
    ~Camera();
    void setFocalLength(double inFocalLength);
    void setWidth(double inWidth);
    void setLength(double inLength);
    void setWidthPixel(double inWidthPixel);
    void setLengthPixel(double inLengthPixel);
    double getFocalLength();
    double getWidth();
    double getLenght();
    double getWidthPixel();
    double getLenghtPixel();
}

#endif // CAMERA_H
