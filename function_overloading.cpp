#include<iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    // Calls int add(int a, int b)
    int addition_int_values = add(5, 3);  

    // Calls double add(double a, double b)      
    double addition_double_values = add(2.5, 3.7); 

    cout << "Addition of int values: " << addition_int_values << endl;
    cout << "Addition of double values: " << addition_double_values << endl;

    return 0;
}
