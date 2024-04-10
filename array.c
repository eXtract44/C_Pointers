/********************************************************************************************************************************/
int sumArray(int* array,int size){ 
  int sum = 0;
  if(size < 0){return 0;}
  for(int i = 0;i<size;i++){
    sum = sum + array[i];
  }
return sum;
}
/********************************************************************************************************************************/
int multiplyArray(int* array,int size){
  int multiply = 0;
  if(size < 0){return 0;}
  for(int i = 0;i<size;i++){
    multiply = multiply * array[i];
  }
return sum;
}
/********************************************************************************************************************************/
bool findIfKeyInArray(int* array,int size,int key){
  if(size < 0){return 0;}
  for(int i = 0;i<size;i++){
    if(key == array[i]){
      return 1;
    }
  }
  return 0;
}
/********************************************************************************************************************************/
int findMaxValueInArray(int* array,int size){
  int temp_data = 0;
  if(size < 0){return 0;}
  for(int i = 0;i<size;i++){
      (array[i]) > (array[i+1]) ? (temp_data=temp_data+array[i]) : (temp_data=temp_data+array[i+1])  
    }
  }
  return temp_data;
}
/********************************************************************************************************************************/
void findMinMaxValueInArray(int* array,int size, int *min, int*max){
 *min = array[0];
 *max = array[0];
  for(int i = 1;i<size;i++){
      if(array[i] < *min){
          *min=array[i];
      }
      if(array[i] > *max){
          *max=array[i];
      }
    }
}
findMinMaxValueInArray(array,size,&min,&max);
/********************************************************************************************************************************/
void updateAverage(int a, int b,*avr){
  float avr =(a + b) / 2.0;
*avr=avr;
}
updateAvarage(a,b,&avr);
/********************************************************************************************************************************/
void findMinMaxValueInArray(int* array,int size, int *min, int*max){
 *min = array[0];
 *max = array[0];
  for(int i = 1;i<size;i++){
      if(array[i] < *min){
          *min=array[i];
      }
      if(array[i] > *max){
          *max=array[i];
      }
    }
}
findMinMaxValueInArray(array,size,&min,&max);
/********************************************************************************************************************************/
int findIfSumNeighborns(int* array,int size){
  for(int i = 1;i<size;i++){
      printf("iter:%d \n", i);
      printf("array[sum]:%d \n", array[i]);
      printf("array[add1]:%d \n", array[i-1]);
      printf("array[add2]:%d \n", array[i+1]);
      printf("*******************\n");
      
      if(array[i] == array[i-1] + array[i+1]){
          return 1;
      }
    }
    return 0;
}
#define SIZE 10
int main() {
    int arr[SIZE]= {1,3,7,8,5,11,7,8,17,10};
    // Write C code here
    printf("findIfSumNeighborns:%d", findIfSumNeighborns(arr,SIZE));

    return 0;
}
