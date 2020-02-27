#include "Stack.h"
#include "Cube.h"
#include <exception>
#include <iostream>
using namespace std;
using namespace uiuc;

void Stack::push_back(const Cube &cube)
{
     //make sure we don't put smaller cube ontop of a lerger one 
     if(size()>0&& cube.getLength()>peekTop().getLength())
     {
         throw runtime_error("tried to put a small cube ontop a large cube");
     }
     cubes_.push_back(cube);
}
Cube Stack::removeTop()
{
    if(size())
     {
         Cube c=cubes_[size()-1];
         cubes_.pop_back();
         return c;
     } 
    else
      throw runtime_error("cubes stack is empty can't remove top");

}
Cube &Stack::peekTop()
{
  return cubes_[size()-1];
}
unsigned Stack::size() const
{
    return cubes_.size();
}