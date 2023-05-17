//maximum between two numbers
////#include<iostream>
////using namespace std;
////int main(){
////	int a,b;
////	cout<<"enter the value of a "<<endl;
////	cin>>a;
////	cout<<"enter the value of b "<<endl;
////	cin>>b;
////	if(a>b){
////		cout<<"the maximum number is a"<<endl;
////	}
////	else{
////		cout<<"the maximum number is b "<<endl;
////	}
////	return 0;
////}

//find maximum between three numbers
//#include<iostream>
//using namespace std;
//int main(){
//	int a,b,c;
//     int max;
//	cout<<"enter the value of a "<<endl;
//	cin>>a;
//	cout<<"enter the value of b "<<endl;
//	cin>>b;
//	cout<<"enter the value of c "<<endl;
//	cin>>c;
//	max=a;
//	if(b>max)
//   max=b;
//   if(c>max)
//   max=c;
//   cout<<"the maximum number is"<<max;
//	return 0;
//}






// input two number and find both are equal
//using namespace std;
//int main(){
//	int a,b;
//	cout<<"enter the number a and b";
//	cin>>a>>b;
//     if(a==b){
//     	cout<<"both are equal.";
//	 }
//
//}
//



//
//input two numbeer and find scnd number is square of first
//#include<iostream>
//using namespace std;
//int main(){
//	int a,b;
//	cout<<"enter the number a and b";
//	cin>>a>>b;
//     if(a*a==b){
//     	cout<<"seconed number is square of first";
//	 }
//
//}



//input marks of three subjects if the average marks is mpore than 80, it display two message
// "you are above standord " and "admission generated"

//#include<iostream>
//using namespace std;
//int main(){
//	int sub1,sub2,sub3;
//     float average;
//	cout<<"enter the marks of first subject ";
//	cin>>sub1;
//	cout<<"enter the marks of seconed subject ";
//	cin>>sub2;
//	cout<<"enter the marks of third subject ";
//	cin>>sub3;
//	average=(sub1+sub2+sub3)/3.0;
//	if(average > 80){
//		cout<<"you above standords! \n";
//		cout<<"admission generated";
//	}
//   return 0;
//}



//input a number and determine weather it is positive  ,negative ,0

//#include<iostream>
//using namespace std;
//int main(){
//    int n;
//	cout<<"enter the number";
//	cin>>n;
//	if(n>0){
//		cout<<"the number is positive";
//	}
//	if(n<0)
//	{
//		cout<<"the number is negative";
//	}
//	if(n==0){
//		cout<<"the number is zero";
//	}
//}


//input five numberand find yhe largest and smallest intger

////#include<iostream>
////using namespace std;
////int main(){
////    int a,b,c,d,e,max,min;
////	cout<<"enter the numbers";
////	cin>>a>>b>>c>>d>>e;
////	max=a;
////	min=a;
////	if(b>max) max=b;
////	if(c>max) max=c;
////	if(d>max) max=d;
////	if(e>max) max=e;
////	if(b<min) min=b;
////	if(c<min) min=c;
////	if(d<min) min=d;
////	if(e<min) min=e;
////cout<<"the largsest number is"<<max<<endl;
////cout<<"the smallest number is "<<min<<endl;
////}



//input a number and find wether it is even or odd using if else



//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter the number";
//	cin>>n;
//	if(n%2==0){
//		cout<<"the number is even";
//	}
//	else
//	cout<<"the number is odd ";
//	
//}




//input a year and find wether it is  leap or not using if else
//#include<iostream>
//using namespace std;
//int main(){
//	int y;
//	cout<<"enter the year";
//	cin>>y;
//	if(y%4==0){
//		cout<<y<<"is a leap year";
//	}
//		else
//		cout<<y<<"is not a leap year";
//}


//inpout the salary or grade  it add 50%bonous bif the grade is greater than 15;
//it add 25% bom=nous if the grade is 15 or less and thrn display tootal salary

