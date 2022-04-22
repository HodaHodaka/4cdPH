/*******************************************************/
//                                                     //
//       僕が作った！                                    //
//                                                     //
//                                                     //
/*******************************************************/

bool colupCheck (sudoku[3][3], colup[3]) {
  int i, j, count;

  for (j = 0; j <= 3; j++) {
    count = 1;
    for (i = 0; i <= 3; i++) {
      if (i + 1 == 4)
        break;
      if (sudoku[i][j] < sudoku[i + 1][j]) {
        count++;
      }
    }
    if (count != colup[j])
      return false;
  }
  return true;
}

bool coldownCheck (sudoku[3][3], coldown[3]) {
  int i, j, count;

  for (j = 0; j <= 3; j++) {
    count = 1;
    for (i = 3; i >= 0; i--) {
      if (i - 1 == -1)
        break;
      if (sudoku[i][j] < sudoku[i - 1][j]) {
        count++;
      }
    }
    if (count != coldown[j])
      return false;
  }
  return true;
}

bool rowleftCheck (sudoku[3][3], rowleft[3]) {
  int i, j, count;

  for (i = 0; i <= 3; i++) {
    count = 1;
    for (j = 0; j <= 3; j++) {
      if (j + 1 == 4)
        break;
      if (sudoku[i][j] < sudoku[i][j + 1]) {
        count++;
      }
    }
    if (count != rowleft[i])
      return false;
  }
  return true;
}

bool rowrightCheck (sudoku[3][3], rowright[3]) {
  int i, j, count;

  for (i = 0; i <= 3; i++) {
    count = 1;
    for (j = 3; j >= 0; j--) {
      if (j - 1 == -1)
        break;
      if (sudoku[i][j] < sudoku[i][j - 1]) {
        count++;
      }
    }
    if (count != rowright[i])
      return false;
  }
  return true;
}