#include <iostream>
#include <string>
#include<math.h>
using namespace std;

#define DELAY 100000000L
#define CLS (cout << "\033[2J")                                // Clear screen
#define LOCATE(z, s) (cout << "\033[" << z << ';' << s << 'H') // Position the cursor in row z and column s

int main()
{
    int x = 2, y = 3, dx = 1, speed = 0;
    string floor(79, '-'),
        header = "****  RESIT MAT Khalil C++ 2019  ****";

    CLS;
    LOCATE(1, 25);
    cout << header << endl;
    LOCATE(25, 1);
    cout << floor << endl;

    while (true) //  "always" bounce
    {
        LOCATE(y, x);
        cout << 'X' << endl; // Show the flex Position
        for (long wait = 0; wait < DELAY; ++wait);
        if (x == 1 || x == 79)
            dx = -dx; //Bounce off ? On the ?
            cout << sin(x) << endl;
            cout << cos(x) << endl;
        int n = n + 1;
        cout << n << endl;
        if (y == 24)
        {
            speed = -speed;
            if (speed == 0)
                speed = -7;
            int m = m + 1;
            cout << m << endl;
        }
        speed += 1;
        LOCATE(y, x);
        cout << ' ';
        y += speed;
        x += dx;
    }
}