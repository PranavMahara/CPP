// GOTO Statements

/*
We’ll mention the goto statement here for the sake of completeness—not because it’s a good
idea to use it. If you’ve had any exposure to structured programming principles, you know that
gotos can quickly lead to “spaghetti” code that is difficult to understand and debug. There is
almost never any need to use goto, as is demonstrated by its absence from the program examples in this book.
With that lecture out of the way, here’s the syntax. You insert a label in your code at the
desired destination for the goto. The label is always terminated by a colon. The keyword goto,
followed by this label name, then takes you to the label. The following code fragment demonstrates this approach.
goto SystemCrash;
// other statements
SystemCrash:
// control will begin here following got
*/


/*
There are four kinds of decision-making statements. The if statement does something if a test
expression is true. The if...else statement does one thing if the test expression is true, and
another thing if it isn’t. The else if construction is a way of rewriting a ladder of nested
if...else statements to make it more readable. The switch statement branches to multiple
sections of code, depending on the value of a single variable. The conditional operator simplifies returning one value if a test expression is true, and another if it’s false.
The logical AND and OR operators combine two Boolean expressions to yield another one, and
the logical NOT operator changes a Boolean value from true to false, or from false to true.
*/


/*
There are three kinds of loops in C++. The for loop is most often used when you know in
advance how many times you want to execute the loop. The while loop and do loops are used
when the condition causing the loop to terminate arises within the loop, with the while loop
not necessarily executing at all, and the do loop always executing at least once.
A loop body can be a single statement or a block of multiple statements delimited by braces. A
variable defined within a block is visible only within that block.
*/