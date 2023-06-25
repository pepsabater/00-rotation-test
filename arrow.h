#ifndef ARROW_H
#define ARROW_H

#include "global.h"

#define ARROW_PIXMAP_WIDTH   40
#define ARROW_PIXMAP_HEIGHT  40
#define ARROW_PIXMAP_XFOCUS (ARROW_PIXMAP_WIDTH/2)
#define ARROW_PIXMAP_YFOCUS (ARROW_PIXMAP_HEIGHT/2)

class Arrow : public Player
{
int pointedAngle=0; // angle cap a on assenyalem

public:
    Arrow();
    void pointToCompass();
    void setPointedAngle(int pangle){pointedAngle=pangle;};
    int getPointedAngle(){return pointedAngle;};
};

#endif // ARROW_H
