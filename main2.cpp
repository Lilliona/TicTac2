class Player
{
public:
    Player()
    {
    }
};

class Game
{
public:
    Game()
    {
        (*this).player1 = new Player();
        (*this).player2 = new Player();
    }
private:
    Player *player1;
    Player *player2;
};

class Controller
{
private:
    Game *game;
public:
    Controller()
    {
        (*this).game = new Game();
    }
};

int main(){
    Controller * c = new Controller();
    
    return 0;
}