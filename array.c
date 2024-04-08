



int sumArray(int* array,int size){ 
  int sum = 0;
  if(size < 0){return 0;}
  for(int i = 0;i<size;i++){
    sum = sum + array[i];
  }
return sum;
}
int multiplyArray(int* array,int size){
  int multiply = 0;
  if(size < 0){return 0;}
  for(int i = 0;i<size;i++){
    multiply = multiply * array[i];
  }
return sum;
}
bool findIfKeyInArray(int* array,int size,int key){
  if(size < 0){return 0;}
  for(int i = 0;i<size;i++){
    if(key == array[i]){
      return 1;
    }
  }
  return 0;
}
int findMaxValueInArray(int* array,int size){
  int temp_data = 0;
  if(size < 0){return 0;}
  for(int i = 0;i<size;i++){
      (array[i]) > (array[i+1]) ? (temp_data=temp_data+array[i]) : (temp_data=temp_data+array[i+1])  
    }
  }
  return temp_data;
}



