#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream ifs;
    int num, i;

    ifs.open("data.txt");
    if (ifs.fail())
    {
        cerr << "File open error\n";
        exit(0);
    }

    ifs >> N;
    cout << "Total number of lines " << N << endl;

    //while (ifs >> num)
    for (i=0; i < N; i++)
    {
        cout << num << " was read from the file\n";
    }

    ifs.close();
}