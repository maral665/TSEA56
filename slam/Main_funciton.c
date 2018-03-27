using namespace std;

#define FIRST 1
#define SECOND 0.9
#define THIRD 0.74
#define FOURTH 0.25

void add_dot_first_lap(int abs_x, int abs_y)
{
    //Fourth "ring" outside of the added dot
    for(int i = -3; i < 4; i++)
    {
        for(int j = -3; j < 4; j + 6)
        {
            if (map.get_value < FOURTH)
            map.add_value(abs_x + i, abs_y + j, FOURTH);
        }
    }
    for(int i = -2; i < 3; i++)
    {
        for(int j = -3; j < 4; j + 6)
        {
            if (map.get_value < FOURTH)
            map.add_value(abs_x + j, abs_y + i, FOURTH);
        }
    }
    //Third "ring" outside of the added dot
    for(int i = -2; i < 3; i++)
    {
        for(int j = -2; j < 3; j + 4)
        {
            if (map.get_value < THIRD)
            map.add_value(abs_x + i, abs_y + j, THIRD);
        }
    }
    for(int i = -1; i < 2; i++)
    {
        for(int j = -2; j < 3; j + 4)
        {
            if (map.get_value < THIRD)
            map.add_value(abs_x + j, abs_y + i, THIRD);
        }
    }
    //Second "ring" outside of the added dot
    for(int i = -1; i < 2; i++)
    {
        for(int j = -1; j < 2; j++)
        {
            if (map.get_value < SECOND)
            map.add_value(abs_x + i, abs_y + j, SECOND);
        }
    }

    map.add_value(abs_x, abs_y, FIRST);
}
