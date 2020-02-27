#pragma once
#include "Stack.h"
#include <vector>
using namespace uiuc;
class Game
{
    public:
    Game(); //default constructor
    void solve();

    friend std::ostream& operator<<(std::ostream & os, const Game & game);

    private:
    std::vector<Stack> stacks_;
};