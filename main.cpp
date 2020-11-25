#include "sculptor.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    Sculptor projeto(100,100,100);
    projeto.setColor(0, 255, 255, 1);
    projeto.putEllipsoid(50, 50, 50, 10, 10, 15);
    projeto.putBox(43, 40, 43, 58, 45, 63);
    projeto.putEllipsoid(45, 50, 35, 3, 3, 5);
    projeto.putEllipsoid(55, 50, 35, 3, 3, 5);
    projeto.setColor(180, 180, 180, 1);
    projeto.putEllipsoid(50, 58, 58, 4, 2, 3);
    projeto.writeOFF((char*)"write.off");
    return 0;
}
