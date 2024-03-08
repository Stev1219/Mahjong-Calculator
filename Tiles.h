namespace TileInfo
{

enum class Wind 
{
    East, South, West, North, None
};

enum class Dragon 
{
    Red, White, Green, None
};


enum class Color
{
    Circle,Bamboo,Character,None
};

class Tile 
{
public:
    Tile(Color color, int number, Wind wind, Dragon dragon)
    {
        this->color = color;
        this->number = number;
        this->wind= wind;
        this->dragon= dragon;
    }
    Color color;
    int number;
    Wind wind;
    Dragon dragon;
};

const Tile Bamboo1 (Color::Bamboo,1, Wind::None, Dragon::None);
const Tile Bamboo2 (Color::Bamboo,2, Wind::None, Dragon::None);
const Tile Bamboo3 (Color::Bamboo,3, Wind::None, Dragon::None);
const Tile Bamboo4 (Color::Bamboo,4, Wind::None, Dragon::None);
const Tile Bamboo5 (Color::Bamboo,5, Wind::None, Dragon::None);
const Tile Bamboo6 (Color::Bamboo,6, Wind::None, Dragon::None);
const Tile Bamboo7 (Color::Bamboo,7, Wind::None, Dragon::None);
const Tile Bamboo8 (Color::Bamboo,8, Wind::None, Dragon::None);
const Tile Bamboo9 (Color::Bamboo,9, Wind::None, Dragon::None);

const Tile Circle1 (Color::Circle,1, Wind::None, Dragon::None);
const Tile Circle2 (Color::Circle,2, Wind::None, Dragon::None);
const Tile Circle3 (Color::Circle,3, Wind::None, Dragon::None);
const Tile Circle4 (Color::Circle,4, Wind::None, Dragon::None);
const Tile Circle5 (Color::Circle,5, Wind::None, Dragon::None);
const Tile Circle6 (Color::Circle,6, Wind::None, Dragon::None);
const Tile Circle7 (Color::Circle,7, Wind::None, Dragon::None);
const Tile Circle8 (Color::Circle,8, Wind::None, Dragon::None);
const Tile Circle9 (Color::Circle,9, Wind::None, Dragon::None);

const Tile Character1 (Color::Character,1, Wind::None, Dragon::None);
const Tile Character2 (Color::Character,2, Wind::None, Dragon::None);
const Tile Character3 (Color::Character,3, Wind::None, Dragon::None);
const Tile Character4 (Color::Character,4, Wind::None, Dragon::None);
const Tile Character5 (Color::Character,5, Wind::None, Dragon::None);
const Tile Character6 (Color::Character,6, Wind::None, Dragon::None);
const Tile Character7 (Color::Character,7, Wind::None, Dragon::None);
const Tile Character8 (Color::Character,8, Wind::None, Dragon::None);
const Tile Character9 (Color::Character,9, Wind::None, Dragon::None);

const Tile WindEast (Color::None,0, Wind::East, Dragon::None);
const Tile WindSouth (Color::None,0, Wind::South, Dragon::None);
const Tile WindWest (Color::None,0, Wind::West, Dragon::None);
const Tile WindNorth (Color::None,0, Wind::North, Dragon::None);

const Tile DragonRed (Color::None,0, Wind::None, Dragon::Red);
const Tile DragonWhite (Color::None,0, Wind::None, Dragon::White);
const Tile DragonGreen (Color::None,0, Wind::None, Dragon::Green);

const Tile Flower1 (Color::None,1, Wind::None, Dragon::None);
const Tile Flower2 (Color::None,2, Wind::None, Dragon::None);
const Tile Flower3 (Color::None,3, Wind::None, Dragon::None);
const Tile Flower4 (Color::None,4, Wind::None, Dragon::None);

const Tile Season1 (Color::None,1, Wind::None, Dragon::None);
const Tile Season2 (Color::None,2, Wind::None, Dragon::None);
const Tile Season3 (Color::None,3, Wind::None, Dragon::None);
const Tile Season4 (Color::None,4, Wind::None, Dragon::None);

}