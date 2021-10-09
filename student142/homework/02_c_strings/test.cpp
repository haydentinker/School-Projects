#include <cctype>
#include <cstring>
#include <iostream> //	cin & cout
using namespace std;

bool areAnagrams(const char string1[], const char string2[]) {
  // TODO Add code to determine if strings are anagrams
  int counter1 = 0;
  char placeholder;
  for (int i = 0; string1[i] != '\0'; i++) {
    if (isalpha(string1[i])) {
      placeholder = string1[i];
      if ((int)placeholder < 90) {
        placeholder += 32;
      }
      counter1 += (int)placeholder;
    }
  }
  int counter2 = 0;
  char placeholder2;
  for (int i = 0; string2[i] != '\0'; i++) {
    if (isalpha(string2[i])) {
      placeholder2 = string2[i];
      if (placeholder2 < 90) {
        placeholder2 += 32;
      }
      counter2 += (int)placeholder2;
    }
  }
  if (counter1 == counter2) {
    return true;
  } else {

    return false;
  }
}
bool arePalindromes(const char string1[], const char string2[]) {
  // TODO Add code to determine if strings are Palindromes
  char placeHolder1[strlen(string1)];
  

    
  for (int i = strlen(string1); i >= 0; i--) {
    if (isalpha(string1[i])) {
      placeHolder1[i] = string1[i];
      if (placeHolder1[i] <= 90) {
        placeHolder1[i] += 32;
        

      }

    }
  }

  char placeHolder2[strlen(string2)];
 
  for (int i = 0; i < strlen(string2); i++) {
    if (isalpha(string2[i])) {
      placeHolder2[i] = string2[i];
      if (placeHolder2[i] <= 90) {
        placeHolder2[i] += 32;
      }
    } 
  }
int sameChar=0;
 for(int i=0;i<strlen(string1);i++){
     
     if(string1[i]==string2[i]){
         sameChar++;
     }
     if(sameChar==strlen(string1)){
         return true;
     }else{
         return false;
     }
 }
 return false;
}
void test(const char string1[], const char string2[]) {
  cout << "\"" << string1 << "\" and \"" << string2
       << "\" areAnagrams() = " << areAnagrams(string1, string2)
       << "; arePalindromes() = " << arePalindromes(string1, string2) << endl;
}

int main() {
  test("Dormitory", "Dirty Room");
  test("eleven plus two", "twelve plus one");
  test("A man, a plan, a canal: Panama.", "A man, a plan, a canal:  Panama.");
  test("abcd", "efgh");
  test("nurses run", "nurses run");
  test("abcd", "abcd");
  test("abcdd", "abcd");
  test("ace", "ccc");
  test("a1bcd","d2cba");

  return 0;
}
