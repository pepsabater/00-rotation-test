#ifndef GLOBAL_H
#define GLOBAL_H

// de Qt
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsScene>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGraphicsRectItem>
#include <QtWidgets/QGraphicsScale>
#include <QtWidgets/QDialog>
#include <QIcon>
#include <QVBoxLayout>
#include <QSplitter>
#include <QLabel>
#include <QTextEdit>
#include <QKeyEvent>
#include <QTimer>

// genèrics de C++
#include <vector>
#include <array>
#include <string>

// de l'aplicació
#include "player.h"

// paràmetres gràfics
#define VIEW_WIDTH      1600    // 1440 amplada de la pantalla de joc
#define DIALOG_WIDTH    320     // 240 amplada del diàleg
#define VIEW_HEIGHT     920     // 800 alçada de la pantalla de joc
#define PIXMAP_WIDTH    40      // amplada de les icones dels jugadors
#define PIXMAP_HEIGHT   40      // alçada de les icones dels jugadors
#define PIXMAP_XFOCUS   (PIXMAP_WIDTH)    //((PIXMAP_WIDTH/2))    // per a la detecció dels jugadors dins l'escena
#define PIXMAP_YFOCUS   (PIXMAP_HEIGHT)  //((PIXMAP_HEIGHT/2))   // per a la detecció dels jugadors dins l'escena
#define PLAYER_XDRIFT   10 // 40 desplaçament a l'eix X
#define PLAYER_YDRIFT   10 // 40 desplaçament a l'eix Y

// l'ordre es fa servir per establir la jerarquia
// només es pot consumir els de 1 nivell inferior
// amb els del mateix nivell es pot reproduir (clonar)
// amb els de 1 nivell superior es perd energia

#define PLAYER_TYPE_ARROW     0

// ecosistema del 'joc'
#define INITIAL_ARROWS  1  // 1
#define MAX_ARROWS      1  // 1

// orientació, cap a on es mou i/o interacciona
#define NO_COMPASS    -1
#define COMPASS_N      0
#define COMPASS_NE     1
#define COMPASS_E      2
#define COMPASS_SE     3
#define COMPASS_S      4
#define COMPASS_SW     5
#define COMPASS_W      6
#define COMPASS_NW     7
#define COMPASS_STEPS  8

// generador de números aleatoris (min, max, jump)
int alNumGen (int, int, int);

#endif // GLOBAL_H
