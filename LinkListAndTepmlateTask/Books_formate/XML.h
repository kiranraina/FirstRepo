#ifndef XML_H
#define XML_H
#include"CommanUtiles.h"

class XML : public FileFormat
{
public:
    XML();
      void save();
      void read();
};

#endif // XML_H
