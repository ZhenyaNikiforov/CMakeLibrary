#include <iostream>
#include "bibl.h"
using namespace std;

int main()
{
    string userName = "";
    Leaver lv;
    cout << "Vvedite kak vas zovut: ";
    cin >> userName;
    cout << lv.leave(userName) << endl;
};