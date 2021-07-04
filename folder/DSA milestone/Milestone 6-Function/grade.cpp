/* Write a program which will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
Marks        Grade
91-100         AA
81-90          AB
71-80          BB
61-70          BC
51-60          CD
41-50          DD
<=40          Fail

*/

#include<iostream>
using namespace std;


char grade(int marks)
{

    if(91<=marks>=100)
        grade="AA";
    else if(81=<marks>=90)
        grade=AB;
        else if(71=<marks>=80)
        grade=BB;
        else if(61=<marks>=70)
        grade=BC;
        else if(51=<marks>=60)
        grade=CD;
        else if(41=<marks>=50)
        grade=DD;
        else
            grade=Fail;
            return grade;
        )

}
int main()

{

    int marks;
    cout<<"Enter your marks:";
    cin>>marks;
    grade(marks);
    return 0;
}
