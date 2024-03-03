#include "Tiles.h"

#include <iostream>
#include <array>

using namespace TileInfo;
using namespace std;


bool IsChow(Tile array[], Color coloryes)
{
    int n= sizeof(array) / sizeof (array[0]);
    if (n=3)
    {
    int i=0;
    bool j=true;
    bool k=true;
    for (i=0; i<3; i++)
    {
        j=array[i].color==coloryes;
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
    else
    {
        return false;
    }
}

bool IsPung(Tile array[], Color coloryes)
{
    int n= sizeof (array)/ sizeof (array[0]);
    if (n=3)
    {    
    int i=0;
    bool j=true;
    bool k=true;
    for (i=0; i<3; i++)
    {
        j=array[i].color==coloryes;
    }
    if (j==true)
    {
        for (i=0; i<2; i++)
        {
            k=(array[i].number)==array[i+1].number;
        }
        return k;
    }
    else
    {
        return j;
    }
    }
    else
    {
        return false;
    }
}

bool IsKong(Tile array[], Color coloryes)
{
    int i=0;
    bool j=true;
    bool k=true;
    for (i=0; i<4; i++)
    {
        j=array[i].color==coloryes;
    }
    if (j==true)
    {
        for (i=0; i<3; i++)
        {
            k=(array[i].number)==array[i+1].number;
        }
        return k;
    }
    else
    {
        return j;
    }
}



int main ()
{
    bool j;
    Tile tile1 (Character3);
    Tile tile2 (Character3);
    Tile tile3 (Character3);
    Tile tile4 (Character3);

    Tile arr[]={tile1, tile2, tile3, tile4};

    int n= sizeof(arr)/sizeof(arr[0]);

    cout << n << "\n";

    j= IsPung(arr, Color::Character);

    cout << j<<"\n";

    bool k= IsKong(arr, Color::Character);

    cout <<k;

    return 0; 
}


