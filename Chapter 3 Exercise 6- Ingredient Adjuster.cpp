// Chapter 3 Exercise 6- Ingredient Adjuster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* 
File Name: Chapter 3 Exercise 6 Ingredient Adjusteder 
GitHub URL:
Programmer: Olivia Ruiz
Date: 2/11/2025
Requirements: The recipe produces 48 cookies with this amount of Ingredients. Write a program that ask
the user how many cookies he or she wants to make, and then displays the number of cups of each ingredient needed for the specified number of cookies.                                              
*/

#include <iostream>
using namespace std;

int main() {
    
    double sugar_per_48 = 1.5;  
    double butter_per_48 = 1.0;
    double flour_per_48 = 2.75;
    int cookies_per_recipe = 48; 

    int cookies_wanted;
    cout << "How many cookies would you like to make? ";
    cin >> cookies_wanted;

 
    double scaling_factor = static_cast<double>(cookies_wanted) / cookies_per_recipe;

   
    double sugar_needed = sugar_per_48 * scaling_factor;
    double butter_needed = butter_per_48 * scaling_factor;
    double flour_needed = flour_per_48 * scaling_factor;

   
    cout << "For " << cookies_wanted << " cookies, you need:\n";
    cout << sugar_needed << " cups of sugar\n";
    cout << butter_needed << " cups of butter\n";
    cout << flour_needed << " cups of flour\n";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
