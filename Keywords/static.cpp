/**
 * The static keyword has different meanings when used with different types. We can use static keywords with:
 * Static Variables: Variables in a function, Variables in a class
 * Static Members of Class: Class objects and Functions in a class Let us now look at each one of these uses of static in detail.
 * 
 * Static Variables - When a variable is declared as static, space for it gets allocated for the lifetime of the program. And its value don't reinitaited after every call.
 * 
 * Static variables in a class - As the variables declared as static are initialized only once as they are allocated space in separate static storage so, the static variables in a class are shared by the objects. There can not be multiple copies of the same static variables for different objects. Also because of this reason static variables can not be initialized using constructors. 
 * 
 * 
 * Class objects as static - Just like variables, objects also when declared as static have a scope till the lifetime of the program. Consider the below program where the object is non-static. 
 */

#include <iostream>
#include <string>
using namespace std;
 
void demo()
{
    // static variable
    static int count = 0; // tatement allocates memory for the count variable only once when the program starts, not each time the demo() function is called. 
    //This memory is allocated in the static memory area, not on the stack where local variables are typically allocated.
    // static variables persist between function calls
    
    cout << &count << " ";

    int nonStaticCounter = 0; // memory will be allocated every time at stack. And variable get re-inititaed every time to '0'.
 
    // value is updated and
    // will be carried to next
    // function calls
    count++;
}

// static variable in class

class GfG {
public:
    static int i;
 
    GfG(){
        // Do nothing
    };
};

int GfG::i = 1; // to solve the error

// class object as a static

class GfGe {
    int i;
 
public:
    GfGe()
    {
        i = 0;
        cout << "Inside Constructor\n";
    }
    ~GfGe() { cout << "Inside Destructor\n"; }
};

class staticfunction {

    public: 

    static int num;

    static void print() {
        cout << num << endl;
    }
};

int staticfunction::num = 9;
 
int main()
{
    for (int i = 0; i < 5; i++)
        demo();


    GfG obj1;
    GfG obj2;
    obj1.i = 2;
    obj2.i = 3;
 
    // prints value of i
    cout << obj1.i << " " << obj2.i;

    /**
     * Output

 * undefined reference to `GfG::i'
 * collect2: error: ld returned 1 exit status
 * 
 * You can see in the above program that we have tried to create multiple copies of the static variable i for multiple objects. But this didn’t happen. So, a static variable inside a class should be initialized explicitly by the user using the class name and scope resolution operator outside the class as shown below: 
 *      
 * int GfG::i = 1;
 * */

    GfG obj;
    // prints value of i
    cout << obj.i;
    return 0;

    // object as a static
    int x = 0;
    if (x == 0) {
        GfG obj;
    }
    cout << "End of main\n";

    /**
     * Output:
            Inside Constructor
            Inside Destructor
            End of main
     * In the above program, the object is declared inside the if block as non-static. So, the scope of a variable is inside the if block only. So when the object is created the constructor is invoked and soon as the control of if block gets over the destructor is invoked as the scope of the object is inside the if block only where it is declared.
     */

       int x = 0;
    if (x == 0) {
        static GfG obj;
    }
    cout << "End of main\n";

    /**
     * Output
     * Inside Constructor
     * End of main
     * Inside Destructor
     * 
     * You can clearly see the change in output. Now the destructor is invoked after the end of the main. This happened because the scope of static objects is throughout the lifetime of the program.
     */


    /**
     * Static functions in a class: Just like the static data members or static variables inside the class, static member functions also do not depend on the object of the class. 
     * 
     * We are allowed to invoke a static member function using the object and the ‘.’ operator but it is recommended to invoke the static members using the class name and the scope resolution operator. 
     * 
     * Static member functions are allowed to access only the static data members or other static member functions, they can not access the non-static data members or member functions of the class. 
     */

    staticfunction:: print();
}
