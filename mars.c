#include<stdio.h>
int main(){
    int n = 130000;
    while(1)
    {
    int flag[4];
    for(int i = 0;i < 4;i++)
    {
        flag[i] = 0;
    }
    int k = 0;
    for(int j = n;j < n + 4;j++)
    { 
        int l = j;
        if(l % 2 == 0){
            l = l/2;
            flag[k] = flag[k] + 1;
        }
        for(int i = 3;i <= l;i = i+2){
            if(l%i == 0){
                flag[k] = flag[k] + 1;
                l = l/i;
            }
        }
        k++;
    }
    if(flag[0] == 4 && flag[1] == 4 && flag[2] == 4 && flag[3] == 4 ){
        printf("%d ",n);
        printf("Hello mars\n");
        break;
    }
   n++;
    }
    return 0;
}