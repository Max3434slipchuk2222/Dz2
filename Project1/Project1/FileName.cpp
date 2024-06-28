#include <iostream>
#include <Windows.h>

#include <ctime>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#define Size 50
void copyRadok(char* arr, const char* str, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = str[i];
        if (str[i] == '\0') {
            break;
        }
    }
}
int Dovchyna(const char* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == '\0') {
            break;
        }
        count++;
    }
    return count;
}
int main() {
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char arr[Size]; 
    char str[Size]; 
    int b = 0;
    int c = Size; 
    int a = Size; 

    cout << "¬вед≥ть р€док" << endl;
    cin.getline(str, 50);
}