struct records students[10];

 /* Pointer to the first element ( structure) of the array */
struct records *ptrStudents1 = &students;

 /* Pointer to an array of 10 struct records */
struct records (*ptrStudents2)[10] = &students;

// Note that ptrStudent1 is a pointer to student[0] whereas ptrStudent2 is a pointer to the whole array of  10 struct records. Adding 1 to ptrStudent1 would point to student[1].

// We can use ptrStudent1 with a loop to traverse through the elements and their members.


// for( int i = 0; i <  10; i++)
// printf("%s, %d\n", ( ptrStudents1 + i)->name, ( ptrStudents1 + i)->roll);