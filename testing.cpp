#include "Tiles.h"

#include <iostream>

#include <array>

using namespace TileInfo;
using namespace std;


bool IsChow(Tile array[], Color coloryes)
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

bool IsPung(Tile array[], Color coloryes)
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

 int Tilearray (Tile arr[])
 {
    int n;
    int i=sizeof(*arr);
    arr++;
    i=i+sizeof(*arr);
    arr++;
    i=i+sizeof(*arr);
    arr++;
    i=i+sizeof(*arr);
    n=i/sizeof(arr[0]);
    return n;
 }

int main ()
{
    
    Tile tile1 (Character3);
    Tile tile2 (Character3);
    Tile tile3 (Character3);
    Tile tile4 (Character3);

    Tile arr[]={tile1, tile2, tile3};

    int n= sizeof(arr)/sizeof(arr[0]);

    cout << n << "\n";

    //bool j= IsPung(arr, Color::Character);

    int j= Tilearray (arr);

    cout << j<<"\n";

    bool k= IsKong(arr, Color::Character);

    cout <<k;

    return 0; 
}


