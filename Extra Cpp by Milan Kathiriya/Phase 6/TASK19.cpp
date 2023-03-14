#include<iostream>
using namespace std;

class House
{
    
};

class Kitchen : public House
{

};

class Bedroom : public House
{

};

class Backyard : public House
{

};

class Dining_table : public Kitchen
{

};

class Bathroom : public Bedroom
{

};

class Garage : public Backyard
{

};

int main()
{
    return 0;
}