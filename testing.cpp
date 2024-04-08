#include "Tiles.h"

#include <iostream>

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

bool IsEqual(Tile sample, Tile check)
{
    bool a=(sample.number==check.number);
    bool b=(sample.color==check.color);
    bool c=(sample.wind==check.wind);
    bool d=(sample.dragon==check.dragon);

    bool total=a&&b&&c&&d;
    return total;
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

bool Hand15 (std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4, Wind seat, Wind prevail)
{
    bool a= IsPung(set1, set1[0].color)&&(set1[0].wind==prevail);
    bool b= IsPung(set2, set2[0].color)&&(set2[0].wind==prevail);
    bool c= IsPung(set3, set3[0].color)&&(set3[0].wind==prevail);
    bool d= IsPung(set4, set4[0].color)&&(set4[0].wind==prevail);

    bool e= IsKong(set1, set1[0].color)&&(set1[0].wind==prevail);
    bool f= IsKong(set2, set2[0].color)&&(set2[0].wind==prevail);
    bool g= IsKong(set3, set3[0].color)&&(set3[0].wind==prevail);
    bool h= IsKong(set4, set4[0].color)&&(set4[0].wind==prevail);

    bool total=a||b||c||d||e||f||g||h;
    return total;
}

bool Hand16 (std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4, Wind seat, Wind prevail)
{
    bool a= IsPung(set1, set1[0].color)&&(set1[0].wind==seat);
    bool b= IsPung(set2, set2[0].color)&&(set2[0].wind==seat);
    bool c= IsPung(set3, set3[0].color)&&(set3[0].wind==seat);
    bool d= IsPung(set4, set4[0].color)&&(set4[0].wind==seat);
   
    bool e= IsKong(set1, set1[0].color)&&(set1[0].wind==seat);
    bool f= IsKong(set2, set2[0].color)&&(set2[0].wind==seat);
    bool g= IsKong(set3, set3[0].color)&&(set3[0].wind==seat);
    bool h= IsKong(set4, set4[0].color)&&(set4[0].wind==seat);

    bool total=a||b||c||d||e||f||g||h;

    return total;
}

bool Hand17(std::vector <Tile> set1, bool con1, std::vector <Tile> set2, bool con2, std::vector <Tile> set3, bool con3, std::vector <Tile> set4, bool con4,  std::vector <Tile> pair, bool conp, bool selfdraw)
{
    bool a=(!(IsKong(set1, set1[0].color)))&&con1;
    bool b=(!(IsKong(set2, set2[0].color)))&&con2;
    bool c=(!(IsKong(set3, set3[0].color)))&&con3;
    bool d=(!(IsKong(set4, set4[0].color)))&&con4;
    bool e=conp;

    bool total=a&&b&&c&&d&&e;

    bool real=total&&(!selfdraw);

    return real;
}

bool Hand18(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4, std::vector <Tile> pair)
{
    bool a=IsChow(set1, set1[0].color)&&(set1[0].color!=Color::None);
    bool b=IsChow(set2, set2[0].color)&&(set2[0].color!=Color::None);
    bool c=IsChow(set3, set3[0].color)&&(set3[0].color!=Color::None);
    bool d=IsChow(set4, set4[0].color)&&(set4[0].color!=Color::None);
    bool e=pair[0].color!=Color::None;

    bool total=a&&b&&c&&d&&e;
    return total;
}

bool Hand19(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4, std::vector <Tile> pair)
{
    bool a=(!IsKong(set1,set1[0].color))&&(!IsKong(set2,set2[0].color))&&(!IsKong(set3, set3[0].color))&&(!IsKong(set4,set4[0].color));

    if (a==true)
    {
        int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0;
        int d1=0, d2=0, d3=0, d4=0, d5=0, d6=0, d7=0, d8=0, d9=0;
        int b1=0, b2=0, b3=0, b4=0, b5=0, b6=0, b7=0, b8=0, b9=0;
        int h1=0, h2=0, h3=0, h4=0, h5=0, h6=0, h7=0;
        std::vector <Tile> all={set1[0],set1[1],set1[2],set2[0],set2[1],set2[2],set3[0],set3[1],set3[2],set4[0],set4[1],set4[2],pair[0],pair[1]};
        for (int i=0; i<13; i++)
        {
            if (all[i].color==Color::Character)
            {
                if (all[i].number==1)
                {
                    c1++;
                }
                else if (all[i].number==2)
                {
                    c2++;
                }
                else if (all[i].number==3)
                {
                    c3++;
                }
                else if (all[i].number==4)
                {
                    c4++;
                }
                else if (all[i].number==5)
                {
                    c5++;
                }
                else if (all[i].number==6)
                {
                    c6++;
                }
                else if (all[i].number==7)
                {
                    c7++;
                }
                else if (all[i].number==8)
                {
                    c8++;
                }
                else if (all[i].number==9)
                {
                    c9++;
                }
            }
            else if (all[i].color==Color::Circle)
            {
                if (all[i].number==1)
                {
                    d1++;
                }
                else if (all[i].number==2)
                {
                    d2++;
                }
                else if (all[i].number==3)
                {
                    d3++;
                }
                else if (all[i].number==4)
                {
                    d4++;
                }
                else if (all[i].number==5)
                {
                    d5++;
                }
                else if (all[i].number==6)
                {
                    d6++;
                }
                else if (all[i].number==7)
                {
                    d7++;
                }
                else if (all[i].number==8)
                {
                    d8++;
                }
                else if (all[i].number==9)
                {
                    d9++;
                }
            }
            else if (all[i].color==Color::Bamboo)
            {
                if (all[i].number==1)
                {
                    b1++;
                }
                else if (all[i].number==2)
                {
                    b2++;
                }
                else if (all[i].number==3)
                {
                    b3++;
                }
                else if (all[i].number==4)
                {
                    b4++;
                }
                else if (all[i].number==5)
                {
                    b5++;
                }
                else if (all[i].number==6)
                {
                    b6++;
                }
                else if (all[i].number==7)
                {
                    b7++;
                }
                else if (all[i].number==8)
                {
                    b8++;
                }
                else if (all[i].number==9)
                {
                    b9++;
                }
            }
            else
            {
                if (all[i].wind==Wind::East)
                {
                    h1++;
                }
                else if (all[i].wind==Wind::West)
                {
                    h2++;
                }
                else if (all[i].wind==Wind::North)
                {
                    h3++;
                }
                else if (all[i].wind==Wind::South)
                {
                    h4++;
                }
                else if (all[i].dragon==Dragon::Green)
                {
                    h5++;
                }
                else if (all[i].dragon==Dragon::White)
                {
                    h6++;
                }
                else if (all[i].dragon==Dragon::Red)
                {
                    h7++;
                }
            }
        }
        std::vector<int> countall={c1, c2, c3, c4, c5, c6, c7, c8, c9, d1, d2, d3, d4, d5, d6, d7, d8, d9, b1, b2, b3, b4, b5, b6, b7, b8, b9, h1, h2, h3, h4, h5, h6, h7};
        bool is4=false;
        for (int j=0; j<34; j++)
        {
            if (countall[j]==4)
            {
                is4=true;
                break;
            }
        }
        return is4;
    }
    else
    {
        return a;
    }
}

bool Hand20 (std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
{
    bool a=(set1[0].number==set2[0].number) && (set1[0].color!=set2[0].color) && IsPung(set1, set1[0].color) && IsPung(set2,set2[0].color);
    bool b=(set1[0].number==set2[0].number) && (set1[0].color!=set2[0].color) && IsKong(set1, set1[0].color) && IsKong(set2,set2[0].color);
    
    bool c=(set1[0].number==set3[0].number) && (set1[0].color!=set3[0].color) && IsPung(set1, set1[0].color) && IsPung(set3,set3[0].color);
    bool d=(set1[0].number==set3[0].number) && (set1[0].color!=set3[0].color) && IsKong(set1, set1[0].color) && IsKong(set3,set3[0].color);
    
    bool e=(set1[0].number==set4[0].number) && (set1[0].color!=set4[0].color) && IsPung(set1, set1[0].color) && IsPung(set4,set4[0].color);
    bool f=(set1[0].number==set4[0].number) && (set1[0].color!=set4[0].color) && IsKong(set1, set1[0].color) && IsKong(set4,set4[0].color);
    
    bool g=(set2[0].number==set3[0].number) && (set2[0].color!=set3[0].color) && IsPung(set2, set2[0].color) && IsPung(set3,set3[0].color);
    bool h=(set2[0].number==set3[0].number) && (set2[0].color!=set3[0].color) && IsKong(set2, set2[0].color) && IsKong(set3,set3[0].color);
    
    bool i=(set2[0].number==set4[0].number) && (set2[0].color!=set4[0].color) && IsPung(set2, set2[0].color) && IsPung(set4,set4[0].color);
    bool j=(set2[0].number==set4[0].number) && (set2[0].color!=set4[0].color) && IsKong(set2, set2[0].color) && IsKong(set4,set4[0].color);

    bool k=(set3[0].number==set4[0].number) && (set3[0].color!=set4[0].color) && IsPung(set3, set3[0].color) && IsPung(set4,set4[0].color);
    bool l=(set3[0].number==set4[0].number) && (set3[0].color!=set4[0].color) && IsKong(set3, set3[0].color) && IsKong(set4,set4[0].color);

    bool total= a||b||c||d||e||f||g||h||i||j||k||l;
    return total;
}

bool Hand21(std::vector <Tile> set1, bool con1, std::vector <Tile> set2, bool con2, std::vector <Tile> set3, bool con3, std::vector <Tile> set4, bool con4)
{
    bool a=(IsPung(set1, set1[0].color)||IsKong(set1, set1[0].color)) && (IsPung(set2,set2[0].color)||IsKong(set2,set2[0].color))&&con1&&con2;
    bool c=(IsPung(set1, set1[0].color)||IsKong(set1, set1[0].color)) && (IsPung(set3,set3[0].color)||IsKong(set3,set3[0].color))&&con1&&con3;
    bool e=(IsPung(set1, set1[0].color)||IsKong(set1, set1[0].color)) && (IsPung(set4,set4[0].color)||IsKong(set4,set4[0].color))&&con1&&con4;
    bool g=(IsPung(set2, set2[0].color)||IsKong(set2, set2[0].color)) && (IsPung(set3,set3[0].color)||IsKong(set3,set3[0].color))&&con2&&con3;
    bool i=(IsPung(set2, set2[0].color)||IsKong(set2, set2[0].color)) && (IsPung(set4,set4[0].color)||IsKong(set4,set4[0].color))&&con2&&con4;
    bool k=(IsPung(set3, set3[0].color)||IsKong(set3, set3[0].color)) && (IsPung(set4,set4[0].color)||IsKong(set4,set4[0].color))&&con3&&con4;

    bool total= a||c||e||g||i||k;
    return total;
}

bool Hand22(std::vector <Tile> set1, bool con1, std::vector <Tile> set2, bool con2, std::vector <Tile> set3, bool con3, std::vector <Tile> set4, bool con4)
{
    bool a=IsKong(set1, set1[0].color)&&con1;
    bool b=IsKong(set2, set2[0].color)&&con2;
    bool c=IsKong(set3, set3[0].color)&&con3;
    bool d=IsKong(set4, set4[0].color)&&con4;

    bool total=a||b||c||d;
    return total;
}

bool Hand23(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4, std::vector <Tile> pair)
{
    bool a=(set1[0].color!=Color::None)&&(set2[0].color!=Color::None)&&(set3[0].color!=Color::None)&&(set4[0].color!=Color::None)&&(pair[0].color!=Color::None);
    bool b=(set1[0].number!=1)&&(set2[0].number!=1)&&(set3[0].number!=1)&&(set4[0].number!=1)&&(pair[0].number!=1);
    bool c=(set1[2].number!=9)&&(set2[2].number!=9)&&(set3[2].number!=9)&&(set4[2].number!=9)&&(pair[2].number!=9);
    bool d=(set1[3].number!=9)&&(set2[3].number!=9)&&(set3[3].number!=9)&&(set4[3].number!=9)&&(pair[3].number!=9);

    bool total=a&&b&&(c||d);

    return total;
}

bool Hand24(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4, std::vector <Tile> pair)
{
    bool a=(set1[0].color!=Color::None)&&(set2[0].color!=Color::None)&&(set3[0].color!=Color::None)&&(set4[0].color!=Color::None)&&(pair[0].color!=Color::None);
    bool b=(set1[0].number!=1)&&(set2[0].number!=1)&&(set3[0].number!=1)&&(set4[0].number!=1)&&(pair[0].number!=1);
    bool c=(set1[2].number!=9)&&(set2[2].number!=9)&&(set3[2].number!=9)&&(set4[2].number!=9)&&(pair[2].number!=9);
    bool d=(set1[3].number!=9)&&(set2[3].number!=9)&&(set3[3].number!=9)&&(set4[3].number!=9)&&(pair[3].number!=9);

    bool total=a&&b&&(c||d);
    bool result = !total;
    return result;    
}

bool Hand25(std::vector <Tile> set1, bool con1, std::vector <Tile> set2, bool con2, std::vector <Tile> set3, bool con3, std::vector <Tile> set4, bool con4,  std::vector <Tile> pair, bool conp, bool selfdraw)
{
    bool a=con1;
    bool b=con2;
    bool c=con3;
    bool d=con4;
    bool e=conp;

    bool total=a&&b&&c&&d&&e;

    bool real=total&&(selfdraw);

    return real;
}

bool Hand26 (std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
{
    bool a=IsKong(set1, set1[0].color) && IsKong(set2,set2[0].color);
    bool b=IsKong(set1, set1[0].color) && IsKong(set3,set3[0].color);
    bool c=IsKong(set1, set1[0].color) && IsKong(set4,set4[0].color);
    bool d=IsKong(set2, set2[0].color) && IsKong(set3,set3[0].color);
    bool e=IsKong(set2, set2[0].color) && IsKong(set4,set4[0].color);
    bool f=IsKong(set3, set3[0].color) && IsKong(set4,set4[0].color);

    bool total= a||b||c||d||e||f;
    return total;
}

bool Hand28(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
{
    bool a=((IsPung(set1,set1[0].color)||IsKong(set1,set1[0].color)));
    bool b=((IsPung(set2,set2[0].color)||IsKong(set2,set2[0].color)));
    bool c=((IsPung(set3,set3[0].color)||IsKong(set3,set3[0].color)));
    bool d=((IsPung(set4,set4[0].color)||IsKong(set4,set4[0].color)));

    bool total=a&&b&&c&&d;
    return total;
}

bool Hand29(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4, std::vector <Tile> pair)
{
    bool a=(set1[0].color==Color::Character||set1[0].color==Color::None)&&(set2[0].color==Color::Character||set2[0].color==Color::None)&&(set3[0].color==Color::Character||set3[0].color==Color::None)&&(set4[0].color==Color::Character||set4[0].color==Color::None)&&(pair[0].color==Color::Character||pair[0].color!=Color::None);
    bool b=(set1[0].color==Color::Circle||set1[0].color==Color::None)&&(set2[0].color==Color::Circle||set2[0].color==Color::None)&&(set3[0].color==Color::Circle||set3[0].color==Color::None)&&(set4[0].color==Color::Circle||set4[0].color==Color::None)&&(pair[0].color==Color::Circle||pair[0].color==Color::None);
    bool c=(set1[0].color==Color::Bamboo||set1[0].color==Color::None)&&(set2[0].color==Color::Bamboo||set2[0].color==Color::None)&&(set3[0].color==Color::Bamboo||set3[0].color==Color::None)&&(set4[0].color==Color::Bamboo||set4[0].color==Color::None)&&(pair[0].color==Color::Bamboo||pair[0].color==Color::None);
    
    bool total=a||b||c;
    return total;
}

bool Hand30(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
{
    bool a=IsChow(set1,set1[0].color);
    bool b=IsChow(set2,set2[0].color);
    bool c=IsChow(set3,set3[0].color);
    bool d=IsChow(set4,set4[0].color);

    bool combo1=0, combo2=0, combo3=0, combo4=0;
    bool resultc, total=1;

    if ((a==true)&&(b==true)&&(c==true))
    {
        int n1=set1[0].number;
        int n2=set2[0].number;
        int n3=set3[0].number;
        if (n1 > n3) {std::swap(n1, n3);}
        if (n1 > n2) {std::swap(n1, n2);}
        if (n2 > n3) {std::swap(n2, n3);}

        if ((n1==(n2-1))&&(n2==(n3-1)))
        {
            combo1=true;
            if ((set1[0].color!=set2[0].color)&&(set1[0].color!=set3[0].color)&&(set2[0].color!=set3[0].color))
            {
                combo1=true;
            }
        }

        else
        {
            combo1=false;
        }

    }
    if ((a==true)&&(c==true)&&(d==true))
    {   
        int n1=set1[0].number;
        int n2=set3[0].number;
        int n3=set4[0].number;
        if (n1 > n3) {std::swap(n1, n3);}
        if (n1 > n2) {std::swap(n1, n2);}
        if (n2 > n3) {std::swap(n2, n3);}

        if ((n1==(n2-1))&&(n2==(n3-1)))
        {
            if ((set1[0].color!=set3[0].color)&&(set1[0].color!=set4[0].color)&&(set3[0].color!=set4[0].color))
            {
                combo2=true;
            }
        }

        else
        {
            combo2=false;
        }
    }
    if ((a==true)&&(b==true)&&(d==true))
    {   
        int n1=set1[0].number;
        int n2=set2[0].number;
        int n3=set4[0].number;
        if (n1 > n3) {std::swap(n1, n3);}
        if (n1 > n2) {std::swap(n1, n2);}
        if (n2 > n3) {std::swap(n2, n3);}

        
        if ((n1==(n2-1))&&(n2==(n3-1)))
        {
            if ((set1[0].color!=set2[0].color)&&(set1[0].color!=set4[0].color)&&(set2[0].color!=set4[0].color))
            {
                combo3=true;
            }
        }

        else
        {
            combo3=false;
        }
    }
    if ((b==true)&&(c==true)&&(d==true))
    {   
        int n1=set2[0].number;
        int n2=set3[0].number;
        int n3=set4[0].number;
        if (n1 > n3) {std::swap(n1, n3);}
        if (n1 > n2) {std::swap(n1, n2);}
        if (n2 > n3) {std::swap(n2, n3);}

        if ((n1==(n2-1))&&(n2==(n3-1)))
        {
            if ((set2[0].color!=set3[0].color)&&(set2[0].color!=set4[0].color)&&(set3[0].color!=set4[0].color))
            {
                combo4=true;
            }
        }

        else
        {
            combo4=false;
        }
    }
    else
    {
        total=false;
    }
    resultc=combo1||combo2||combo3||combo4;
    return resultc;
}

bool Hand31(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4, std::vector <Tile> pair)
{
    bool a=(set1[0].color!=set2[0].color);
    bool b=(set1[0].color!=set3[0].color);
    bool c=(set1[0].color!=set4[0].color);
    bool d=(set1[0].color!=pair[0].color);
    bool e=(set2[0].color!=set3[0].color);
    bool f=(set2[0].color!=set4[0].color);
    bool g=(set2[0].color!=pair[0].color);
    bool h=(set3[0].color!=set4[0].color);
    bool i=(set3[0].color!=pair[0].color);
    bool j=(set4[0].color!=pair[0].color);

    if (a==0) {a=(set1[0].wind!=set2[0].wind)&&(set1[0].dragon!=set2[0].dragon);}
    if (b==0) {b=(set1[0].wind!=set3[0].wind)&&(set1[0].dragon!=set3[0].dragon);}
    if (c==0) {c=(set1[0].wind!=set4[0].wind)&&(set1[0].dragon!=set4[0].dragon);}
    if (d==0) {d=(set1[0].wind!=pair[0].wind)&&(set2[0].dragon!=pair[0].dragon);}
    if (e==0) {e=(set2[0].wind!=set3[0].wind)&&(set2[0].dragon!=set3[0].dragon);}
    if (f==0) {f=(set2[0].wind!=set4[0].wind)&&(set2[0].dragon!=set4[0].dragon);}
    if (g==0) {g=(set2[0].wind!=pair[0].wind)&&(set2[0].dragon!=pair[0].dragon);}
    if (h==0) {h=(set3[0].wind!=set4[0].wind)&&(set3[0].dragon!=set4[0].dragon);}
    if (i==0) {i=(set3[0].wind!=pair[0].wind)&&(set3[0].dragon!=pair[0].dragon);}
    if (j==0) {j=(set4[0].wind!=pair[0].wind)&&(set4[0].dragon!=pair[0].dragon);}

    bool total=a&&b&&c&&d&&e&&f&&g&&h&&i&&j;
    return total;
}

bool Hand33(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
{
    bool a= ((set1[0].dragon!=Dragon::None)&&(set2[0].dragon!=Dragon::None)&&(IsPung(set1,set1[0].color)||IsKong(set1,set1[0].color))&&(IsPung(set2,set2[0].color)||IsKong(set2,set2[0].color))&&(set1[0].dragon!=set2[0].dragon));
    bool b= ((set1[0].dragon!=Dragon::None)&&(set3[0].dragon!=Dragon::None)&&(IsPung(set1,set1[0].color)||IsKong(set1,set1[0].color))&&(IsPung(set3,set3[0].color)||IsKong(set3,set3[0].color))&&(set1[0].dragon!=set3[0].dragon));
    bool c= ((set1[0].dragon!=Dragon::None)&&(set4[0].dragon!=Dragon::None)&&(IsPung(set1,set1[0].color)||IsKong(set1,set1[0].color))&&(IsPung(set4,set4[0].color)||IsKong(set4,set4[0].color))&&(set1[0].dragon!=set4[0].dragon));
    bool d= ((set2[0].dragon!=Dragon::None)&&(set3[0].dragon!=Dragon::None)&&(IsPung(set2,set2[0].color)||IsKong(set2,set2[0].color))&&(IsPung(set3,set3[0].color)||IsKong(set3,set3[0].color))&&(set2[0].dragon!=set3[0].dragon));
    bool e= ((set2[0].dragon!=Dragon::None)&&(set4[0].dragon!=Dragon::None)&&(IsPung(set2,set2[0].color)||IsKong(set2,set2[0].color))&&(IsPung(set4,set4[0].color)||IsKong(set4,set4[0].color))&&(set2[0].dragon!=set4[0].dragon));
    bool f= ((set3[0].dragon!=Dragon::None)&&(set4[0].dragon!=Dragon::None)&&(IsPung(set3,set3[0].color)||IsKong(set3,set3[0].color))&&(IsPung(set4,set4[0].color)||IsKong(set4,set4[0].color))&&(set3[0].dragon!=set4[0].dragon));

    bool total=a||b||c||d||e||f;
    return total;
}

bool Hand34(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
{
    //combo set1, set2, set3
    int n1=set1[0].number;
    int n2=set2[0].number;
    int n3=set3[0].number;
    if (n1 > n3) {std::swap(n1, n3);}
    if (n1 > n2) {std::swap(n1, n2);}
    if (n2 > n3) {std::swap(n2, n3);}

    bool a1=((set1[0].color!=set2[0].color)&&(set1[0].color!=set3[0].color)&&(set2[0].color!=set3[0].color));
    bool a2=((n1==1)&&(n2==4)&&(n3==7));
    bool a=(IsChow(set1,set1[0].color)&&IsChow(set2,set2[0].color)&&IsChow(set3,set3[0].color)&&a1&&a2);

    //combo set1, set2, set4
    int m1=set1[0].number;
    int m2=set2[0].number;
    int m3=set4[0].number;
    if (m1 > m3) {std::swap(m1, m3);}
    if (m1 > m2) {std::swap(m1, m2);}
    if (m2 > m3) {std::swap(m2, m3);}

    bool b1=((set1[0].color!=set2[0].color)&&(set1[0].color!=set4[0].color)&&(set2[0].color!=set4[0].color));
    bool b2=((m1==1)&&(m2==4)&&(m3==7));
    bool b=(IsChow(set1,set1[0].color)&&IsChow(set2,set2[0].color)&&IsChow(set4,set4[0].color)&&b1&&b2);

    //combo set1, set3, set4
    int l1=set1[0].number;
    int l2=set3[0].number;
    int l3=set4[0].number;
    if (l1 > l3) {std::swap(l1, l3);}
    if (l1 > l2) {std::swap(l1, l2);}
    if (l2 > l3) {std::swap(l2, l3);}

    bool c1=((set1[0].color!=set3[0].color)&&(set1[0].color!=set4[0].color)&&(set3[0].color!=set4[0].color));
    bool c2=((l1==1)&&(l2==4)&&(l3==7));
    bool c=(IsChow(set1,set1[0].color)&&IsChow(set3,set3[0].color)&&IsChow(set4,set4[0].color)&&c1&&c2);

    //combo set2, set3, set4
    int j1=set2[0].number;
    int j2=set3[0].number;
    int j3=set4[0].number;
    if (j1 > j3) {std::swap(j1, j3);}
    if (j1 > j2) {std::swap(j1, j2);}
    if (j2 > j3) {std::swap(j2, j3);}

    bool d1=((set2[0].color!=set3[0].color)&&(set2[0].color!=set4[0].color)&&(set3[0].color!=set4[0].color));
    bool d2=((j1==1)&&(j2==4)&&(j3==7));
    bool d=(IsChow(set2,set2[0].color)&&IsChow(set3,set3[0].color)&&IsChow(set4,set4[0].color)&&d1&&d2);

    bool total=a||b||c||d;
    return total;
}

bool Hand35(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4, std::vector <Tile> pair)
{
    Tile ty1=Circle1;
    Tile ty2=Circle2;
    Tile ty3=Circle3;
    Tile ty4=Circle4;
    Tile ty5=Circle5;
    Tile ty6=Circle8;
    Tile ty7=Circle9;
    Tile ty8=Bamboo2;
    Tile ty9=Bamboo4;
    Tile ty10=Bamboo5;
    Tile ty11=Bamboo6;
    Tile ty12=Bamboo8;
    Tile ty13=Bamboo9;
    Tile ty14=DragonWhite;

    bool t1=IsEqual(set1[0],ty1)||IsEqual(set1[0],ty2)||IsEqual(set1[0],ty3)||IsEqual(set1[0],ty4)||IsEqual(set1[0],ty5)||IsEqual(set1[0],ty6)||IsEqual(set1[0],ty7)||IsEqual(set1[0],ty8)||IsEqual(set1[0],ty9)||IsEqual(set1[0],ty10)||IsEqual(set1[0],ty11)||IsEqual(set1[0],ty12)||IsEqual(set1[0],ty13)||IsEqual(set1[0],ty14);
    bool t2=IsEqual(set1[1],ty1)||IsEqual(set1[1],ty2)||IsEqual(set1[1],ty3)||IsEqual(set1[1],ty4)||IsEqual(set1[1],ty5)||IsEqual(set1[1],ty6)||IsEqual(set1[1],ty7)||IsEqual(set1[1],ty8)||IsEqual(set1[1],ty9)||IsEqual(set1[1],ty10)||IsEqual(set1[1],ty11)||IsEqual(set1[1],ty12)||IsEqual(set1[1],ty13)||IsEqual(set1[1],ty14);
    bool t3=IsEqual(set1[2],ty1)||IsEqual(set1[2],ty2)||IsEqual(set1[2],ty3)||IsEqual(set1[2],ty4)||IsEqual(set1[2],ty5)||IsEqual(set1[2],ty6)||IsEqual(set1[2],ty7)||IsEqual(set1[2],ty8)||IsEqual(set1[2],ty9)||IsEqual(set1[2],ty10)||IsEqual(set1[2],ty11)||IsEqual(set1[2],ty12)||IsEqual(set1[2],ty13)||IsEqual(set1[2],ty14);
    bool t4;
    if (Tilearray(set1)==4){t4=IsEqual(set1[3],ty1)||IsEqual(set1[3],ty2)||IsEqual(set1[3],ty3)||IsEqual(set1[3],ty4)||IsEqual(set1[3],ty5)||IsEqual(set1[3],ty6)||IsEqual(set1[3],ty7)||IsEqual(set1[3],ty8)||IsEqual(set1[3],ty9)||IsEqual(set1[3],ty10)||IsEqual(set1[3],ty11)||IsEqual(set1[3],ty12)||IsEqual(set1[3],ty13)||IsEqual(set1[3],ty14);}else{t4=true;}

    bool t5=IsEqual(set2[0],ty1)||IsEqual(set2[0],ty2)||IsEqual(set2[0],ty3)||IsEqual(set2[0],ty4)||IsEqual(set2[0],ty5)||IsEqual(set2[0],ty6)||IsEqual(set2[0],ty7)||IsEqual(set2[0],ty8)||IsEqual(set2[0],ty9)||IsEqual(set2[0],ty10)||IsEqual(set2[0],ty11)||IsEqual(set2[0],ty12)||IsEqual(set2[0],ty13)||IsEqual(set2[0],ty14);
    bool t6=IsEqual(set2[1],ty1)||IsEqual(set2[1],ty2)||IsEqual(set2[1],ty3)||IsEqual(set2[1],ty4)||IsEqual(set2[1],ty5)||IsEqual(set2[1],ty6)||IsEqual(set2[1],ty7)||IsEqual(set2[1],ty8)||IsEqual(set2[1],ty9)||IsEqual(set2[1],ty10)||IsEqual(set2[1],ty11)||IsEqual(set2[1],ty12)||IsEqual(set2[1],ty13)||IsEqual(set2[1],ty14);
    bool t7=IsEqual(set2[2],ty1)||IsEqual(set2[2],ty2)||IsEqual(set2[2],ty3)||IsEqual(set2[2],ty4)||IsEqual(set2[2],ty5)||IsEqual(set2[2],ty6)||IsEqual(set2[2],ty7)||IsEqual(set2[2],ty8)||IsEqual(set2[2],ty9)||IsEqual(set2[2],ty10)||IsEqual(set2[2],ty11)||IsEqual(set2[2],ty12)||IsEqual(set2[2],ty13)||IsEqual(set2[2],ty14);
    bool t8;
    if (Tilearray(set2)==4){t8=IsEqual(set2[3],ty1)||IsEqual(set2[3],ty2)||IsEqual(set2[3],ty3)||IsEqual(set2[3],ty4)||IsEqual(set2[3],ty5)||IsEqual(set2[3],ty6)||IsEqual(set2[3],ty7)||IsEqual(set2[3],ty8)||IsEqual(set2[3],ty9)||IsEqual(set2[3],ty10)||IsEqual(set2[3],ty11)||IsEqual(set2[3],ty12)||IsEqual(set2[3],ty13)||IsEqual(set2[3],ty14);}else{t8=true;}

    bool t9=IsEqual(set3[0],ty1)||IsEqual(set3[0],ty2)||IsEqual(set3[0],ty3)||IsEqual(set3[0],ty4)||IsEqual(set3[0],ty5)||IsEqual(set3[0],ty6)||IsEqual(set3[0],ty7)||IsEqual(set3[0],ty8)||IsEqual(set3[0],ty9)||IsEqual(set3[0],ty10)||IsEqual(set3[0],ty11)||IsEqual(set3[0],ty12)||IsEqual(set3[0],ty13)||IsEqual(set3[0],ty14);
    bool t10=IsEqual(set3[1],ty1)||IsEqual(set3[1],ty2)||IsEqual(set3[1],ty3)||IsEqual(set3[1],ty4)||IsEqual(set3[1],ty5)||IsEqual(set3[1],ty6)||IsEqual(set3[1],ty7)||IsEqual(set3[1],ty8)||IsEqual(set3[1],ty9)||IsEqual(set3[1],ty10)||IsEqual(set3[1],ty11)||IsEqual(set3[1],ty12)||IsEqual(set3[1],ty13)||IsEqual(set3[1],ty14);
    bool t11=IsEqual(set3[2],ty1)||IsEqual(set3[2],ty2)||IsEqual(set3[2],ty3)||IsEqual(set3[2],ty4)||IsEqual(set3[2],ty5)||IsEqual(set3[2],ty6)||IsEqual(set3[2],ty7)||IsEqual(set3[2],ty8)||IsEqual(set3[2],ty9)||IsEqual(set3[2],ty10)||IsEqual(set3[2],ty11)||IsEqual(set3[2],ty12)||IsEqual(set3[2],ty13)||IsEqual(set3[2],ty14);
    bool t12;
    if (Tilearray(set3)==4){t12=IsEqual(set3[3],ty1)||IsEqual(set3[3],ty2)||IsEqual(set3[3],ty3)||IsEqual(set3[3],ty4)||IsEqual(set3[3],ty5)||IsEqual(set3[3],ty6)||IsEqual(set3[3],ty7)||IsEqual(set3[3],ty8)||IsEqual(set3[3],ty9)||IsEqual(set3[3],ty10)||IsEqual(set3[3],ty11)||IsEqual(set3[3],ty12)||IsEqual(set3[3],ty13)||IsEqual(set3[3],ty14);}else{t12=true;}

    bool t13=IsEqual(pair[0],ty1)||IsEqual(pair[0],ty2)||IsEqual(pair[0],ty3)||IsEqual(pair[0],ty4)||IsEqual(pair[0],ty5)||IsEqual(pair[0],ty6)||IsEqual(pair[0],ty7)||IsEqual(pair[0],ty8)||IsEqual(pair[0],ty9)||IsEqual(pair[0],ty10)||IsEqual(pair[0],ty11)||IsEqual(pair[0],ty12)||IsEqual(pair[0],ty13)||IsEqual(pair[0],ty14);
    bool t14=IsEqual(pair[1],ty1)||IsEqual(pair[1],ty2)||IsEqual(pair[1],ty3)||IsEqual(pair[1],ty4)||IsEqual(pair[1],ty5)||IsEqual(pair[1],ty6)||IsEqual(pair[1],ty7)||IsEqual(pair[1],ty8)||IsEqual(pair[1],ty9)||IsEqual(pair[1],ty10)||IsEqual(pair[1],ty11)||IsEqual(pair[1],ty12)||IsEqual(pair[1],ty13)||IsEqual(pair[1],ty14);

    bool total=t1&&t2&&t3&&t4&&t5&&t6&&t7&&t8&&t9&&t10&&t11&&t12&&t13&&t14;
    return total;
}

bool Hand36(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
{
    bool a=(IsChow(set1,set1[0].color)&&IsChow(set2, set2[0].color)&&IsChow(set3,set3[0].color)&&(set1[0].number==set2[0].number)&&(set1[0].number==set3[0].number)&&(set1[0].color!=set2[0].color)&&(set1[0].color!=set3[0].color)&&(set2[0].color!=set3[0].color));
    bool b=(IsChow(set1,set1[0].color)&&IsChow(set2, set2[0].color)&&IsChow(set4,set4[0].color)&&(set1[0].number==set2[0].number)&&(set1[0].number==set4[0].number)&&(set1[0].color!=set2[0].color)&&(set1[0].color!=set4[0].color)&&(set2[0].color!=set4[0].color));
    bool c=(IsChow(set1,set1[0].color)&&IsChow(set3, set3[0].color)&&IsChow(set4,set4[0].color)&&(set1[0].number==set3[0].number)&&(set1[0].number==set4[0].number)&&(set1[0].color!=set3[0].color)&&(set1[0].color!=set4[0].color)&&(set3[0].color!=set4[0].color));
    bool d=(IsChow(set2,set2[0].color)&&IsChow(set3, set3[0].color)&&IsChow(set4,set4[0].color)&&(set2[0].number==set3[0].number)&&(set2[0].number==set4[0].number)&&(set2[0].color!=set3[0].color)&&(set2[0].color!=set4[0].color)&&(set3[0].color!=set4[0].color));
    
    bool total=a||b||c||d;
    return total;
}

bool Hand37(std::vector <Tile> set1, std::vector <Tile> set2, std::vector <Tile> set3, std::vector <Tile> set4)
{
    int n1=set1[0].number;
    int n2=set2[0].number;
    int n3=set3[0].number;
    int n4=set4[0].number;

    if (n1 > n3) {std::swap(n1, n3);}
    if (n1 > n2) {std::swap(n1, n2);}
    if (n2 > n3) {std::swap(n2, n3);}

    bool a=((IsPung(set1,set1[0].color)||IsKong(set1,set1[0].color))&&(IsPung(set2, set2[0].color)||IsKong(set2, set2[0].color))&&(IsPung(set3,set3[0].color)||IsKong(set3,set3[0].color))&&(set1[0].color!=set2[0].color)&&(set1[0].color!=set3[0].color)&&(set2[0].color!=set3[0].color));
    bool b=((IsPung(set1,set1[0].color)||IsKong(set1,set1[0].color))&&(IsPung(set2, set2[0].color)||IsKong(set2, set2[0].color))&&(IsPung(set4,set4[0].color)||IsKong(set4,set4[0].color))&&(set1[0].color!=set2[0].color)&&(set1[0].color!=set4[0].color)&&(set2[0].color!=set4[0].color));
    bool c=((IsPung(set1,set1[0].color)||IsKong(set1,set1[0].color))&&(IsPung(set3, set3[0].color)||IsKong(set3, set3[0].color))&&(IsPung(set4,set4[0].color)||IsKong(set4,set4[0].color))&&(set1[0].color!=set3[0].color)&&(set1[0].color!=set4[0].color)&&(set3[0].color!=set4[0].color));
    bool d=((IsPung(set2,set2[0].color)||IsKong(set2,set2[0].color))&&(IsPung(set3, set3[0].color)||IsKong(set3, set3[0].color))&&(IsPung(set4,set4[0].color)||IsKong(set4,set4[0].color))&&(set2[0].color!=set3[0].color)&&(set2[0].color!=set4[0].color)&&(set3[0].color!=set4[0].color));
    
    bool a1=0,b1=0,c1=0,d1=0;
    if (a==true)
    {
        int n1=set1[0].number; int n2=set2[0].number; int n3=set3[0].number;
        if (n1 > n3) {std::swap(n1, n3);}
        if (n1 > n2) {std::swap(n1, n2);}
        if (n2 > n3) {std::swap(n2, n3);}

        a1=(n1==(n2-1))&&(n2==(n3-1));
    }
    if (b==true)
    {
        int m1=set1[0].number; int m2=set2[0].number; int m3=set4[0].number;
        if (m1 > m3) {std::swap(m1, m3);}
        if (m1 > m2) {std::swap(m1, m2);}
        if (m2 > m3) {std::swap(m2, m3);}

        b1=(m1==(m2-1))&&(m2==(m3-1));
    }
    if (c==true)
    {
        int o1=set1[0].number; int o2=set3[0].number; int o3=set4[0].number;
        if (o1 > o3) {std::swap(o1, o3);}
        if (o1 > o2) {std::swap(o1, o2);}
        if (o2 > o3) {std::swap(o2, o3);}

        c1=(o1==(o2-1))&&(o2==(o3-1));
    }
    if (d==true)
    {
        int p1=set2[0].number; int p2=set3[0].number; int p3=set4[0].number;
        if (p1 > p3) {std::swap(p1, p3);}
        if (p1 > p2) {std::swap(p1, p2);}
        if (p2 > p3) {std::swap(p2, p3);}

        d1=(p1==(p2-1))&&(p2==(p3-1));
    }

    bool total=a1||b1||c1||d1;
    return total;
}

bool Hand38(std::vector <Tile> set1, bool con1, std::vector <Tile> set2, bool con2, std::vector <Tile> set3, bool con3, std::vector <Tile> set4, bool con4)
{
    bool b=IsKong(set1, set1[0].color) && IsKong(set2,set2[0].color)&&con1&&con2;
    
    bool d=IsKong(set1, set1[0].color) && IsKong(set3,set3[0].color)&&con1&&con3;
    
    bool f=IsKong(set1, set1[0].color) && IsKong(set4,set4[0].color)&&con1&&con4;
    
    bool h=IsKong(set2, set2[0].color) && IsKong(set3,set3[0].color)&&con2&&con3;
    
    bool j=IsKong(set2, set2[0].color) && IsKong(set4,set4[0].color)&&con2&&con4;

    bool l=IsKong(set3, set3[0].color) && IsKong(set4,set4[0].color)&&con3&&con4;

    bool total= b||d||f||h||j||l;
    return total;
}

int main ()
{
    Wind seat;
    Wind prevail;
    prevail=Wind::East;
    seat=Wind::East;

    bool selfdraw=false; //won by selfdraw is true, discard pile false
    
    Tile set1t1 (Bamboo5), set1t2 (Bamboo5), set1t3 (Bamboo5), set1t4 (Bamboo5);
    std::vector<Tile> vec1 = {set1t1, set1t2, set1t3};
    bool con1=true;

    Tile set2t1 (Bamboo3), set2t2 (Bamboo4), set2t3 (Bamboo5), set2t4 (Character1);
    std::vector<Tile> vec2 = {set2t1, set2t2, set2t3};
    bool con2=true;

    Tile set3t1 (Circle4), set3t2 (Circle4), set3t3 (Circle4), set3t4 (Circle4);
    std::vector<Tile> vec3 = {set3t1, set3t2, set3t3, set3t4};
    bool con3=true;
    
    Tile set4t1 (Circle3), set4t2 (Circle3), set4t3 (Circle3), set4t4 (Circle3);
    std::vector<Tile> vec4 = {set4t1, set4t2, set4t3, set4t4};
    bool con4=true;
    
    Tile pair_t1 (DragonWhite), pair_t2 (DragonWhite);
    std::vector<Tile> pair = {pair_t1, pair_t2};
    bool conp=true;

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

    bool h15=Hand15(vec1, vec2, vec3, vec4, seat, prevail);
    std::cout<<"Hand15: Pung of Prevalent?"<<h15<<"\n";

    bool h16=Hand16(vec1, vec2, vec3, vec4, seat, prevail);
    std::cout<<"Hand15: Pung of Seat?"<<h16<<"\n";

    bool h17=Hand17(vec1, con1, vec2, con2, vec3, con3, vec4, con4, pair, conp, selfdraw);
    std::cout<<"Hand17: Concealed Hand?"<<h17<<"\n";

    bool h18=Hand18(vec1, vec2, vec3, vec4, pair);
    std::cout<<"Hand18: All Chows?"<<h18<<"\n";

    bool h19=Hand19(vec1, vec2, vec3, vec4, pair);
    std::cout<<"Hand19: Tile Hog?"<<h19<<"\n";

    bool h20=Hand20(vec1, vec2, vec3, vec4);
    std::cout<<"Hand20: Double Pung?"<<h20<<"\n";

    bool h21=Hand21(vec1, con1, vec2, con2, vec3, con3, vec4, con4);
    std::cout<<"Hand21: Two Concealed Pungs?"<<h21<<"\n";

    bool h22=Hand22(vec1, con1, vec2, con2, vec3, con3, vec4, con4);
    std::cout<<"Hand22: Concealed Kong?"<<h22<<"\n";

    bool h23=Hand23(vec1, vec2, vec3, vec4, pair);
    std::cout<<"Hand23: All simples?"<<h23<<"\n";

    bool h24=Hand24(vec1, vec2, vec3, vec4, pair);
    std::cout<<"Hand24: Outside Hand?"<<h24<<"\n";

    bool h25=Hand25(vec1, con1, vec2, con2, vec3, con3, vec4, con4, pair, conp, selfdraw);
    std::cout<<"Hand25: Fully Concealed Hand?"<<h25<<"\n";

    bool h26=Hand26(vec1, vec2, vec3, vec4);
    std::cout<<"Hand26: Two Melded Kongs?"<<h26<<"\n";

    //skip 27 until understand last of its kind

    bool h28=Hand28(vec1, vec2, vec3, vec4);
    std::cout<<"Hand28: All Pungs?"<<h28<<"\n";

    bool h29=Hand29(vec1, vec2, vec3, vec4, pair);
    std::cout<<"Hand29: Half Flush?"<<h29<<"\n";

    bool h30=Hand30(vec1, vec2, vec3, vec4);
    std::cout<<"Hand30: Mix Shifted Chow?"<<h30<<"\n";

    bool h31=Hand31(vec1, vec2, vec3, vec4, pair);
    std::cout<<"Hand30: All Type?"<<h31<<"\n";

    //skip 32 until understand melded hand

    bool h33=Hand33(vec1, vec2, vec3, vec4);
    std::cout<<"Hand33: Two Dragon Pung?"<<h33<<"\n";

    bool h34=Hand34(vec1, vec2, vec3, vec4);
    std::cout<<"Hand34: Mixed Straight?"<<h34<<"\n";

    bool h35=Hand35(vec1, vec2, vec3, vec4, pair);
    std::cout<<"Hand35: Reversible Tiles?"<<h35<<"\n";

    bool h36=Hand36(vec1, vec2, vec3, vec4);
    std::cout<<"Hand36: Mixed Triple Chow?"<<h36<<"\n";

    bool h37=Hand37(vec1, vec2, vec3, vec4);
    std::cout<<"Hand37: Mixed Shifted Pung?"<<h37<<"\n";

    bool h38=Hand38(vec1, con1, vec2, con2, vec3, con3, vec4, con4);
    std::cout<<"Hand38: Two Concealed Kongs?"<<h38<<"\n";

    return 0; 
}


