#include <stdio.h>
#include <limits.h>

int main() {
    int n, min_count = INT_MAX, result;

    printf("Enter the Number of elements: ");
    scanf("%d", &n);

    if(n<=0) printf("Number should be greater than zero 0.");

    int arr[n];
    int count[n];

    printf("Enter %d possible positive Integers: ", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        count[i] = 0;
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(arr[i] == arr[j]) count[i]++;
        }
    }

    for (int i = 0; i < n; i++) {
        if (count[i] < min_count || (count[i] == min_count && arr[i] < result)) {
            min_count = count[i];
            result = arr[i];
        }
    }

    printf("The integer that appears the least number of times is: %d\n", result);

   

    return 0;
}