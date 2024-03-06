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

bool Hand01 (std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
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

bool Hand02 (std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
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

bool Hand03 (std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
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

bool Hand04 (std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
{
    bool a=(set1[0].number==1)&&(set2[2].number==9)&&IsChow(set1, set1[0].color)&&IsChow(set2,set1[0].color);
    bool b=(set1[0].number==1)&&(set3[2].number==9)&&IsChow(set1, set1[0].color)&&IsChow(set3,set1[0].color);
    bool c=(set1[0].number==1)&&(set4[2].number==9)&&IsChow(set1, set1[0].color)&&IsChow(set4,set1[0].color);
    bool d=(set2[0].number==1)&&(set3[2].number==9)&&IsChow(set2, set2[0].color)&&IsChow(set3,set2[0].color);
    bool e=(set2[0].number==1)&&(set4[2].number==9)&&IsChow(set2, set2[0].color)&&IsChow(set4,set2[0].color);
    bool f=(set3[0].number==1)&&(set4[2].number==9)&&IsChow(set3, set3[0].color)&&IsChow(set4,set3[0].color);
    
    bool g=(set2[0].number==1)&&(set1[2].number==9)&&IsChow(set2, set2[0].color)&&IsChow(set1,set2[0].color);
    bool h=(set3[0].number==1)&&(set1[2].number==9)&&IsChow(set3, set3[0].color)&&IsChow(set1,set3[0].color);
    bool i=(set4[0].number==1)&&(set1[2].number==9)&&IsChow(set4, set4[0].color)&&IsChow(set1,set4[0].color);
    bool j=(set3[0].number==1)&&(set2[2].number==9)&&IsChow(set3, set3[0].color)&&IsChow(set2,set3[0].color);
    bool k=(set4[0].number==1)&&(set2[2].number==9)&&IsChow(set4, set4[0].color)&&IsChow(set2,set4[0].color);
    bool l=(set4[0].number==1)&&(set3[2].number==9)&&IsChow(set3, set3[0].color)&&IsChow(set3,set4[0].color);

    bool total=a||b||c||d||e||f||g||h||i||j||k||l;

    return total;
}

bool Hand05 (std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4, Wind seat, Wind prevail)
{
    bool a=IsPung(set1, set1[0].color)&&(set1[0].number==1);
    bool b=IsPung(set1, set1[0].color)&&(set1[0].number==9);
    bool c=IsPung(set1, set1[0].color)&&(set1[0].wind!=Wind::None)&&(set1[0].wind!=seat)&&(set1[0].wind!=prevail);

    bool d=IsPung(set2, set2[0].color)&&(set2[0].number==1);
    bool e=IsPung(set2, set2[0].color)&&(set2[0].number==9);
    bool f=IsPung(set2, set2[0].color)&&(set2[0].wind!=Wind::None)&&(set2[0].wind!=seat)&&(set2[0].wind!=prevail);

    bool g=IsPung(set3, set3[0].color)&&(set3[0].number==1);
    bool h=IsPung(set3, set3[0].color)&&(set3[0].number==9);
    bool i=IsPung(set3, set3[0].color)&&(set3[0].wind!=Wind::None)&&(set3[0].wind!=seat)&&(set3[0].wind!=prevail);

    bool j=IsPung(set4, set4[0].color)&&(set4[0].number==1);
    bool k=IsPung(set4, set4[0].color)&&(set4[0].number==9);
    bool l=IsPung(set4, set4[0].color)&&(set4[0].wind!=Wind::None)&&(set4[0].wind!=seat)&&(set4[0].wind!=prevail);

    bool total=a||b||c||d||e||f||g||h||i||j||k||l;

    return total;

}

bool Hand06 (std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
{
    bool a=IsKong(set1,set1[0].color);
    bool b=IsKong(set2,set2[0].color);
    bool c=IsKong(set3,set3[0].color);
    bool d=IsKong(set4,set4[0].color);

    bool total=a||b||c||d;
    return total;
}

bool Hand07()
{
    //3-INPUT NAND GATE FOR COLOR/SUITES, FIND A WAY TO GET RID OF THE 0 0 0 = TRUE STATEMENT
    return false;
}

int main ()
{
    Wind seat;
    Wind prevail;
    prevail=Wind::West;
    seat=Wind::East;
    
    Tile set1t1 (Bamboo1), set1t2 (Bamboo2), set1t3 (Bamboo3), set1t4 (Bamboo4);
    std::vector<Tile> vec1 = {set1t1, set1t2, set1t3};

    Tile set2t1 (Character1), set2t2 (Character1), set2t3 (Character1), set2t4 (Character1);
    std::vector<Tile> vec2 = {set2t1, set2t2, set2t3, set2t4};

    Tile set3t1 (Character1), set3t2 (Character2), set3t3 (Character3), set3t4 (Character2);
    std::vector<Tile> vec3 = {set3t1, set3t2, set3t3};
    
    Tile set4t1 (WindEast), set4t2 (WindEast), set4t3 (WindEast), set4t4 (Character5);
    std::vector<Tile> vec4 = {set4t1, set4t2, set4t3};
    
    bool h01=Hand01(vec1, vec2, vec3, vec4);
    std::cout<<"Hand01: Pure Double Chow?"<<h01<<"\n";

    bool h02=Hand02(vec1, vec2, vec3, vec4);
    std::cout<<"Hand02: Mixed Double Chow?"<<h02<<"\n";

    bool h03=Hand03(vec1, vec2, vec3, vec4);
    std::cout<<"Hand03: Short Straight?"<<h03<<"\n";

    bool h04=Hand04(vec1, vec2, vec3, vec4);
    std::cout<<"Hand04: Two Terminal chows?"<<h04<<"\n";

    bool h05=Hand05(vec1, vec2, vec3, vec4, seat, prevail);
    std::cout<<"Hand05: Pung of Terminal or Honors?"<<h05<<"\n";

    bool h06=Hand06(vec1, vec2, vec3, vec4);
    std::cout<<"Hand06: Melded Kong?"<<h06<<"\n";

    return 0; 
}


