#include "mycanvas.h"

MyCanvas::MyCanvas(QWidget *parent, const QPoint& position, const QSize& size) :
QSFMLCanvas(parent, position, size)
{
}

void MyCanvas::onInit()
{
  /* put pic.png in your Build-Debug*** directory so that the program can find it*/
  mTexture.loadFromFile("/home/issam/Pictures/bf82f6956a32819af48c2572243e8286.jpg");
  mSprite.setTexture(mTexture);
}

void MyCanvas::onUpdate()
{
  sf::RenderWindow::clear(sf::Color(0, 0, 0));
  draw(mSprite);
}
