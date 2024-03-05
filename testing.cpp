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

bool Hand01 (std::vector <Tile> set1, std:: vector <Tile> set2, std:: vector <Tile> set3, std:: vector <Tile> set4)
{
    bool a=(set1[0].number==set2[0].number) && (set1[1].number==set2[1].number) && (set1[2].number==set2[2].number) && (set1[0].color==set2[0].color) && IsChow(set1, set1[0].color);
    bool b=(set1[0].number==set3[0].number) && (set1[1].number==set3[1].number) && (set1[2].number==set3[2].number) && (set1[0].color==set3[0].color) && IsChow(set1, set1[0].color);
    bool c=(set1[0].number==set4[0].number) && (set1[1].number==set4[1].number) && (set1[2].number==set4[2].number) && (set1[0].color==set4[0].color) && IsChow(set1, set1[0].color);
    bool d=(set2[0].number==set3[0].number) && (set2[1].number==set3[1].number) && (set2[2].number==set3[2].number) && (set2[0].color==set3[0].color) && IsChow(set2, set2[0].color);
    bool e=(set2[0].number==set4[0].number) && (set2[1].number==set4[1].number) && (set2[2].number==set4[2].number) && (set2[0].color==set4[0].color) && IsChow(set2, set2[0].color);
    bool f=(set3[0].number==set4[0].number) && (set3[1].number==set4[1].number) && (set3[2].number==set4[2].number) && (set3[0].color==set4[0].color) && IsChow(set3, set3[0].color);

    bool g= a||b||c||d||e||f;
    return g;
}

bool Hand02 (std::vector <Tile> set1, std:: vector <Tile> set2, std:: vector <Tile> set3, std:: vector <Tile> set4)
{
    bool a=(set1[0].number==set2[0].number) && (set1[1].number==set2[1].number) && (set1[2].number==set2[2].number) && (set1[0].color!=set2[0].color) && IsChow(set1, set1[0].color);
    bool b=(set1[0].number==set3[0].number) && (set1[1].number==set3[1].number) && (set1[2].number==set3[2].number) && (set1[0].color!=set3[0].color) && IsChow(set1, set1[0].color);
    bool c=(set1[0].number==set4[0].number) && (set1[1].number==set4[1].number) && (set1[2].number==set4[2].number) && (set1[0].color!=set4[0].color) && IsChow(set1, set1[0].color);
    bool d=(set2[0].number==set3[0].number) && (set2[1].number==set3[1].number) && (set2[2].number==set3[2].number) && (set2[0].color!=set3[0].color) && IsChow(set2, set2[0].color);
    bool e=(set2[0].number==set4[0].number) && (set2[1].number==set4[1].number) && (set2[2].number==set4[2].number) && (set2[0].color!=set4[0].color) && IsChow(set2, set2[0].color);
    bool f=(set3[0].number==set4[0].number) && (set3[1].number==set4[1].number) && (set3[2].number==set4[2].number) && (set3[0].color!=set4[0].color) && IsChow(set3, set3[0].color);

    bool g= a||b||c||d||e||f;
    return g;
}

bool Hand03 (std::vector <Tile> set1, std:: vector <Tile> set2, std:: vector <Tile> set3, std:: vector <Tile> set4)
{
    bool a=((set1[2].number+1)==set2[0].number) && (set1[0].color==set2[0].color) && IsChow(set1, set1[0].color) && IsChow(set2, set2[0].color);
    bool b=((set1[2].number+1)==set3[0].number) && (set1[0].color==set3[0].color) && IsChow(set1, set1[0].color) && IsChow(set3, set3[0].color);
    bool c=((set1[2].number+1)==set4[0].number) && (set1[0].color==set4[0].color) && IsChow(set1, set1[0].color) && IsChow(set4, set4[0].color);
    bool d=((set2[2].number+1)==set3[0].number) && (set2[0].color==set3[0].color) && IsChow(set2, set2[0].color) && IsChow(set3, set3[0].color);
    bool e=((set2[2].number+1)==set4[0].number) && (set2[0].color==set4[0].color) && IsChow(set2, set2[0].color) && IsChow(set4, set4[0].color);
    bool f=((set3[2].number+1)==set4[0].number) && (set3[0].color==set4[0].color) && IsChow(set3, set3[0].color) && IsChow(set4, set4[0].color);

    bool g=((set2[2].number+1)==set1[0].number) && (set2[0].color==set1[0].color) && IsChow(set2, set2[0].color) && IsChow(set1, set1[0].color);
    bool h=((set3[2].number+1)==set1[0].number) && (set3[0].color==set1[0].color) && IsChow(set3, set3[0].color) && IsChow(set1, set1[0].color);
    bool i=((set4[2].number+1)==set1[0].number) && (set4[0].color==set1[0].color) && IsChow(set4, set4[0].color) && IsChow(set1, set1[0].color);
    bool j=((set3[2].number+1)==set2[0].number) && (set3[0].color==set2[0].color) && IsChow(set3, set3[0].color) && IsChow(set2, set2[0].color);
    bool k=((set4[2].number+1)==set2[0].number) && (set4[0].color==set2[0].color) && IsChow(set4, set4[0].color) && IsChow(set2, set2[0].color);
    bool l=((set4[2].number+1)==set3[0].number) && (set4[0].color==set3[0].color) && IsChow(set4, set4[0].color) && IsChow(set3, set3[0].color);

    bool total=a||b||c||d||e||f||g||h||i||j||k||l;

    return total;
}

int main ()
{
    
    Tile tile1 (Bamboo1);
    Tile tile2 (Bamboo2);
    Tile tile3 (Bamboo3);
    Tile tile4 (Bamboo4);

    std::vector<Tile> vec1 = {tile1, tile2, tile3};

    bool i= IsChow(vec1, Color::Character);
    std::cout << "Is it a Chow?"<< i << "\n";

    bool j= IsPung(vec1, Color::Character);
    std::cout <<"Is it a Pung?"<< j<<"\n";

    bool k= IsKong(vec1, Color::Character);
    std::cout <<"Is it a Kong?"<<k<<"\n";

    Tile set2t1 (Character1), set2t2 (Character2), set2t3 (Character3), set2t4 (Character4);
    std::vector<Tile> vec2 = {set2t2, set2t3, set2t4};

    Tile set3t1 (Character1), set3t2 (Character2), set3t3 (Character3), set3t4 (Character2);
    std::vector<Tile> vec3 = {set3t1, set3t2, set3t3};
    
    Tile set4t1 (Character5), set4t2 (Character6), set4t3 (Character7), set4t4 (Character5);
    std::vector<Tile> vec4 = {set4t1, set4t2, set4t3};
    
    bool h01=Hand01(vec1, vec2, vec3, vec4);
    std::cout<<"Hand01: Pure Double Chow?"<<h01<<"\n";

    bool h02=Hand02(vec1, vec2, vec3, vec4);
    std::cout<<"Hand02: Mixed Double Chow?"<<h02<<"\n";

    bool h03=Hand03(vec1, vec2, vec3, vec4);
    std::cout<<"Hand03: Short Straight?"<<h03<<"\n";

    return 0; 
}


