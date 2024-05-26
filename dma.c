#include "dma.h"
#include <stdlib.h>
/*
double *createDymanicArray()
{
    double *dynAr = (double *)malloc(sizeof(double));
    if (dynAr != NULL)
        printf("allocated");
    else
        printf("not allocated");
    return dynAr;
}
int *reallocate(int *oldArr, int oldSize, int newSize)
{
    int *newArr;
    if (oldSize > newSize)
    {
        newArr = (int *)malloc(newSize * sizeof(int));
        for (int i = 0; i < newSize; i++)
        {
            newArr[i] = oldArr[i];
        }
    }
    else
    {
        newArr = (int *)malloc(newSize * sizeof(int));
        for (int i = 0; i < oldSize; i++)
        {
            newArr[i] = oldArr[i];
        }
    }
    free(oldArr);
    return newArr;
}
void *myRealloc(void *srcblock, unsigned oldSizeInBytes, unsigned newSizeInBytes)
{
    unsigned SmallestSize;
    char *newArr = (char *)malloc(newSizeInBytes); //create new smallest pointer
    if (newArr == NULL)
    {
        return NULL;
    }
    if (newSizeInBytes < oldSizeInBytes)
    {
        SmallestSize = newSizeInBytes;
    }
    else
    {
        SmallestSize = oldSizeInBytes;
    }
    for (int i = 0; i < SmallestSize; i++)
    {
        newArr[i] = ((char *)srcblock)[i];
    }
    free(srcblock);
    return newArr;
}
void *myReallocMem(void *srcblock, unsigned oldSizeInBytes, unsigned newSizeInBytes)
{
    unsigned smallestSize;
    char *newArr = (char *)malloc(newSizeInBytes); //create new smallest pointer
    if (newArr == NULL)
    {
        return NULL;
    }
    if (newSizeInBytes < oldSizeInBytes)
    {
        smallestSize = newSizeInBytes;
    }
    else
    {
        smallestSize = oldSizeInBytes;
    }
    memcpy(newArr, srcblock, smallestSize);
    free(srcblock);
    return newArr;
}

void main{
    int* number = (int*)malloc(3 * sizeof(int));
    int* newNember = NULL;
    numbers[3] = {3,4,5};
    newNumbers = (int*)myRealloc((int*)number,3* sizeof(int),4 * sizeof(int));
}
myRealloc(void *srcblock, unsigned oldSizeBytes, unsigned newSizeBytes)

void *createDymanicArrayFill(int* readSize)
{
    int* arr  =  (int *)malloc(sizeof(int));
    int input, i  = 0;
    while (input != -1)
    {
        i++;
        scanf("%d", &input);
        arr[i] = input;
        arr = reallocate(arr, i-1, i);
    }
    *readSize = input;
    return arr;
}
void print_array_left(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}
*/