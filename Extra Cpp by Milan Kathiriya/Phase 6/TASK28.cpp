#include<iostream>
using namespace std;

class Universe
{

};

class Marvel : public Universe
{

};

class MHeroes : public Marvel
{

};

class DC : public Universe
{

};

class DCHeroes : public DC
{

};

class Acess : public MHeroes, public DCHeroes
{

};

int main()
{
    return 0;
}