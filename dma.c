#include "dma.h"
#include <stdlib.h>

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
    char *newArr = (char*)malloc(newSizeInBytes); //create new smallest pointer 
  if(newArr == NULL){
    return NULL;
  }  
 if(newSizeInBytes < oldSizeInBytes) {
SmallestSize = newSizeInBytes;
 }else{
SmallestSize = oldSizeInBytes;
 }
    for (int i = 0; i < SmallestSize; i++)
        {
            newArr[i] = ((char*)srcblock)[i];
        }



    free(srcblock);
    return newArr;
}
/*
void main{
    int* number = (int*)malloc(3 * sizeof(int));
    int* newNember = NULL;
    numbers[3] = {3,4,5};
    newNumbers = (int*)myRealloc((int*)number,3* sizeof(int),4 * sizeof(int));
}



myRealloc(void *srcblock, unsigned oldSizeBytes, unsigned newSizeBytes)






*/