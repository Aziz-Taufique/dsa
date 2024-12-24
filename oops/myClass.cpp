#include<iostream>
#include<vector>
using namespace std;

class Chai {
    public:
        // data members (attributes)
        string teaName;  // name of tea
        int servings;          // number of servings
        vector<string> ingredients;  // list of ingredients for tea

        // Member function:- class ke andar define kiya gaya function

        void displayCahiDetails(){
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
    Chai chaiOne;
    chaiOne.teaName = "lal chai";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"water", "lemon", "tea", "sugar"};
    chaiOne.displayCahiDetails();

    Chai chaiTwo;
    chaiTwo.teaName = "lemon tea";
    chaiTwo.servings = 4;
    chaiTwo.ingredients = {"milk", "lemon", "sugar", "tea"};
    chaiTwo.displayCahiDetails();
    return 0;
}


// class :- SBI form -> class
// multiple copy of SBI from -> object
// access modifier :- public, private, protected
// the default access is private in the class
