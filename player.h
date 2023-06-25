#ifndef PLAYER_H
#define PLAYER_H

#include "global.h"

// accions i esdeveniments
#define PLAYER_ACTION_GO        0   // anar endavant
#define PLAYER_ACTION_TLEFT     1   // tombrar a l'esquerra
#define PLAYER_ACTION_TRIGHT    2   // tombar a la dreta
#define PLAYER_ACTION_REVERSE   3   // girar cua
#define PLAYER_ACTIONS          4   // nombre d'accions

class Player 
{
public:
// característiques i estats
int type;           // de quina mena és

// posicionament i orientació
int xPos;
int yPos;
int compass;

// imatge associada
QGraphicsPixmapItem* pixmapItem;
QString pixmapPath;

    Player();

    // característiques i estats   
    int getType(){return type;};
    // imatge
    void setPixmap(QGraphicsPixmapItem* qpixmap){pixmapItem=qpixmap;};
    QGraphicsPixmapItem* getPixmap(){return pixmapItem;};

    // posicionament i orientació
    virtual void pointToCompass()=0;
    virtual int getPointedAngle()=0;
    void setPos(int xpos, int ypos){xPos=xpos;yPos=ypos;};
    void setXPos (int xpos){xPos=xpos;};
    int getXPos(){return xPos;};
    void setYPos (int ypos){yPos=ypos;};
    int getYPos(){return yPos;};
    void setCompass(int direction){compass=direction;};
    int getCompass(){return compass;};
};

#endif // PLAYER_H