//
//#include<iostream>
//using namespace std;
//int main(){
//	float salary ,bonous;
//	int grade;
//	cout<<"enter the salary";
//	cin>>salary;
//	cout<<"enter the grade.";
//	cin>>grade;
//	if(grade>15)
//	bonous=salary*50/100;
//	else
//	bonous = salary*25/100;
//	salary=salary+bonous;
//	cout<<"your total  salary is"<<salary;
//	
//}
//



//input two numbers and print first integer  is multiple of second integer

//#include<iostream>
//using namespace std;
//int main(){
//	int a,b;
//	cout<<"enter teh number";
//	cin>>a>>b;
//	if(a%b==0)
//	cout<<"the first number is multiple of  seconed ";
//	else
//	cout<<"the second number is not a multiple of first.";
//}

//if else if
//synatx
//if(condition){
//	
//block 1;
//}
//else if(cond){
//	block2;
//}
//else if(cond){
//	block3;
//}
//:
//	else{
//		block n;
//	}




//input test score of a student and display his grade according to criteria
//#include<iostream>
//using namespace std;
//int main(){
//	int scores;
//	cout<<"enter the scores";
//	cin>>scores;
//	if(scores>=90){
//		cout<<"your grade is A";
//	}
//	else if(scores>=80){
//		cout<<"your grade is B";
//	}
//	else if(scores>=70){
//		cout<<"your grade is C";
//	}
//	else if(scores>=60){
//		cout<<"your grade is D";
//	}
//	else{
//		cout<<"your grade is F";
//	}
//}




//calculate the electrcity  bill with the following rates per units
//a line rent  rs 150 cis add to total bill
//and surcharge of 5% extra if bill>200 

//#include<iostream>
//using namespace std;
//int main(){
//	int units;
//	float bills;
//
//   cout<<"enter the units can be consumed.";
//   cin>>units;
//   if(units<=300)
//   bills = units*2;
//   else if(units>300)
//   bills=units*5;
//   else
//   bills=units*7;
//   bills=bills+150;
//   if(bills>2000)
//   bills=bills+(bills*5.0/100.0);   
//   cout<<"your total bill is "<<bills;
//}




//
//
//input radius and user choice 
//it calculate area of circle 
//if user enter1 as choice it calculate circumfernce if user enter 2 choice

//#include<iostream>
//using namespace std;
//int main(){
//int radius;
//int choice;
//float area,circumference;
//cout<<"enter the radius";
//cin>>radius;
//	cout<<"enter 1 for area and 2 for circumference.";
//	cin>>choice;
//	if(choice==1)
//	{
//		area=3.141*radius*radius;
//		cout<<"area is "<<area;
//	}
//	else if(choice==2){
//		circumference=2.0*3.141*radius;
//		cout<<"circumfernce "<<circumference;
//	}
//	
//	else
//	cout<<"your input is invalid.";
//}
//



//input salary it deducts 7% of the salary if salary is 20000 or more 
//it deducts 1000 fronm the salary
//if the salary is 10000 or more bit less than 20000 it deducts 
//nothing if the salary  is less than 10000 it finally display the net salary;

//#include<iostream>
//using namespace std;
//int main(){
//	int salary ;
//	float net;
//	cout<<"enter the salary.";
//	cin>>salary;
//	if(salary>=20000)
//  net= salary-(salary*7.0/100);
//  else if(salary>=10000)
//  net = salary-1000;
//  else 
//  net= salary;
//  cout<<"your net salary is"<<net; 
//}


//calculates  the monthly telephone bill as follows
//#include<iostream>
//using namespace std;
//int main(){
//	int bill,calls,min=200;
//	cout<<"enter number of calls.";
//	cin>>calls;
//	if()
//}





//nested if 
//diplay the smallest number 


//#include<iostream>
//using namespace std;
//int main()
//{
//	int x,y,z;
//	cout<<"enter the number.";
//	cin>>x>>y>>z;
//	if(x<y)
//     if(x<z)
//     {
//	 cout<<x<<"is a smallest number";
//    
//	}else
//    {
//	cout<<z<<"is a smallest number";
//   }
//   else
//   cout<<y<<"is a smallest number";
//
//}



