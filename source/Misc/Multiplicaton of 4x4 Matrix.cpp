#include <iostream>
using namespace std;
int main()
{

 int mat[4][4] = {{2, 1, 4, 3},
                 {3, 4, 1, 2},
                 {2, 7, 5, 6},
                 {6, 5, 7, 3}};

 int result, matrix[4][4];
 for(int i = 0; i < 4; i++)
 {
   for(int j = 0; j < 4; j++)
   {
    result = 0;
    for(int k = 0; k < 4; k++)
    {
      result = result + mat[i][k] * mat[k][j];
    }
      matrix[i][j] = result;
      cout << result <<"\t";
   }
      cout << endl;
 }



return 0;
}