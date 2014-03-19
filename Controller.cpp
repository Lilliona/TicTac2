#include "Controller.h"


Controller::Controller()
{
    game = new Game(new Human(), new Human());
}

Controller::~Controller()
{
}
