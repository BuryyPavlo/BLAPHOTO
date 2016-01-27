#include <datafrombla.h>

DataFromBla::DataFromBla(QString inNamePhoto, double inBlaX,double inBlaY, double inBlaZ,double inBlaYaw, double inBlaPitch,
                         double inBlaRoll)
{
    namePhoto=inNamePhoto;
    blaX=inBlaX;
    blaY=inBlaY;
    blaZ=inBlaZ;
    blaYaw=inBlaYaw;
    blaPitch=inBlaPitch;
    blaRoll=inBlaRoll;
}

DataFromBla::~DataFromBla()
{

}

void DataFromBla::setBlaX(double inX)
{ blaX =inX; }

void DataFromBla::setBlaY(double inY)
{ blaX =inY; }

void DataFromBla::setBlaZ(double inZ)
{ blaZ =inZ; }

void DataFromBla::setBlaYaw(double inYaw){
  blaYaw = inYaw;
}

void DataFromBla::setBlaPitch(double inPitch){
    blaPitch=inPitch;
}

void DataFromBla::setBlaRoll(double inRoll){
    blaRoll=inRoll;
}

QString  DataFromBla::getNamePhoto()
{return namePhoto;}

double  DataFromBla::getBlaX()
{return blaX;}

double  DataFromBla::getBlaY()
{return blaY;}

double  DataFromBla::getBlaZ()
{return blaZ;}

double  DataFromBla::getBlaYaw()
{return blaYaw;}

double  DataFromBla::getBlaPitch()
{return blaPitch;}

double  DataFromBla::getBlaRoll()
{return blaRoll;}
