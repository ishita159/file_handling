#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream rbyc("/home/ishita/Documents/MyPrograms/C++_file_handling/file_handling/ishita.txt"), rbyw("/home/ishita/Documents/MyPrograms/C++_file_handling/file_handling/ishita.txt"), rbyl("/home/ishita/Documents/MyPrograms/C++_file_handling/file_handling/ishita.txtt");

    if (!rbyc.is_open())
    {
        cout << "FILE 1 NOT FOUND" << endl;
        return 0;
    }
    if (!rbyw.is_open())
    {
        cout << "FILE 2 NOT FOUND" << endl;
        return 0;
    }
    if (!rbyl.is_open())
    {
        cout << "FILE 3 NOT FOUND" << endl;
        return 0;
    }

    cout << "Reading letter by letter: " << endl;
    char letter;
    while (rbyc.get(letter))
    {
        cout << letter;
    }
    cout << "Reading Word By Word" << endl;
    //   rbyc.seekg(0, ios::beg);
    string word;
    while (rbyc >> word)
    {
        cout << word << endl;
    }

    cout << "Reading Line by Line" << endl;
    //    rbyc.seekg(0, ios::beg);
    string line;
    while (getline(rbyc, line))
    {
        cout << line << endl;
    }
    rbyc.close();
    rbyl.close();
    rbyw.close();
    return 0;
}