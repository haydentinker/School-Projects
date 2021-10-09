#include <iostream>
using namespace std;

int main() {

cout<<"| Instruction | Quantity in A (Max 4)| Quantity in B (Max 9)|"<<endl;
cout<<"|-------------|:---------------------|:--------------------:|"<<endl;
cout<<"| Start | 0 | 0 |">>endl;
cout<<"| Fill A | 4| 0 |"<<endl;
cout<<"| A -> B | 0 | 4 |"<<endl;
cout<<"| Fill A | 4 | 4 |"<<endl;
cout<<"| A -> B | 0 | 8 |"<<endl;
cout<<"| Fill A | 4 | 8 |"<<endl;
cout<<"| A -> B | 3 | 9 |"<<endl;
cout<<"| Empty B | 3 | 0 |"<<endl;
cout<<"| A -> B | 0 | 3 |"<<endl;
cout<<"| Fill A | 4 | 3 |"<<endl;
cout<<"| A -> B | 0 | 7 |"<<endl;



}
The general strategy for the project:
Make A the cup with the smaller quantity.
Then you should fill A and then pour it into B.
Since the cups have no common fators they won't evenly divide.
This makes cup A have some extra after you fill it B/A + 1 times.
This is shown by the lines 13 and 14.
After that keep repeating these steps until you can get 7.
Here is another example:
A=6 B=17
| Start| 0 | 0
|Fill A | 6 | 0
|A->B| 0 | 6
|Fill A | 6 | 6
|A->B | 0 | 12
|Fill A | 6 | 12
| A->B | 1 | 17
|Empty B | 1 | 0
| A->B | 0| 1
|Fill A | 6 | 1
| A->B| 0 | 7

