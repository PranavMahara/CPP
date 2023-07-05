#include<iostream>
using namespace std;

struct records {
    char name[20];
    int roll;
    int marks[5];
    char gender;
};

int main(){
    struct records student = {"Alex", 43, {76, 98, 68, 87, 93}, 'M'};
    struct records *ptrStudent = &student;

    cout<<"Address of Structure --> "<<ptrStudent<<endl;
    cout<<"Address of member name --> "<<&student.name<<endl;
    cout<<"Increment by 1 --> "<<ptrStudent + 1<<endl;
    
    return 0;
}

// Here, we have declared a pointer ptrStudent of type struct records. We have assigned the address of student to ptrStudent.

// ptrStudent stores the base address of student, which is the base address of the first member of the structure. Incrementing by 1 would increase the address by sizeof(student) bytes.

// We can access the members of student using ptrStudent in two ways. Using our old friend * or using -> ( infix or arrow operator).

// With *, we will continue to use the .( dot operator) whereas with -> we won't need the dot operator.

// printf("Name w.o using ptrStudent : %s\n", student.name);
// printf("Name using ptrStudent and * : %s\n", ( *ptrStudent).name);
// printf("Name using ptrStudent and -> : %s\n", ptrStudent->name);

// /* Output */
// Name without using ptrStudent: Alex
// Name using ptrStudent and *: Alex
// Name using ptrStudent and ->: Alex
// Similarly, we can access and modify other members as well. Note that the brackets are necessary while using * since the dot operator(.) has higher precedence over *.