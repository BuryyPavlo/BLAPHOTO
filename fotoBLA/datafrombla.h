#ifndef DATAFROMBLA_H
#define DATAFROMBLA_H
#include <QString>

class DataFromBla
{
private:
    QString namePhoto;
    double blaX;
    double blaY;
    double blaZ;
    double blaYaw;
    double blaPitch;
    double blaRoll;

public:
    DataFromBla(QString inNamePhoto, double inBlaX,double inBlaY, double inBlaZ,double inBlaYaw, double inBlaPitch, double inBlaRoll);
    ~DataFromBla();
    QString getNamePhoto();
    double getBlaX();
    double getBlaY();
    double getBlaZ();
    double getBlaYaw();
    double getBlaPitch();
    double getBlaRoll();
    void setBlaX(double inX);
    void setBlaY(double inY);
    void setBlaZ(double inZ);
    void setBlaYaw(double inYaw);
    void setBlaPitch(double inPitch);
    void setBlaRoll(double inRoll);
};


#endif // DATAFROMBLA_H
