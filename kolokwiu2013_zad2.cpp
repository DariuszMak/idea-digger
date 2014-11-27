#include <iostream>

using namespace std;

int funkcja(int x)
{
    if(x == 1)
        return 3;
    else if(x == 2)
        return 7;
    else
        return ((funkcja(x - 1) + funkcja(x - 2))/2)+1;
}

int main(int argc, char* args[])
{

    int e;
    cin >> e;
    cout << funkcja(e);

    return 0;
}
