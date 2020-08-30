bool searchArray(int **array, int arrayRowSize, int arrayColSize, int target)
{
  int i = 0;
  int j = arrayColSize - 1;
  while (i < arrayRowSize && j >= 0)
  {
    if (array[i][j] == target)
      return true;
    else if (array[i][j] < target)
      i++;
    else
      j--;
  }
  return false;
}
