#include <iostream>
#include <cstdlib>

using namespace std;
// int* countDigits(const int& number) {
//     int* digits = new int[10]();
//     int num = number;
//     while (num > 0) {
//         int digit = num % 10;
//         digits[digit]++;
//         num /= 10;
//     }
//
//     return digits; }
void sortArray(int* arr, int size){
for (int i = 0; i < size; i++){
for (int j = 0; j < size-1-i; j++){
if (*(arr + j) == *(arr + j+1)){
int temp = *(arr + j);
*(arr + j) = *(arr + j+1);
*(arr + j+1) = temp;
}
}
}
}



// #define val 33.3;
// #define number 50;
// int a;
// int& fun(){
//     return a;
// }
// int foo(){
//     return a;
// }
// int* FindMax(int* arr,int size) {
//     int* maxPtr = arr;
//     for (int i = 1; i < size; i++) {
//         if (*(arr + i) > arr[*maxPtr]) {
//             *maxPtr = i;
//         }
//     }
//     return maxPtr;
//
// }
// int maxVal(int arr[], int size) {
//     int max = *arr;
//     int* ptr=arr;
//     for (int i=0;i<size;i++) {
//         if (*ptr >max) {
//             max = *ptr;
//         }
//         ptr++;
//     }
//     return max;
// }
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void middleelement(int* arr,int size) {
//     int* start=arr;
//     int* end=arr+size-1;
//     while(start<end) {
//         start++;
//         end--;
//     }
//     std::cout<<"middle element: "<<*start<<" "<<*end;
// }
// void  squareptr(int* ptr) {
//     *ptr=(*ptr)*(*ptr);
//
//
// }

int main() {
    //problem 1
    // int a=123;
    // int* ptr = &a;
    // cout<<a<<endl;
    // cout << ptr << endl;
    // cout << *ptr << endl;
    //problem 2
    // int var=123;
    // int* ptr = &var;
    // cout<<"Variable before modification: "<<var<<endl;
    // *ptr=1234;
    // cout<<"Variable after modification: "<<var<<endl;
    //problem 3
    // int a=123;
    // int b=456;
    // swap(&a, &b);
    // cout<<"a="<<a<<" "<<"b="<<b<<endl;
    // return 0;
    //problem 4
    // int arr[5]={1,2,3,4,5};
    // int* arrr= arr;
    // for (int i = 0; i < 5; i++) {
    //     cout << *arrr << ' ';
    //     arrr++;
    // }
    // return 0;
    //problem 5
    // int size;
    // cout << "Enter size of array: ";
    // cin >> size;
    // int arr[size];
    // int *parr = arr;
    // for (int i = 0; i < size; i++) {
    //     cin >> arr[i];
    // }
    // middleelement(arr,size);
    // return 0;
    //problem 6
    // int num=5;
    // cout<<"The real number is: "<<num<<endl;
    // squareptr(&num);
    // cout<<"The square of this number is: "<<num<<endl;
    // return 0;
    //problem 7
    // int arr[]={1,2,3,4,5,6,7,8,9};
    // int *parr=&arr[0];
    // cout<<sizeof(arr)<<" bytes"<<endl;
    // cout<<sizeof(parr)<<" bytes";
    // return 0;
    //problem 8
    // int var=5;
    // void* varr=&var;
    // int* v=&var;
    // cout<<*((int*)varr);
    // return 0;
    //problem 9
    // int size;
    // cin>>size;
    // int arr[size];
    // for (int i=0;i<size;i++) {
    //     cin>>arr[i];
    // }
    // cout<<maxVal(arr, size);
    // return 0;
    //problem 10
    // int a,b;
    // cout<<"Enter number for a variable: ";
    // cin>>a;
    // cout<<"Enter number for b variable: ";
    // cin>>b;
    // int* ptrA=&a;
    // int* ptrB=&b;
    // cout<<"The value of a is: "<<*ptrA<<endl;
    // cout<<"The value of b is: "<<*ptrB<<endl;
    // return 0;
    //problem 11
    // int size;
    // cin >> size;
    // int* data = new int[size];
    // for (int i = 0; i < size; i++) {
    //     cout<<" Enter #"<<i+1<<" element: ";
    //     cin>>data[i];
    // }
    // int* maxPtr = FindMax(data,size);
    // cout<<*maxPtr;
    // cout << "Maximum value: " << *maxPtr << endl;
    // cout << "Pointer to max value: " << maxPtr << endl;
    //problem 12
    // int n1=9,n2=11, *ptr_1= nullptr, *ptr_2= nullptr, k=0;
    // double t;
    // *ptr_1=&n1;
    // ptr_1=&n2;
    // *ptr_2=&n2;
    // ptr_2=&n1;
    // t=val;
    // k=val;
    // foo()=number;
    // fun()=number;
    // cout<<...<<" "<<...<<" "<<...<<" "<<...<<endl;
    //problem 13
//     int arr[10];
//     int* parr;
// for (int i = 0; i < 10; i++) {
// arr[i] = rand() % 100;}
// parr = arr;
// for (int i = 0; i < 10; i++) {
// cout<<" Adress of element"<<i+1<<":"<<(parr+i)<<" \tvalue: "<<*(parr+i)<<endl;
// }
// return 0;
//problem 14
// int secret_num=42;
// int* psecret_num=&secret_num;
// cout<<*psecret_num<<endl;
//problem 15
// int arr[5]={10,20,30,40,50};
// int* parr=arr;
// int size=sizeof(arr)/sizeof(arr[0]);
// cout<<*(parr+(size-1))<<endl;
// return 0;
//problem 16
// int scr=75;
// int* pscr=&scr;
// cout<<"Original score is: "<<*pscr;
// cout<<endl<<"New score is: "<<*pscr+10;
// return 0;
//problem 17
// int size;
// cout<<"Enter the size of the array: ";
// cin>>size;
// int arr[size];
// cout<<"Enter the elements of the array: ";
// for (int i = 0; i < size; i++) {
// cin>>arr[i];}
// int* parr;
// parr=arr;
// int* parr2;
// parr2= &parr[size-1];
//     while (parr < parr2) {
//         int temp = *parr;
//         *parr = *parr2;
//         *parr2 = temp;
//
//         parr++;
//         parr2--;
//     }
// cout<<"The reversed array is: ";
// for (int i = 0; i < size; i++) {
// cout<<arr[i]<<" ";}
// cout<<endl;
// return 0;
//problem 18
// int arr[5]={78, 95, 85, 62, 88};
// int* parr=arr;
// int* parr1=parr;
// int* parr2=parr;
// int* parr3=parr;
// for (int i = 0; i < 5; i++) {
//     if (*(parr + i) > *parr1) {
//        parr3 = parr2;
//        parr2 = parr1;
//        parr1 = parr + i;}
//     else if (*(parr + i) > *parr2 && *(parr + i) != *parr1) {
//         parr3 = parr2;
//         parr2 = parr + i;
//     }
//     else if (*(parr + i) > *parr3 && *(parr + i) != *parr1 && *(parr + i) != *parr2) {
//         parr3 = parr + i;
//     }
// }
//     cout << "The 1st highest score: " << *parr1 << endl;
//     cout << "The 2nd highest score: " << *parr2 << endl;
//     cout << "The 3rd highest score: " << *parr3 << endl;
//     return 0;
//problem 19
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
//
//     int* result = countDigits(number);
//     cout << "Digit counts: " << endl;
//     for (int i = 0; i < 10; i++) {
//         cout << "Digit " << i << ": " << result[i] << endl;
//     }
// delete[] result;
//     return 0;
// }
//problem 20
    int arr[] = {78, 95, 85, 62, 88};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before sorting: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    cout << "Array after sorting: ";
    sortArray(arr, size);
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;

    return 0;















}