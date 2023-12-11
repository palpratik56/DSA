#include <stdio.h>
int main() {
	int n,k;
	printf("\n Give size: ");
	scanf("%d",&n);
  int arr[n];
  for(k=0;k<n;k++){
  	printf("\n Give element no. %d: ",k+1);
  	scanf("%d",&arr[k]);
  }

  int max = arr[0], max2 = arr[0];         // 2 3 0 5 8 7   max=8 max2=7
  for (int i = 1; i < n; i++) {
    if (arr[i] > max2) {
      if(arr[i] > max){
      max2 = max;
      max = arr[i];
      }
      else max2 = arr[i];
    }
  }
  printf("\n max is %d", max);
  printf("\n second max is %d", max2);

  return 0;
}

