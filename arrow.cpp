#include "global.h"
#include "arrow.h"

Arrow::Arrow()
{
    // característiques i estats
    type=PLAYER_TYPE_ARROW;
    // posicionament i rotació
    compass=COMPASS_N;  // conforme a l'ícona inicial que assenyala al nord
    pointedAngle=0;     // conforme al compass
    // imatge associada
    pixmapPath="../imatges/arrow-blue-n40.png";
};

void Arrow::pointToCompass()
{
int targetAngle=0;
int correctionAngle=0;
    // Correcció a fer, segons convenció de les llibreries Qt
    // positiu = en sentit de les agulles del rellotge
    // negatiu = en sentit contrari a les agulles del rellotge
    // calculem el nou angle
    targetAngle=compass*(360/COMPASS_STEPS);
    // calculem la correcció
    correctionAngle=targetAngle-pointedAngle;
    // adjustem l'apuntador angular
    pointedAngle+=correctionAngle;
}
