#include <cstdio>
#include <stack>
#include <vector>

using std::vector;
using std::stack;
using std::printf;

/*
stack calculator built using monolithic object. (stating the problem)

this means that the object will obfuscate the structure (stack) of evaulation.

this object represents something like a simple claculator taking numbers and evaulating.

-problem: representing numbers and operations, solved.
we need an encoding for the numbers and operations of our calculator, lets use a struct.
    our structure houses numbers for eval and characters for operations
    the operations will be represented by the following:
        - '+' addition
        - '*' subtraction
        - '^' multiplication
        - '5' division
        - 'e' end of evaulation (fail safe for evaulation number detection)

        with this system we have a contrast between an operation and evaulable number

         .Need a way to identify numeric and operation values

        .Needs to be readable by a human
            does this by assigning type in to evaulable numbers and char to operations
        A stack can only hold one type
        Needs a complex type containing both number (int) and operation (char) (Dicho)

    - problem: what are the basic operations of this calculator {solved}
       Binary operators on which two numbers will be given (a,b)
        - '+' addition: a + b
        - '*' subtraction: a - b
        - '^' multiplication: a * b
        - '5' division: fractionalized a b: a/b
        - 'e' end of evaulation: symbolizes number for evaluation, termination operation


    - problem: what structure defines the equations intergrity preserving order.
        stack <dicho> st.
        -stack of type dicho b/c dicho assist in evaulation operation encoding


   
    - problem: we need to be able to load this stack (st) in proper order. [unsolved]

    .Get data from user
        how: construtor, get at birth
                construtor: lmits object to single use
             function, get the data any point during run time
                function: plus* you can add more data at any point during run time
        where: 


    -problem: we need a wa to evaulate a full stack. [Unsolved]
    


*/

class Calc {
private:
    struct clowns {
    int num;
    char op;
    clowns(int a, char b) {
        num = a;
        op = b;
    };
};
    stack<clowns> clown_bakery; // all of these functions have to intergers, because they each need 2 numbers
    int addition(int, int);
    int subtraction(int, int);
    int multiplication(int, int);
    int division(int, int);
public:
 struct ice_cream {
        int flavor;
        char cone; 
        ice_cream(int a, char b) {
            flavor = a;
            cone = b;
            }
};
vector<clowns> map_ice_clown(vector<ice_cream>);
    Calc(); //initializes values

    void village(vector<char>); // calc only works for single digit numbers 
}; 
