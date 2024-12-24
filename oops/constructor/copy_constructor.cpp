#include<bits/stdc++.h>
using namespace std;

class Chai {
    public:
    string* teaName;
    int servings;
    vector<string> ingredients;

    // parameterized constructor
    Chai(string name, int serv, vector<string> ing){
        teaName = new string(name);
        servings = serv;
        ingredients = ing;
        cout<<"parameterized Constructor called"<<endl;
    }

    Chai(const Chai& other){
        teaName = new string(*other.teaName);
        servings = other.servings;
        ingredients = other.ingredients;
                cout<<"copy Constructor called"<<endl;        
    }

    // destructor
    ~Chai(){
        delete teaName;
        cout<<"Destructor called"<<endl;
    }

    void displayChaiDetails(){
        cout<<"Tea name: "<<*teaName<<endl;
        cout<<"Servings: "<<servings<<endl;
        cout<<"Ingredients: ";
        for(string ingredient: ingredients){
            cout<<ingredient<<" ";
        }
        cout<<endl; 
    }
};
int main(){
    Chai defaultChai("lemon tea", 2, {"Water", "tea leave", "milk"});  // at this point constructor call and print value of constructor
    // defaultChai.displayChaiDetails();

    // copy constructor
    // copy the object defaultChai
    Chai copiedChai = defaultChai;
    // copiedChai.displayChaiDetails();

    *defaultChai.teaName = "modified tea";

    cout<<"defaut tea--------"<<endl;
    defaultChai.displayChaiDetails();
    cout<<"Copied tea--------"<<endl;
    copiedChai.displayChaiDetails();

    return 0;
}

/*

C++ Destructor
A destructor is a special member function in a C++ class that is called automatically when an object of that class goes out of scope or is explicitly destroyed using delete. The purpose of a destructor is to release any resources, such as memory, file handles, or other system resources, that the object has allocated.

Syntax
The syntax for defining a destructor is similar to that of a constructor, but with a tilde (~) prefix:

~ClassName() {
    // code to release resources
}

When Destructors are Called
Destructors are called in the following situations:

Object goes out of scope: When a local object’s scope ends, its destructor is called.
Object is deleted: When an object is explicitly destroyed using delete, its destructor is called.
Program termination: When the program terminates, all objects with automatic storage duration (i.e., local variables) have their destructors called.
Stack unwinding: When an exception is thrown and the stack is unwound, destructors are called for objects with automatic storage duration.
Best Practices
Declare destructors as virtual: If a base class has a virtual destructor, derived classes must also declare virtual destructors to ensure proper destruction.
Use delete carefully: Only use delete to destroy objects that were created with new. Using delete on a stack-allocated object or a pointer to a different type is undefined behavior.
Release resources: In the destructor, release any resources allocated by the object, such as memory, file handles, or locks.
Avoid throwing exceptions: Destructors should not throw exceptions, as this can lead to undefined behavior.
Examples
Simple destructor: A basic destructor that releases a dynamically allocated array:
class MyClass {
public:
    ~MyClass() {
        delete[] ptr;
    }
private:
    int* ptr;
};

Virtual destructor: A virtual destructor in a base class, ensuring proper destruction in derived classes:
class Base {
public:
    virtual ~Base() {}
};

class Derived : public Base {
public:
    ~Derived() {
        // specific cleanup for Derived
    }
};

Common Issues
Forgetting to declare a destructor: If a class manages resources, it’s essential to declare a destructor to release those resources.
Not releasing resources: Failing to release resources in the destructor can lead to memory leaks or other issues.
Throwing exceptions from destructors: Avoid throwing exceptions from destructors to prevent undefined behavior.

*/