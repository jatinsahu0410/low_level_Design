#include <iostream>
#include <algorithm>
#include "ICar.h"
using namespace std;

int main()
{
    // create a remote proxy
    RemoteProxy *remote = new RemoteProxy();

    while (true)
    {
        string action = "";
        cout << "Enter action (left/right/accelerate/exit{to end}): ";
        cin >> action;
        if (action == "left")
        {
            remote->turnLeft();
        }
        else if (action == "right")
        {
            remote->turnRight();
        }
        else if (action == "accelerate")
        {
            remote->accelerate();
        }
        else if (action == "exit")
        {
            cout << "Thankyou" << endl;
            break;
        }
        else
        {
            cout << "Invalid action " << endl;
            break;
        }
    }
    return 0;
}
