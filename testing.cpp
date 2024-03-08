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
        bool j;
        bool k;
        bool l;
        for (i=0; i<3; i++)
        {
            j=tiles[i].color==coloryes;
        }
        if (j==true)
        {
            k=(tiles[0].number==tiles[1].number)&&(tiles[0].number==tiles[2].number);
            
            if (tiles[0].dragon!=Dragon::None)
            {
                l=(tiles[0].dragon==tiles[1].dragon)&&(tiles[0].dragon==tiles[2].dragon);
            }
            else if (tiles[0].wind!=Wind::None)
            {
                l=(tiles[0].wind==tiles[1].wind)&&(tiles[0].wind==tiles[2].wind);
            }
            else
            {
                return k;
            }
            return k&&l;
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
        bool j;
        bool k;
        bool l;
        for (i=0; i<4; i++)
        {
            j=tiles[i].color==coloryes;
        }
        if (j==true)
        {
            k=(tiles[0].number==tiles[1].number)&&(tiles[0].number==tiles[2].number)&&(tiles[0].number==tiles[3].number);

            if (tiles[0].dragon!=Dragon::None)
            {
                l=(tiles[0].dragon==tiles[1].dragon)&&(tiles[0].dragon==tiles[2].dragon)&&(tiles[0].dragon==tiles[3].dragon);
                return k&&l;
            }
            else if (tiles[0].wind!=Wind::None)
            {
                l=(tiles[0].wind==tiles[1].wind)&&(tiles[0].wind==tiles[2].wind)&&(tiles[0].wind==tiles[3].wind);
                return k&&l;
            }
            else
            {
                return k;
            }
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
    bool aa=IsPung(set1, set1[0].color)&&(set1[0].dragon!=Dragon::None);

    bool a1=IsKong(set1, set1[0].color)&&(set1[0].number==1);
    bool b1=IsKong(set1, set1[0].color)&&(set1[0].number==9);
    bool c1=IsKong(set1, set1[0].color)&&(set1[0].wind!=Wind::None)&&(set1[0].wind!=seat)&&(set1[0].wind!=prevail);
    bool aa1=IsKong(set1, set1[0].color)&&(set1[0].dragon!=Dragon::None);

    bool d=IsPung(set2, set2[0].color)&&(set2[0].number==1);
    bool e=IsPung(set2, set2[0].color)&&(set2[0].number==9);
    bool f=IsPung(set2, set2[0].color)&&(set2[0].wind!=Wind::None)&&(set2[0].wind!=seat)&&(set2[0].wind!=prevail);
    bool bb=IsPung(set2, set2[0].color)&&(set2[0].dragon!=Dragon::None);

    bool d1=IsKong(set2, set2[0].color)&&(set2[0].number==1);
    bool e1=IsKong(set2, set2[0].color)&&(set2[0].number==9);
    bool f1=IsKong(set2, set2[0].color)&&(set2[0].wind!=Wind::None)&&(set2[0].wind!=seat)&&(set2[0].wind!=prevail);
    bool bb1=IsKong(set2, set2[0].color)&&(set2[0].dragon!=Dragon::None);

    bool g=IsPung(set3, set3[0].color)&&(set3[0].number==1);
    bool h=IsPung(set3, set3[0].color)&&(set3[0].number==9);
    bool i=IsPung(set3, set3[0].color)&&(set3[0].wind!=Wind::None)&&(set3[0].wind!=seat)&&(set3[0].wind!=prevail);
    bool cc=IsPung(set3, set3[0].color)&&(set3[0].dragon!=Dragon::None);

    bool g1=IsKong(set3, set3[0].color)&&(set3[0].number==1);
    bool h1=IsKong(set3, set3[0].color)&&(set3[0].number==9);
    bool i1=IsKong(set3, set3[0].color)&&(set3[0].wind!=Wind::None)&&(set3[0].wind!=seat)&&(set3[0].wind!=prevail);
    bool cc1=IsKong(set3, set3[0].color)&&(set3[0].dragon!=Dragon::None);

    bool j=IsPung(set4, set4[0].color)&&(set4[0].number==1);
    bool k=IsPung(set4, set4[0].color)&&(set4[0].number==9);
    bool l=IsPung(set4, set4[0].color)&&(set4[0].wind!=Wind::None)&&(set4[0].wind!=seat)&&(set4[0].wind!=prevail);
    bool dd=IsPung(set4, set4[0].color)&&(set4[0].dragon!=Dragon::None);

    bool j1=IsKong(set4, set4[0].color)&&(set4[0].number==1);
    bool k1=IsKong(set4, set4[0].color)&&(set4[0].number==9);
    bool l1=IsKong(set4, set4[0].color)&&(set4[0].wind!=Wind::None)&&(set4[0].wind!=seat)&&(set4[0].wind!=prevail);
    bool dd1=IsKong(set4, set4[0].color)&&(set4[0].dragon!=Dragon::None);

    bool total=a||b||c||d||e||f||g||h||i||j||k||l||aa||bb||cc||dd||a1||b1||c1||d1||e1||f1||g1||h1||i1||j1||k1||l1||aa1||bb1||cc1||dd1;

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

bool Hand07(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4, std::vector <Tile> pair)
{
    bool a=(set1[0].color!=Color::Character)&&(set2[0].color!=Color::Character)&&(set3[0].color!=Color::Character)&&(set4[0].color!=Color::Character)&&(pair[0].color!=Color::Character);
    bool b=(set1[0].color!=Color::Bamboo)&&(set2[0].color!=Color::Bamboo)&&(set3[0].color!=Color::Bamboo)&&(set4[0].color!=Color::Bamboo)&&(pair[0].color!=Color::Bamboo);
    bool c=(set1[0].color!=Color::Circle)&&(set2[0].color!=Color::Circle)&&(set3[0].color!=Color::Circle)&&(set4[0].color!=Color::Circle)&&(pair[0].color!=Color::Circle);
    
    bool total=a||b||c;
    return total;
}

bool Hand08(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4, std::vector <Tile> pair)
{
    bool a=(set1[0].color!=Color::None)&&(set2[0].color!=Color::None)&&(set3[0].color!=Color::None)&&(set4[0].color!=Color::None)&&(pair[0].color!=Color::None);
    return a;
}

bool Hand14(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
{
    bool a= IsPung(set1, set1[0].color)&&(set1[0].dragon!=Dragon::None);
    bool b= IsPung(set2, set2[0].color)&&(set2[0].dragon!=Dragon::None);
    bool c= IsPung(set3, set3[0].color)&&(set3[0].dragon!=Dragon::None);
    bool d= IsPung(set4, set4[0].color)&&(set4[0].dragon!=Dragon::None);
    bool e= IsKong(set1, set1[0].color)&&(set1[0].dragon!=Dragon::None);
    bool f= IsKong(set2, set2[0].color)&&(set2[0].dragon!=Dragon::None);
    bool g= IsKong(set3, set3[0].color)&&(set3[0].dragon!=Dragon::None);
    bool h= IsKong(set4, set4[0].color)&&(set4[0].dragon!=Dragon::None);    
    
    bool total=a||b||c||d||e||f||g||h;

    return total;
}

int main ()
{
    Wind seat;
    Wind prevail;
    prevail=Wind::West;
    seat=Wind::North;
    
    Tile set1t1 (Bamboo4), set1t2 (Bamboo5), set1t3 (Bamboo6), set1t4 (Bamboo7);
    std::vector<Tile> vec1 = {set1t1, set1t2, set1t3};

    Tile set2t1 (Character1), set2t2 (Character1), set2t3 (Character1), set2t4 (Character1);
    std::vector<Tile> vec2 = {set2t1, set2t2, set2t3, set2t4};

    Tile set3t1 (Character2), set3t2 (Character3), set3t3 (Character4), set3t4 (Character5);
    std::vector<Tile> vec3 = {set3t1, set3t2, set3t3};
    
    Tile set4t1 (Bamboo1), set4t2 (Bamboo1), set4t3 (Bamboo1), set4t4 (Bamboo1);
    std::vector<Tile> vec4 = {set4t1, set4t2, set4t3, set4t4};
    
    Tile pair_t1 (Circle1), pair_t2 (Circle1);
    std::vector<Tile> pair = {pair_t1, pair_t2};

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

    bool h07=Hand07(vec1, vec2, vec3, vec4, pair);
    std::cout<<"Hand07: One-Voided Suit?"<<h07<<"\n";

    bool h08=Hand08(vec1, vec2, vec3, vec4, pair);
    std::cout<<"Hand08: No Honors?"<<h08<<"\n";

    //Hand09 and 10 add point to player if they self draw or drew flowers in the game
    //Skip 11-13
    
    bool h14=Hand14(vec1, vec2, vec3, vec4);
    std::cout<<"Hand14: Dragon Pung?"<<h14<<"\n";

    return 0; 
}


