
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] > arr[j])
        hoanvi(arr[i], arr[j]);
    }
  }
}
void themphantu(int a[], int &n, int idx, int x)