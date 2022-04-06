#ifndef PDF_H
#define PDF_H
#include<CommanUtiles.h>

class PDF:public FileFormat
{
public:
    PDF();
     void save();
     void read();
};

#endif // PDF_H