//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,c;
//	cout<<"enter the number.";
//	cin>>a>>b>>c;
//	if(a<b)
//     if(a<c)
//     {
//	 cout<<a<<"is a smallest number";
//    
//	}else
//    {
//	cout<<c<<"is a smallest number";
//   }
//   else if (b<c)
//   cout<<b<<"is a smallest number";
//  else
//  cout<<c<<"smallest num";
//}




//
//#include<iostream>
//using namespace std;
//int main(){
//	int a,b,c;
//	cout<<"enter the number";
//	cin>>a>>b>>c;
//	if(a==b)
//	if(a==c)
//	cout<<"all numbers are equal.";
//	else
//		cout<<"all numbers are different.";
//		
//		else
//			cout<<"numbers are diiferent.";
//}





//
////input three numbers and display the smallest num by using logical operator
//#include<iostream>
//using namespace std;
//int main(){
//	int a,b,c;
//	cout<<"enter the number";
//	cin>>a>>b>>c;
//	if(a>b && a>c)
//	cout<<"maximum number is "<<a;
//	else  if(b>c && b>a)
//   	cout<<"maximum number is "<<b;
//    else
//    	cout<<"maximum number is "<<c;
//}



//input  a character and display  it is vowel or not
//#include<iostream>
//using namespace std;
//int main(){
//	char ch;
//	cout<<"enter the character.";
//	cin>>ch;
//	if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='o' || ch=='O' || ch=='i' || ch=='I' || ch=='u' || ch=='U')
//	cout<<"it is vowels"<<ch;
//	else
//	cout<<"it is not vowels";
//}




//input number of month of the year anddisplay the number of days of corrosponding month if else if statement 
//if user enter 2 it will display 28 or 29
//jan 31 
//feb 28
//mar 31
//apr 30
//may 31
//jun 30
//jul 31
//aug 30
//sep 31
//oct 30
//nov 31
//dec 30




//#include<iostream>
//using namespace std;
//int main(){
//	int mon;
//	cout<<"enter the month of year.";
//	cin>>mon;
//	if(mon==2)
//	cout<<"28 or 28 days";
//	else if (mon==1 || mon==3 || mon==5 || mon==7|| mon==9 || mon==11 )
//    cout<<"30 days ";	
//    else if (mon==4 || mon==6 || mon==9 || mon==11 )
//     cout<<"31 days ";
//     else 
//     cout<<"invalid the month";
//
//}





//enter any charcter through the keyword and 
//wether it is a capital letter or small case letter or digit digit nm and special symbol  


//
//#include<iostream>
//using namespace std;
//int main(){
//	char ch;
//	cout<<"enter the character.";
//	cin>>ch;
//	if((ch>='A') && (ch<='Z'))
//   cout<<"the character "<<ch<<"is a capital letter.";
//   else	if((ch>='a') && (ch<='z'))
//   cout<<"the character "<<ch<<"is a small case letter.";
//    else if((ch>='0') && (ch<='9'))
//   cout<<"the character "<<ch<<"is a digit number.";
//   else
//   cout<<"the character "<<ch<<"is a symbol.";
//}
    



//even or odd by using logical operator
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"enter the number";
//	cin>>n;
//	if(!(n%2==0)){
//		cout<<"odd number";
//	}
//	else
//	cout<<"even number.";
//}







//input three digits display all combination of digits
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,c;
//	cout<<"enter the number";
//	cin>>a>>b>>c;
//	if((a!=b) && (b!=c) && (c!=a))
//	{
//		cout<<a<<b<<c<<"\t";
//		cout<<a<<c<<b<<"\t";
//		cout<<b<<a<<c<<"\t";
//		cout<<c<<a<<b<<"\t";
//		cout<<c<<b<<a;
//	}
//	else
//	{
//		if((a==b)&&(a==c))
//		cout<<a<<b<<c;
//	    else{
//	    	if(a==b)
//	    	{
//	    		cout<<a<<b<<c<<"\t";
//	    		cout<<a<<c<<b<<"\t";
//	    		cout<<c<<b<<a;
//			}
//			
//		}
//		}	
//		
//}






