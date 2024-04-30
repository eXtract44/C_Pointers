#include <stdio.h>
/*
int sumArray(int *array, int size)
{
  int sum = 0;
  if (size < 0)
  {
    return 0;
  }
  for (int i = 0; i < size; i++)
  {
    sum = sum + array[i];
  }
  return sum;
}
int multiplyArray(int *array, int size)
{
  int multiply = 0;
  if (size < 0)
  {
    return 0;
  }
  for (int i = 0; i < size; i++)
  {
    multiply = multiply * array[i];
  }
  return multiply;
}
int findIfKeyInArray(int *array, int size, int key)
{
  if (size < 0)
  {
    return 0;
  }
  for (int i = 0; i < size; i++)
  {
    if (key == array[i])
    {
      return 1;
    }
  }
  return 0;
}
int findMaxValueInArray(int *array, int size)
{
  int temp_data = 0;
  if (size < 0)
  {
    return 0;
  }
  for (int i = 0; i < size; i++)
  {
    (array[i]) > (array[i + 1]) ? (temp_data = temp_data + array[i]) : (temp_data = temp_data + array[i + 1]);
  }
  return temp_data;
}
void updateAverage(int a, int b, float *avr)
{
  float avr1 = (a + b) / 2.0;
  *avr = avr1;
}
void findMinMaxValueInArray(int *array, int size, int *min, int *max)
{
  *min = array[0];
  *max = array[0];
  for (int i = 1; i < size; i++)
  {
    if (array[i] < *min)
    {
      *min = array[i];
    }
    if (array[i] > *max)
    {
      *max = array[i];
    }
  }
}
int findIfSumNeighborns(int *array, int size)
{
  for (int i = 1; i < size - 1; i++)
  {
    printf("iter:%d \n", i);
    printf("array[sum]:%d \n", array[i]);
    printf("array[add1]:%d \n", array[i - 1]);
    printf("array[add2]:%d \n", array[i + 1]);
    printf("*******************\n");

    if (array[i] == array[i - 1] + array[i + 1])
    {
      return 1;
    }
  }
  return 0;
}
int checkReallySorted(int *array, int size)
{
  for (int i = 1; i < size - 1; i++)
  {
    if (array[i] >= array[i + 1])
    {
      return 0;
    }
  }
  return 1;
}
void swapChar(char *ptr1, char *ptr2)
{
  char temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}
void reverseArrayIterative(char *arr, int size)
{
  for (int i = 0; i < size / 2; i++)
  {
    swapChar(arr[i], arr[size - 1 - i]);
  }
}
void reverseArrayRecursive(char *arr, int size)
{
  if (size > 1)
  {
    swapChar(arr[size], arr[size - 1]);
    reverseArrayRecursive(arr + 1, size - 2);
  }
}
*/
void findSecondSmallValue(int *array, int size)
{
    int min1 = array[0];
    int min2 = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] < min1)
        {
            min2 = min1;
            min1 = array[i];
        }
        else if (array[i] < min2)
        {
            min2 = array[i];
        }

    }
      printf("SmallValue = %d \n", min1);
      printf("SmallSecondValue = %d\n", min2);
}
