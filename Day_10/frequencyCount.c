#include <stdio.h>

#include <stdio.h>

// void frequency(int n, int arr[]) {
//     for(int i = 0; i < n; i++) {

//         int visited = 0;
//         for(int k = 0; k < i; k++) {
//             if(arr[i] == arr[k]) {
//                 visited = 1;
//                 break;
//             }
//         }

//         if(visited)
//             continue;

//         int count = 1;
//         for(int j = i + 1; j < n; j++) {
//             if(arr[i] == arr[j]) {
//                 count++;
//             }
//         }

//         printf("%d -> %d\n", arr[i], count);
//     }
// }

void frequency(int arr[],int n){
    //max
    int max = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] > max)
        max = arr[i];
    }
    max = max+1;
    int freq[max];
    for(int i = 0; i < max; i++) {
        freq[i] = 0;
    }
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    for(int i=1; i<max; i++){
        if(freq[i]==0){
            continue;
        }
        printf("%d->%d\n",i,freq[i]);
    }
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    frequency(arr,n);
    return 0;
}