#include "Game.h"
#include "Stack.h"
using namespace uiuc;
Game::Game() //constructor implementation 
{
    for(int i =0;i<3;i++)
    {
        Stack stackOfCubes;
        stacks_.push_back(stackOfCubes);
    }
    Cube blue(4,HSLAPixel::BLUE);
    stacks_[0].push_back(blue);
    
    Cube orange(3, HSLAPixel::ORANGE);
    stacks_[0].push_back(orange);

    Cube purple(2, HSLAPixel::PURPLE);
    stacks_[0].push_back(purple);

    Cube yellow(1, HSLAPixel::YELLOW);
    stacks_[0].push_back(yellow);
}
std::ostream& operator<<(std::ostream & os, const Game & game) {
  for (unsigned i = 0; i < game.stacks_.size(); i++) {
    os << "Stack[" << i << "]: " << game.stacks_[i];
  }
  return os;
}
void Game::solve()
{
    std::cout<<"solve funstion wow"<<std::endl;
}