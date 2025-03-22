/*
Amerike University
Author: Ali Angel
Work #: 17
Date: 21/03/25
Description: This program will ask the user to fill a 4 by 3 
matrix and it will then transpose it and show it as a 3 by 4 matrix 
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pressAnyKey();

int main(){
    float usrMatrix[4][3];
    float transposeMatrix[3][4];
    int row = 0;
    int column = 0;

    cout << "Please fill the following Matrix\n";
    pressAnyKey();
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << "Write the number in position ["<< i <<"][" << j <<"]: ";
            cin >> usrMatrix[i][j];
        }
    }
    pressAnyKey();
    cout << "Your matrix looks like this righ now\n";
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << "[" << usrMatrix[i][j] << "]";
        }
        cout << "\n";
    }
    pressAnyKey();
    for(int j = 0;j<4;j++)
    {
        for(int i=0;i<3;i++)
        {
            transposeMatrix[i][j] = usrMatrix[row][column];
            column++;
        }
    row+1;
    }
    cout << "This is your transposed matrix\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout << "[" << transposeMatrix[i][j] << "]";
        }
        cout << "\n";
    }
    return 0;
}
void pressAnyKey()
{
    cout << "\nPRESS ANY KEY TO CONTINUE\n";
    getch();
    system("cls");
}