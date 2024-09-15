#include <iostream>
using namespace std;

void print2DArray(int** arr, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void printRowSum(int arr[][3], int row , int col){
    for(int i = 0; i < row; i++){
        int s = 0;
        for(int j = 0; j < col; j++){
            s += arr[i][j];
        }
        cout << i << "th row sum = " << s << endl;
        
    }
}
int main(int argc, char const *argv[])
{
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    printRowSum(arr, 3,3);


    return 0;
}
