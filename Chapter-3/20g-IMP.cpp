// Difference between Hybrid and Hierarchical Inheritance

// In Hybrid inheritance, two class are derived from a single base class and another class is derived from those two derived classes .
// let A be base class, B and C be derived class then class D is derived as follows
// A->B and A->C
// B->D and C->D
/*
    --------A--------
    |               |
    V               V
    C               B
    |               |
    |               |
    ------->D<-------            
*/
// In Hierarchical inheritance, more than one classes are derived from single base class. Further you can derive another classes from those derived classes.Here,you can derive any number of classes.
// A->B, A->C,A->D

//         -------- A ---------
//         |        |         |
//         |        |         |
//         V        V         V
//         B        C         D
           
