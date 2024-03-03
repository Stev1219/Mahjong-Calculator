#include "Combination.h"
#include <iostream>

using namespace Combinationinfo;
using namespace std;


bool IsChow(Tile array[])
{
    int i=0;
    bool j=true;
    bool k=true;
    for (i=0; i<3; i++)
    {
        j=array[i].color==Color::Bamboo;
    }
    if (j==true)
    {
        for (i=0; i<2; i++)
        {
            k=(array[i].number + 1)==array[i+1].number;
        }
        return k;
    }
    else
    {
        return j;
    }
}
