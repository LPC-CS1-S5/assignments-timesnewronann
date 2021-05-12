#include <iostream>
#include <string>
using namespace std;

int main() {
        string str1, str2;
        string dest;
        int pos;

        str1 = "programming";
        str2 = "C++,Programming,Section,3";

        cout << str1.substr(str1.length() - 4, 4) << endl;

        cout << str1.assign(str2, 3, 3) << endl;

        pos = str2.find(',', 0);
        cout << "Find position" << pos << endl;
        dest = str2.substr(0, pos);
        cout << "Destination " << dest << endl;

        int prev = pos + 1;
        pos = str2.find(',', 25); // try to find something that isn't in the bound gives npos
        dest = str2.substr(prev, pos - prev);
        cout << "Destination " << dest << endl;

        prev = pos + 1;
        pos = str2.find(',', pos + 1);
        dest = str2.substr(prev, pos - prev);
        cout << "Destination " << dest << endl;

string::npos
	// Reference code to make the loop structure
	// while ((found = txt.find(delimiter, start)) != string::npos) {
	// 	split = txt.substr(start, found-start);
	// 	cout << " Split word " << split << endl;
	// 	start = found + 1;
	// 	cnt += 1;
	// }


}