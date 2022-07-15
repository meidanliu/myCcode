#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <synchapi.h>
//String at both ends move
#include "string.h"
int main(){
    char arr1[] = "hello world!!!!!";
    char arr2[] = "################";
    int length = strlen(arr1);
    //printf("length = %d",length);
    int left = 0;
    int right = length - 1;
    while(left <= right){
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n",arr2);
        Sleep(1000);
        //system("cls");
        left++;
        right--;
    }

}

//¡ïbinary search!
//int main(){
//    int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int length = sizeof(arr)/sizeof(arr[0]);//calculate array's size;
//    //printf("length is :%d\n",length);//10
//    int left =0;
//    int right = length-1;
//    int mid;
//    int target = 0;
//    printf("input a number that you wanna search:>");
//    scanf("%d",&target);//there is a question?
//    //binary search!
//    while(left <= right){
//        mid = (left+right)/2;//remember to change the mid!
//        if(arr[mid] > target){
//            right = mid - 1;
//        }else if(arr[mid] < target){
//            left = mid +1;
//        }else{
//            printf("get it\nit's coordinate is :%d",mid);
//            break;
//        }
//    }
//    if(right < left){
//        printf("not found");
//    }
//    return 0;
//}


////calculate 1-10's factorial----1!+2!+...+10!
//int main() {
//    int i,j;
//    int n = 3;
//    int sum =0;
//    int ret = 1;
//    //this approach is recommended.
//    for(i=1;i<=n;i++){
//        ret *= i;
//        sum += ret;
//    }
//    //this way is not recommended.
////    for(j = 1; j<= n; j++){
////        ret = 1;
////        for(i=1;i<=j;i++){
////            ret *= i;
////        }
////        sum += ret;
////    }
//    printf("sum = %d\n",sum);//sum = 4037913
//    return 0;
//}
