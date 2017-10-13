#include <iostream>
#include <cstring>

using namespace std;
int main() {
    char str[81];

    cin.getline(str,81);

    for(int i = 0; i < (strlen(str)); i++)
    {
        if (str[i] == ' ')
            cout << "%20";
        else cout << str[i];
    }
    return 0;
}
