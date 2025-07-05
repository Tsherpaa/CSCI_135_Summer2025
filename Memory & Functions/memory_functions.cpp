#include <iostream>
#include <cctype>
using namespace std;

void squareByPointer(int* n) {
    *n = (*n) * (*n);
}

void capitalizeFirst(char* word) {
    if (word && word[0] != '\0'){
        word[0] = toupper(word[0]);
    }
}

void fillWithSquares(int* arr, int size) {
    for (int i = 0; i < size; i++){
        arr[i] = i * i;
    }
}

int sumArray(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int* makeFilledArray(int size, int val) {
    int* arr = new int[size];
    for (int i = 0; i < size; i++){
        arr[i] = val;
    }
    return arr;
}

int* maxPointer(int* a, int* b) {
    if (!a) return b;
    if (!b) return a;
    return (*a > *b) ? a : b;
}

void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;
    while (start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }
}

void printCharArray(const char* arr) {
    while (*arr != '\0'){
        putchar(*arr);
        ++arr;
    }
    putchar('\n');
}

void zeroOddIndices(int* arr, int size) {
    for (int i = 1; i < size; i += 2){
        arr[i] = 0;
    }
}

int main() {
    // Test squareByPointer
    int num = 5;
    int originalNum = num;
    squareByPointer(&num);
    cout << "Square of " << originalNum << ": " << num << endl;

    // Test capitalizeFirst
    char text[] = "hello";
    capitalizeFirst(text);
    cout << "Capitalized: " << text << endl;
    
    // Test fillWithSquares
    int squares[5];
    fillWithSquares(squares, 5);
    cout << "Squares array: ";
    for (int i = 0; i < 5; i++) {
        cout << squares[i] << " ";
    }
    cout << endl;
    
    // Test sumArray
    int values[] = {0, 1, 4, 9, 16};
    cout << "Sum of squares: " << sumArray(values, 5) << endl;

    // Test swap
    int valA = 3, valB = 7;
    swap(valA, valB);
    cout << "Swapped: " << valA << " " << valB << endl;

    // Test makeFilledArray
    int* newArray = makeFilledArray(4, 9);
    cout << "Filled array: ";
    for (int j = 0; j < 4; j++) {
        cout << newArray[j] << " ";
    }
    cout << endl;
    delete[] newArray; 

    // Test maxPointer
    int x = 10, y = 20;
    int* maxPtr = maxPointer(&x, &y);
    cout << "Max value: " << *maxPtr << endl;

    // Test reverseArray
    int arr[] = {1, 2, 3, 4, 5};
    reverseArray(arr, 5);
    cout << "Reversed: ";
    for (int k = 0; k < 5; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    // Test printCharArray
    char chars[] = "Print this!";
    cout << "Char array: ";
    printCharArray(chars);

    // Test zeroOddIndices
    int numbers[] = {10, 11, 12, 13, 14, 15};
    zeroOddIndices(numbers, 6);
    cout << "Zero odd indices: ";
    for (int m = 0; m < 6; m++) {
        cout << numbers[m] << " ";
    }
    cout << endl;
    
    return 0;
}