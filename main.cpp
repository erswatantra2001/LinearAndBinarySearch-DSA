
#include <iostream>
#include<array>
using namespace std;

// Linear search algorithm


// int linearSearch(int *arr,int n,int key){
//   for(int i= 0;i < n;i++){
//     if(arr[i] == key){
//       cout << "element found at index " << i << endl;
//     }
//   }
//   return 0;
// }

// Binary search algorithm


// int binarySearch(int *arr,int n,int key){
//   int start = 0;
//   int end = n-1;

//   while(start < end)
//   {
//     int mid = (start+end)/2;

//     if(arr[mid] == key){
//       cout << "element found at index " << mid << endl;
//       break;
//     }
//     else if(arr[mid] < key){
//       start = mid+1;
//     }
//     else{
//       end = mid-1;
//     }
//   }
//   return 0;
// }

int main()
{
  int n;
  cin >> n;

  int arr[n];
  for(int i = 0;i < n;i++){
    cin >> arr[i];
  }

  int key;
  cin >> key;

  // linearSearch(arr,n,key);
  // binarySearch(arr,n,key);
  return 0;
} 