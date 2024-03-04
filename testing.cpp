#include "Tiles.h"

#include <iostream>

#include <array>
#include <vector>

using namespace TileInfo;


bool IsChow(std::vector<Tile> tiles, Color coloryes)
{
    int n;
    n= tiles.size();

    if (n==3)
    {
    int i=0;
    bool j=true;
    bool k=true;
    for (i=0; i<3; i++)
    {
        j=tiles[i].color==coloryes;
    }
    if (j==true)
    {
        for (i=0; i<2; i++)
        {
            k=(tiles[i].number + 1)==tiles[i+1].number;
        }
        return k;
    }
    else
    {
        return j;
    }
    }
    else {return false;}
}

bool IsPung(std::vector<Tile> tiles, Color coloryes)
{ 
    int n;
    n= tiles.size();

    if (n==3)
    {
    int i=0;
    bool j=true;
    bool k=true;
    for (i=0; i<3; i++)
    {
        j=tiles[i].color==coloryes;
    }
    if (j==true)
    {
        for (i=0; i<2; i++)
        {
            k=(tiles[i].number)==tiles[i+1].number;
        }
        return k;
    }
    else
    {
        return j;
    }
    }
    else {return false;}
}

bool IsKong(std::vector<Tile> tiles, Color coloryes)
{
    int n;
    n= tiles.size();

    if (n==4)
    {
    int i=0;
    bool j=true;
    bool k=true;
    for (i=0; i<4; i++)
    {
        j=tiles[i].color==coloryes;
    }
    if (j==true)
    {
        for (i=0; i<3; i++)
        {
            k=(tiles[i].number)==tiles[i+1].number;
        }
        return k;
    }
    else
    {
        return j;
    }
    }
    else {return false;}
}

 int Tilearray (std::vector<Tile> tiles)
 {
    int n;
    n= tiles.size();
    return n;
 }

int main ()
{
    
    Tile tile1 (Character1);
    Tile tile2 (Character2);
    Tile tile3 (Character3);
    Tile tile4 (Character4);

    std::vector<Tile> vec = {tile1, tile2, tile3, tile4};

    bool i= IsChow(vec, Color::Character);

    std::cout << "Is it a Chow?"<< i << "\n";

    
    bool j= IsPung(vec, Color::Character);

    std::cout <<"Is it a Pung?"<< j<<"\n";

    bool k= IsKong(vec, Color::Character);

    std::cout <<"Is it a Kong?"<<k;

    return 0; 
}


