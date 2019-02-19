#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string word;
    string wif;
    fstream file("words.txt");
    int nTimes = 0;
    cin >> word;
    while (file >> wif)
    {
        cout << wif << " ";
        if (wif == word)
        {
            ++nTimes;
        }
    }
    cout << nTimes << endl;
    return 0;
}