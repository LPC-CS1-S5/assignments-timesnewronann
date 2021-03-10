#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
    ofstream ofs;
    int N;
    int rdnum;

    unsigned seed = time(0);
    srand(seed); // srand(time(0));

    cout << "Enter the number of Random numbers :";
    cin >> N;
    ofs.open("data.txt");
    if (ofs.fail())
    {
        cerr << "File Open Error";
        exit(0);
    }
    ofs << N << endl;
    

    for (int i = 0; i < N; i++)
    {
        rdnum = rand() % 100;
        ofs << rdnum << endl;
        if (!ofs.fail())
            cout << rdnum << " has writeen into the file\n";
    }
    ofs.close();
}