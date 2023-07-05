// A const member function guarantees that it will never modify any of its class’s member data.
// The CONSTFU program shows how this works.
//constfu.cpp
//demonstrates const member functions



class aClass{
    private:
        // const int alpha;
        int alpha;
    public:
        void nonFunc(){ 
            alpha = 99; 
        } 
        void conFunc() const{
            alpha = 99; 
        }
};



// The non-const function nonFunc() can modify member data alpha, but the constant function
// conFunc() can’t. If it tries to, a compiler error results.
// A function is made into a constant function by placing the keyword const after the declarator
// but before the function body. If there is a separate function declaration, const must be used in
// both declaration and definition. Member functions that do nothing but acquire data from an object
// are obvious candidates for being made const, because they don’t need to modify any data.

// Making a function const helps the compiler flag errors, and tells anyone looking at the listing
// that you intended the function not to modify anything in its object. It also makes possible the
// creation and use of const objects