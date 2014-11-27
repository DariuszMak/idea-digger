#include <iostream>
#include <string>

using namespace std;

string zitan(string input)
{
    string nowe = "";
    int len = input.length();
    for(int i = 0; i < len; ++i)
    {
        switch(input[i])
        {
        case 'a':
            nowe.push_back('A');
            break;
        case 't':
            nowe.push_back('T');
            break;
        case 'p':
            nowe.push_back('P');
            break;
        case 'u':
            nowe.push_back('U');
            break;
        case ' ':
            nowe.push_back(' ');
            nowe.push_back(' ');
            break;
        }
    }
    return nowe;
}

int main(int argc, char* args[])
{
    string tekst;
    getline(cin, tekst);
    cout << zitan(tekst);
}
