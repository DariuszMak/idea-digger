#include <iostream>

using namespace std;

int main(int argc, char* args[])
{
    int e;
    cin >> e;
    for(int i = 0; i < e; ++i)
    {
        int x;
        cin >> x;
        int minDiv = 1000;
        int maxDiv = 0;
        int toRead;
        cin >> toRead;
        while(toRead != 0)
        {
            if(toRead % x == 0)
            {
                if(toRead < minDiv)
                    minDiv = toRead;
                if(toRead > maxDiv)
                    maxDiv = toRead;
            }
            cin >> toRead;
        }
        cout << minDiv << endl << maxDiv << endl;
    }

    return 0;
}
