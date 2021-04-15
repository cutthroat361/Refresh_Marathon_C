#include <stdio.h>

int mx_sqrt(int x){
    if (x == 0 || x == 1){
        return x;}

   int i = 1, result = 1;
    while (result <= x)
    {
      i++;
      result = i * i;
    }
    i= i - 1;

    if (i*i==x){
        return i;
    }else{
        return 0;
    }
}
/*
int main(){
    printf("%d", mx_sqrt(4));
}*/
