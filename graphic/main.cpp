#include <graphics.h>
#include <conio.h>

int main() {
    // Initialize the graphics mode and driver
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    // Set the background color and draw a circle
    setbkcolor(WHITE);
    cleardevice();
    setcolor(BLUE);
    circle(200, 200, 100);

    // Draw a rectangle
    setcolor(RED);
    rectangle(150, 150, 250, 250);

    // Display a message
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(100, 300, (char*)"Hello, Graphics!");

    // Wait for a key press and close the graphics mode
    getch();
    closegraph();

    return 0;
}
