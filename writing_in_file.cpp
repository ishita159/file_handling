#include<bits/stdc++.h>

using namespace std;
int main()
{

    ofstream fp;
    char s[100];

    fp.open("/home/ishita/Documents/MyPrograms/C++_file_handling/file_handling/ishita.txt");
    if (!fp)
    {
        cout << "Error in opening file..!!";
        exit(1);
    }
    cout << "Enter few lines of text :\n";
    string line;
    while (fp)
    {

        // Read a Line from standard input
        getline(cin, line);

        // Press -1 to exit
        if (line == "0")
            break;

        // Write line in file
        fp << line << endl;
    }
    fp.close();
    return 0;
}
/*#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <fstream.h>
#include <stdlib.h>
void main()
{
    clrscr();
    ofstream fp;
    char s[100], fname[20];
    cout << "Enter a file name with extension (like file.txt) to create a file : ";
    gets(fname);
    fp.open(fname);
    if (!fp)
    {
        cout << "Error in opening file..!!";
        getch();
        exit(1);
    }
    cout << "Enter few lines of text :\n";
    while (strlen(gets(s)) > 0)
    {
        fp << s;
        fp << "\n";
    }
    fp.close();
    getch();
}*/