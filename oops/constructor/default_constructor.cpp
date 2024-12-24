#include<bits/stdc++.h>
using namespace std;

class Chai {
    public:
    string teaName;
    int servings;
    vector<string> ingredients;

    // default constructor
    Chai(){
        teaName = "Unknown tea";
        servings = 1;
        ingredients = {"water", "tea leaves", "milk"};
        cout<<"Constructor called"<<endl;
    }

    void displayChaiDetails(){
        cout<<"Tea name: "<<teaName<<endl;
        cout<<"Servings: "<<servings<<endl;
        cout<<"Ingredients: ";
        for(string ingredient: ingredients){
            cout<<ingredient<<" ";
        }
        cout<<endl; 
    }
};
int main(){
    Chai defaultChai;  // at this point constructor call and print value of constructor
    defaultChai.displayChaiDetails();
    return 0;
}







// conntructor call when we create object of class
// if we dont define constructor then compiler of cpp automatically create a constructor


/*

What is a Constructor?
A constructor is a special member function in C++ that is called when an object of a class is created. It is used to initialize the object’s data members.

Characteristics of Constructors
Name: A constructor has the same name as the class.
No Return Type: Constructors do not have a return type, not even void.
Called Automatically: Constructors are called automatically when an object is created.
Initialization: Constructors are used to initialize the object’s data members.

Types of Constructors
Default Constructor: A constructor with no parameters (default values).
Parameterized Constructor: A constructor with one or more parameters.
Copy Constructor: A constructor that creates a copy of an existing object.
Move Constructor: A constructor that moves the resources of an existing object to a new object (C++11).
Member Initializer List
Constructors can use a member initializer list to initialize member variables. The list is specified after the constructor parameter list and before the constructor body.

Example

class Wall {
  private:
    double length;
    double height;

  public:
    Wall(double len, double hgt) : length(len), height(hgt) {} // Parameterized Constructor
    Wall(const Wall& obj) : length(obj.length), height(obj.height) {} // Copy Constructor
};

Notes
If no constructor is defined, the compiler will automatically generate a default constructor with no parameters and an empty body.
If a constructor is defined but not explicitly marked as default, the compiler will not generate a default constructor.
Constructors can be overloaded, just like regular functions.
Constructors are used to ensure that objects are properly initialized when created.

*/