#include <iostream>
#include <iostream>

using namespace std;



int main(){
  int colUp[3];
  int colDown[3];
  int rowLeft[3];
  int rowRight[3];
  int sudoku[3][3];

  // colUp 1-4 入力 
  for (int i = 0; i < 4; i++){
    cout << "Enter colUp " << i + 1 << ": ";
    cin >> colUp[i];
  }
  cout << endl;

  // colDown 1-4 入力
  for (int i = 0; i < 4; i++){
    cout << "Enter colDown " << i + 1 << ": ";
    cin >> colDown[i];
  }
  cout << endl;

  // rowRight 1-4 入力
  for (int i = 0; i < 4; i++){
    cout << "Enter rowLeft " << i + 1 << ": ";
    cin >> rowLeft[i];
  }
  cout << endl;

  // rowLeft 1-4 入力
  for (int i = 0; i < 4; i++){
    cout << "Enter rowRight " << i + 1 << ": ";
    cin >> rowRight[i];
  }
  cout << endl;

  // 288通りを試す
  int n1 = 1;
  int n2 = 2;
  int n3 = 3;
  int n4 = 4;
  int temp;
  int nn2, nn3, nn4;
  int nnn2, nnn3, nnn4;
  bool flag;
  for(int i = 1; i <= 4; i++){
    sudoku[0][0] = n1;

    for(int j = 1; j <= 6; j++){
      sudoku[0][1] = n2;
      sudoku[0][2] = n3;
      sudoku[0][3] = n4;

      nn2 = n2;
      nn3 = n3;
      nn4 = n4;
      
        for(int k = 1; k <= 6; k++){
          if (k <= 2){
            sudoku[1][0] = nn2;
            sudoku[1][1] = n1;
            sudoku[1][2] = nn4;
            sudoku[1][3] = nn3;
          }
          else if (k <= 4){
            sudoku[1][0] = nn3;
            sudoku[1][1] = nn2;
            sudoku[1][2] = n1;
            sudoku[1][3] = nn4;
          }
          else{
            sudoku[1][0] = nn2;
            sudoku[1][1] = nn3;
            sudoku[1][2] = nn4;
            sudoku[1][3] = n1;
          }

          nnn1 = sudoku[1][0];
          nnn2 = sudoku[1][1];
          nnn3 = sudoku[1][2];
          nnn4 = sudoku[1][3];

          for(int l = 1; l <= 2; l++){
            if (nnn2 == n1){
              if (l = 1){
                sudoku[2][0] = nnn3;
                sudoku[2][2] == n1;

                if (n2 == nnn1){
                  sudoku[2][1] = nnn4;
                  sudoku[2][3] = nnn1;
                }
                else {
                  sudoku[2][1] = nnn1;
                  sudoku[2][3] = nnn4;
                }
              }
              else{
                sudoku[2][0] = nnn4;
                sudoku[2][2] == n1;

                if (n2 == nnn1){
                  sudoku[2][1] = nnn3;
                  sudoku[2][3] = nnn1;
                }
                else {
                  sudoku[2][1] = nnn1;
                  sudoku[2][3] = nnn3;
                }
              }

              if (nnn3 == n1){
              if (l = 1){
                sudoku[2][0] = nnn2;
                sudoku[2][3] == n1;

                if (n2 == nnn1){
                  sudoku[2][1] = nnn4;
                  sudoku[2][3] = nnn1;
                }
                else {
                  sudoku[2][1] = nnn1;
                  sudoku[2][3] = nnn4;
                }
              }
              else{
                sudoku[2][0] = nnn4;
                sudoku[2][3] == n1;

                if (n2 == nnn1){
                  sudoku[2][1] = nnn2;
                  sudoku[2][3] = nnn1;
                }
                else {
                  sudoku[2][1] = nnn1;
                  sudoku[2][3] = nnn2;
                }
              }

              if (nnn4 == n1){
              if (l = 1){
                sudoku[2][0] = nnn2;
                sudoku[2][3] == n1;

                if (n2 == nnn1){
                  sudoku[2][1] = nnn3;
                  sudoku[2][3] = nnn1;
                }
                else {
                  sudoku[2][1] = nnn1;
                  sudoku[2][3] = nnn3;
                }
              }
              else{
                sudoku[2][0] = nnn3;
                sudoku[2][3] == n1;

                if (n2 == nnn1){
                  sudoku[2][1] = nnn2;
                  sudoku[2][3] = nnn1;
                }
                else {
                  sudoku[2][1] = nnn1;
                  sudoku[2][3] = nnn2;
                }
              }

              sudoku[3][0] = 10 - sudoku[0][0] - sudoku[1][0] - sudoku[2][0];
              sudoku[3][1] = 10 - sudoku[0][1] - sudoku[1][1] - sudoku[2][1];
              sudoku[3][2] = 10 - sudoku[0][2] - sudoku[1][2] - sudoku[2][2];
              sudoku[3][3] = 10 - sudoku[0][3] - sudoku[1][3] - sudoku[2][3];

              flag = 
              if (flag) break;
            }
            if(flag) break;
          }
          if(flag) break;

          if (k == 1){
            temp = nn2;
            nn2 = nn4;
            nn4 = temp;
          }
          else if (k = 3){
          temp == nn2;
          nn2 == nn3;
          nn3 == temp;
          }
          else if (k = 5){
            temp == nn3;
            nn3 == nn2;
            nn2 == nn4;
            nn4 == temp;
          }
      }
      if (flag) break;

      if (j == 1 || j == 3 || j == 5){
        temp = n3;
        n3 = n4;
        n4 = temp;
      }
      else if (j = 2 || j = 4 || j == 6){
        temp == n2;
        n2 == n3;
        n3 == temp;
      }
    }

    if(i = 1){
      n1 = 2;
      n2 = 3;
      n3 = 4;
      n4 = 1;
    }
    else if(i = 2){
      n1 = 3;
      n2 = 4;
      n3 = 1;
      n4 = 2;
    }
    else if(i = 3){
      n1 = 4;
      n2 = 1;
      n3 = 2;
      n4 = 3;
    } 
  }

}
