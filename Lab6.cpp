#include <iostream>
#include <ctime>
using namespace std;


void enterArrayData(double *arr, int size) {
    cout << "Enter " << size << " double values: ";

    for(int i = 0; i < size; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> *(arr + i);  
    }
}

void outputArrayData(double *arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";   
    }
    cout << endl;
}

double sumArray(double *arr, int size) {
    double sum = 0;
    
    for(int i = 0; i < size; i++) {
        sum = sum + *(arr + i); 
    }
    
    return sum;
}

int main() {
    const int ARRAY_SIZE = 5;
    double* myArray = new double[ARRAY_SIZE];
    
 
     cout << "Data entry for the array:" << endl;
    enterArrayData(myArray, ARRAY_SIZE);
    cout << "Data entry complete." << endl;
    
    cout << "Outputting array elements: ";
    outputArrayData(myArray, ARRAY_SIZE);
    cout << endl;
    
    double total = sumArray(myArray, ARRAY_SIZE);
    cout << "Sum of values: " << total << endl;
    
    delete[] myArray;
    
    return 0;

}