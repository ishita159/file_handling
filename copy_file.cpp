#include <iostream.h>
#include <conio.h>
#include <fstream.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
    clrscr();
    ifstream fs;
    ofstream ft;
    char ch, fname1[20], fname2[20];
    cout << "Enter source file name with extension (like files.txt) : ";
    gets(fname1);
    fs.open(fname1);
    if (!fs)
    {
        cout << "Error in opening source file..!!";
        getch();
        exit(1);
    }
    cout << "Enter target file name with extension (like filet.txt) : ";
    gets(fname2);
    ft.open(fname2);
    if (!ft)
    {
        cout << "Error in opening target file..!!";
        fs.close();
        getch();
        exit(2);
    }
    while (fs.eof() == 0)
    {
        fs >> ch;
        ft << ch;
    }
    cout << "File copied successfully..!!";
    fs.close();
    ft.close();
    getch();
}
