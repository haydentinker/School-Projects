#include <iostream>
#include <vector>
using namespace std;
int main(){
   char yes='y';
  do{
  //variable stuff
   string roman2;
   string roman1;
   int i=0;
   int tot=381;
int subtract=0;
int input;
int tmpIn;
int y=0;



  //while loop to enforce the max
   cout<<"Enter two Roman Numerals with a sum greater than 1 and less than 380"<<endl;
  while(tot>380){

   //asking for user input
   cout<<"Enter the first Roman Numeral: ";
    cin>>roman1;



cout<<"Enter the second Roman Numeral: ";
    cin>>roman2;

tot=0;

//turning roman numeral 1 to integer

int size=roman1.size();
vector<int>Roman1Int(size);
for(int i=0;i<roman1.size();i++){
    if(roman1.at(i)=='I'){
tot+=1;
Roman1Int.at(i)=1;
    }
   else if(roman1.at(i)=='V'){
tot+=5;
Roman1Int.at(i)=5;
    }
   else if(roman1.at(i)=='X'){
tot+=10;
Roman1Int.at(i)=10;
    }
   else if(roman1.at(i)=='L'){
tot+=50;
Roman1Int.at(i)=50;
    }
    else if(roman1.at(i)=='C'){
tot+=100;
Roman1Int.at(i)=100;
}else{
    cout<<"It seems you have entered an invalid Roman Numeral :( RIP. I will give you another chance because I am nice."<<endl;
    return main();
}
}


//checking for subtraction
subtract=Roman1Int.at(0);
for(int i=0;i<Roman1Int.size();i++){
    if (Roman1Int.at(i)> subtract){
        tot-=2*subtract;
    }

subtract=Roman1Int.at(i);
}



//string 2 time :D
//turning roman numeral 2 to integer
int size2=roman2.size();
vector<int>Roman2Int(size2);
for(int i=0;i<roman2.size();i++){
    if(roman2.at(i)=='I'){
tot+=1;
Roman2Int.at(i)=1;
    }
   else if(roman2.at(i)=='V'){
tot+=5;
Roman2Int.at(i)=5;
    }
   else if(roman2.at(i)=='X'){
tot+=10;
Roman2Int.at(i)=10;
    }
   else if(roman2.at(i)=='L'){
tot+=50;
Roman2Int.at(i)=50;
    }
    else if(roman2.at(i)=='C'){
tot+=100;
Roman2Int.at(i)=100;
}else{
    cout<<"It seems you have entered an invalid Roman Numeral :( RIP. I will give you another chance because I am nice."<<endl;
    return main();
}
}


//adding up everything
subtract=Roman2Int.at(0);
for(int i=0;i<Roman2Int.size();i++){
    if (Roman2Int.at(i)> subtract){
        tot-=2*subtract;
    }

subtract=Roman2Int.at(i);
}

if(tot>380){
    cout<<"Error! Please enter two Roman Numerals with a sum that is less than 381"<<endl;
}

  }
  input=tot;
  //starting to divide the number into groups

//anything less than 100
cout<<"The sum of the two Roman Numerals is: ";
if(input<100){

 //gettting the tens done
 tmpIn=input/10;
 if(tmpIn<4){
for(int i=0;i<tmpIn;i++){
cout<<"X";
 }
 }
 else if(tmpIn==40){
     cout<<"XL";
 }
 else if(tmpIn>4&&tmpIn<9){
     cout<<"L";
     for(int i=0;i<tmpIn-5;i++){
         cout<<"X";
     }
 }
 else if (tmpIn==9){
     cout<<"XC";
 }

 //getting the ones done
 tmpIn=input%10;
 if(tmpIn<4){
     for(int i=0;i<tmpIn;i++){
         cout<<"I";
     }
 }
 else if(tmpIn==4){
     cout<<"IV";
 }
else{
    cout<<"V";
    tmpIn-=5;
    for(int i=0;i<tmpIn;i++){
        cout<<"I";
    }
}

}
//anything between 101 and 199
else if(input>100&&input<200){
 cout<<"C";
 input-=100;

 //gettting the tens done
 tmpIn=input/10;
 if(tmpIn<4){
for(int i=0;i<tmpIn;i++){
cout<<"X";
 }
 }
 else if(tmpIn==40){
     cout<<"XL";
 }
 else if(tmpIn>4&&tmpIn<9){
     cout<<"L";
     for(int i=0;i<tmpIn-5;i++){
         cout<<"X";
     }
 }
 else if (tmpIn==9){
     cout<<"XC";
 }

 //getting the ones done
 tmpIn=input%10;
 if(tmpIn<4){
     for(int i=0;i<tmpIn;i++){
         cout<<"I";
     }
 }
 else if(tmpIn==4){
     cout<<"IV";
 }
else{
    cout<<"V";
    tmpIn-=5;
    for(int i=0;i<tmpIn;i++){
        cout<<"I";
    }
}

}
//anything between 201 and 299
else if(input>200&&input<300){
cout<<"CC";
input-=200;

 //gettting the tens done
 tmpIn=input/10;
 if(tmpIn<4){
for(int i=0;i<tmpIn;i++){
cout<<"X";
 }
 }
 else if(tmpIn==40){
     cout<<"XL";
 }
 else if(tmpIn>4&&tmpIn<9){
     cout<<"L";
     for(int i=0;i<tmpIn-5;i++){
         cout<<"X";
     }
 }
 else if (tmpIn==9){
     cout<<"XC";
 }

 //getting the ones done
 tmpIn=input%10;
 if(tmpIn<4){
     for(int i=0;i<tmpIn;i++){
         cout<<"I";
     }
 }
 else if(tmpIn==4){
     cout<<"IV";
 }
else{
    cout<<"V";
    tmpIn-=5;
    for(int i=0;i<tmpIn;i++){
        cout<<"I";
    }
}

}

//anything between 301 and 380
else if (input>300&&input<=380){
cout<<"CCC";
input-=300;

 //gettting the tens done
 tmpIn=input/10;
 if(tmpIn<4){
for(int i=0;i<tmpIn;i++){
cout<<"X";
 }
 }
 else if(tmpIn==40){
     cout<<"XL";
 }
 else if(tmpIn>4&&tmpIn<9){
     cout<<"L";
     for(int i=0;i<tmpIn-5;i++){
         cout<<"X";
     }
 }
 else if (tmpIn==9){
     cout<<"XC";
 }




 //getting the ones done
 tmpIn=input%10;
 if(tmpIn<4){
     for(int i=0;i<tmpIn;i++){
         cout<<"I";
     }
 }
 else if(tmpIn==4){
     cout<<"IV";
 }
else{
    cout<<"V";
    tmpIn-=5;
    for(int i=0;i<tmpIn;i++){
        cout<<"I";
    }
}

}
//100,200 and 300
else if(input==100||input==200||input==300){
    for(int i=1;i<=input/100;i++){
        cout<<"C";
    }

}
cout<<endl;
cout<<"Would you like to continue? (y/n)";
cin>>yes;
if(!(yes=='y')&&!(yes=='n')){
    cout<<"Invalid choice. I'm just gonna close the program."<<endl;
yes='n';
}
}while(yes=='y');
 return 0;

}