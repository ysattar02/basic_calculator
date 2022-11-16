//include statements
#include <iostream>
#include <vector>
#include <cmath> //for sqrt function
using namespace std;

//
// Created by Yusuf Sattar on 11/3/22.
//

//global values
int num_operations = 5;

//function declarations
void welcome_message();
void menu();
double add();
double sub();
double mult();
double div();
double exponential();

//implement functions
void welcome_message(){
    cout << "Welcome to my calculator app!" << endl;
    cout << "This program currently supports addition, subtraction, multliplication, division, and exponential calculations." << endl;
}
void menu(){
    cout << "What operation would you like to perform?" << endl;
    cout << "1 - Add" << endl << "2 - Subtract" << endl << "3 - Multiplacation" << endl << "4 - Division" << endl << "5 - Exponential Operations" << endl;
    int input = -1;
    cin >> input;
    while (cin.fail()){
        cout << "Error" << endl;
        cin.clear();
        cin.ignore(256,'\n');
        cout << "Retry Input: " << endl;
        cin >> input;
    }
    while (input < 1 || input > num_operations){
        cout << "Error" << endl;
        cout << "Input must be between 1-5, try again: " << endl;
        cin >> input;
    }
    if (input == 1){
        //addition
        double sum = add();
        cout << "The sum is: " << sum;
    }
    else if (input == 2){
        //subtraction
        double difference = sub();
        cout << "The difference is: " << difference;
    }
    else if (input == 3){
        //multiplication
        double product = mult();
        cout << "The product is: " << product;
    }
    else if (input == 4){
        //division
        double quotient = div();
        cout << "The quotient is: " << quotient;
    }
    else{
        //exponential
        double result = exponential();
        cout << "The exponential value is: " << result;
    }
}
double add(){
    //done
    vector<double> nums;
    double input = 0;
    while (!cin.fail()){
        cout << "Enter a number to add, when done enter a non-digit character." << endl;
        cin >> input;
        if (cin.fail()){
            cin.ignore();
        }
        else{
            nums.push_back(input);
        }
    }
    double sum = 0;
    for (int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }
    return sum;
}
double sub(){
    //to do
    vector<double> nums;
    double input = 0;
    while (!cin.fail()){
        cout << "Enter a number to subtract, when done enter a non-digit character." << endl;
        cin >> input;
        if (cin.fail()){
            cin.ignore();
        }
        else{
            nums.push_back(input);
        }
    }
    int temp = 0;
    for (int i = 0; i < nums.size(); i++){
        temp -= nums[i];
    }
    return temp;
}
double mult(){
    //done
    vector<double> nums;
    double input = 0.0;
    while (!cin.fail()){
        cout << "Enter a number to multiply, when done enter a non-digit character." << endl;
        cin >> input;
        if (cin.fail()){
            cin.ignore();
        }
        else{
            nums.push_back(input);
        }
    }
    double temp = 1;
    for (int i = 0; i < nums.size(); i++){
        temp *= nums[i];
    }
    return temp;
}
double div(){
    //done
    double divisor = 0;
    double dividend = 0;
    cout << "Enter the divisor: " << endl;
    cin >> divisor;
    while (cin.fail()){
        cin.ignore();
        cin.clear();
        cout << "Error, try again: " << endl;
        cin >> divisor;
    }
    cout << "Enter the dividend: " << endl;
    cin >> dividend;
    while (cin.fail()){
        cin.ignore();
        cin.clear();
        cout << "Error, try again: " << endl;
        cin >> dividend;
    }
    double quotient = divisor / dividend;
    return quotient;
}
double exponential(){
    //done
    double num = 0;
    double power = 0;
    cout << "Enter the number you need the operation applied to: " << endl;
    cin >> num;
    while (cin.fail() || num < 0){
        cin.ignore();
        cin.clear();
        cout << "Error, try again: " << endl;
        cin >> num;
    }
    cout << "Enter the power you need the number raised to: " << endl;
    cin >> power;
    while (cin.fail() || num <= 0){
        cin.ignore();
        cin.clear();
        cout << "Error, try again: " << endl;
        cin >> power;
    }
    return pow(num, power);
}

//implement main
int main(){
    welcome_message();
    menu();
    return 0;
}
