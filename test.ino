#include <LRemote.h>

LRemoteButton button1;
LRemoteButton button2;
LRemoteButton button3;
LRemoteButton button4;
LRemoteCircleButton circle1;
LRemoteCircleButton circle2;

void setup()
{
  LRemote.setName("amy0206");
  LRemote.setOrientation(RC_LANDSCAPE);
  LRemote.setGrid(7, 5);
    button1.setPos(2, 1);
    button1.setText("⇧");
    button1.setSize(1, 1);
    button1.setColor(RC_ORANGE);
    LRemote.addControl(button1);

    button2.setPos(1, 2);
    button2.setText("⇦");
    button2.setSize(1, 1);
    button2.setColor(RC_ORANGE);
    LRemote.addControl(button2);

    button3.setPos(3, 2);
    button3.setText("⇨");
    button3.setSize(1, 1);
    button3.setColor(RC_ORANGE);
    LRemote.addControl(button3);

    button4.setPos(2, 3);
    button4.setText("⇩");
    button4.setSize(1, 1);
    button4.setColor(RC_ORANGE);
    LRemote.addControl(button4);

    circle1.setPos(5, 1);
    circle1.setSize(1, 1);
    circle1.setText("◐");
    circle1.setColor(RC_BLUE);
    LRemote.addControl(circle1);

    circle2.setPos(5, 3);
    circle2.setSize(1, 1);
    circle2.setText("◑");
    circle2.setColor(RC_BLUE);
    LRemote.addControl(circle2);
  LRemote.begin();
}


void loop()
{

}
