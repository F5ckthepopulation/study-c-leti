#include <iostream>
using std::cin;
using std::cout;




//---------треугольник-----------
bool triangle(double x, double y)
{
    if (x <= 3 && y <= 4 && y <= 4 - (4.0 / 3.0) * x)
    {
        if (x >= 0 && y >= 0)
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char* argv[])
{
    double x, y;

    bool isHuman = false;
    if (argc <= 1 || strcmp(argv[1], "false") != 0)
    {
        isHuman = true;
    }

    if (isHuman)
    {
        std::cout << "Enter coordinates X and Y, for your point";
    }

    while (true)
    {
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            break;
        }
        if (triangle(x, y))
        {
            if (isHuman)
            {
                cout << "Your point on triangle";
            }
            else
            {
                cout << "YES";
            }
        }
        else
        {
            if (isHuman)
            {
                cout << "Nope, your point not on triangle";
            }
            else
            {
                cout << "NO";
            }
        }
    }
}
