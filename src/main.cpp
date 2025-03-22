




#include <iostream>
#include <conio.h>

using namespace std;

void pressAnyKey();

int main(){
    float usrMatrix[3][3];
    float transposeMatrix[3][3];
    int row = 2;
    int column = 0;
    int trnspsColumn = 2;

    cout << "Please fill the following Matrix\n";
    pressAnyKey();
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << "Write the number in position ["<< i <<"][" << j <<"]: ";
            cin >> usrMatrix[i][j];
        }
    }
    pressAnyKey();
    cout << "Your matrix looks like this righ now\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << "[" << usrMatrix[i][j] << "]";
        }
        cout << "\n";
    }
    pressAnyKey();
    
    for(int trnspsColumn;trnspsColumn<0;trnspsColumn-1)
    {
        for(int i=0;i<3;i++)
        {
            transposeMatrix[i][trnspsColumn] = usrMatrix[row][column];
            column++;
        }
    row-1;
    }
    
    for(int trnspsColumn=2;trnspsColumn==0;trnspsColumn)
    {
        for(int i=0;i<3;i++)
        {
        cout<< transposeMatrix[i][trnspsColumn] << "\n";       
        }
    }
    return 0;
}

void pressAnyKey()
{
    cout << "\nPRESS ANY KEY TO CONTINUE\n";
    getch();
    system("cls");
}