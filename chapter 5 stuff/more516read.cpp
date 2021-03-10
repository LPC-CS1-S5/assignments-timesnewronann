#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

    ifstream ifs;

    int num;
    string fileLine;

    ifs.open("data.txt");
    if (ifs.fail())
    {
        cerr << "File open error\n";
        exit(0);
    }

    while (ifs >> fileLine)
    {
        cout << fileLine << endl;
    }

    ifs.close();
}