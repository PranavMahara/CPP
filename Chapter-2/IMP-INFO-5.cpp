// i) Using inbuilt size method: The method size returns the length of the string.

#include <iostream>
#include<string>
using namespace std;
int main() {
    string str = "Coding Ninjas";
    cout << str.size() << endl;
    return 0;
}

// Output:
// 13

// ii) Using inbuilt reverse function: The method reverses the string. It is present in the algorithm.h header file.

#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    string str = "Coding Ninjas";
    reverse(str.begin(), str.end());
    cout << str << endl;
    return 0;
}
// Output:
// sajniN gnidoC

// iii) Using inbuilt sort function: The method sorts the string. It is present in the algorithm.h header file.

#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    string str = "Coding Ninjas";
    string s = "9877023350";
    sort(str.begin(), str.end());
    sort(s.begin(), s.end());
    cout << str << endl;
    cout << s << endl;
    return 0;
}
// Output: INPUT Is "Coding Ninjas"
//  CNadgiijnnos