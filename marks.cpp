#include<iostream>
using namespace std;
float cgpa1(float s) //for 3 credit subjects
{
    float total= 25+s;
    if(total>=35 && total<=44)
    {
        return 4*3;
    }
    else if(total>=45 && total<=49)
    {
        return 5*3;
    }
    else if(total>=50 && total<=59)
    {
        return 6*3;
    }
    else if(total>=60 && total<=69)
    {
        return 7*3;
    }
    else if(total>=70 && total<=79)
    {
        return 8*3;
    }
    else if(total>=80 && total<=89)
    {
        return 9*3;
    }
    else if(total>=90)
    {
        return 10*3;
    }
    else
    {
        return 0;
    }
}
float cgpa2(float r) //for 4 credit subjects
{
    float total= 25+r;
    if(total>=35 && total<=44)
    {
        return 4*4;
    }
    else if(total>=45 && total<=49)
    {
        return 5*4;
    }
    else if(total>=50 && total<=59)
    {
        return 6*4;
    }
    else if(total>=60 && total<=69)
    {
        return 7*4;
    }
    else if(total>=70 && total<=79)
    {
        return 8*4;
    }
    else if(total>=80 && total<=89)
    {
        return 9*4;
    }
    else if(total>=90)
    {
        return 10*4;
    }
    else
    {
        return 0;
    }
}
float prac1(float s) //for 3 credit
{
    float total = (12 + s)*2;
    if(total>=35 && total<=44)
    {
        return 4*3;
    }
    else if(total>=45 && total<=49)
    {
        return 5*3;
    }
    else if(total>=50 && total<=59)
    {
        return 6*3;
    }
    else if(total>=60 && total<=69)
    {
        return 7*3;
    }
    else if(total>=70 && total<=79)
    {
        return 8*3;
    }
    else if(total>=80 && total<=89)
    {
        return 9*3;
    }
    else if(total>=90)
    {
        return 10*3;
    }
    else
    {
        return 0;
    }
}
float prac2(float s) //for 2 credit
{
    float total = (12 + s)*2;
    if(total>=35 && total<=44)
    {
        return 4*2;
    }
    else if(total>=45 && total<=49)
    {
        return 5*2;
    }
    else if(total>=50 && total<=59)
    {
        return 6*2;
    }
    else if(total>=60 && total<=69)
    {
        return 7*2;
    }
    else if(total>=70 && total<=79)
    {
        return 8*2;
    }
    else if(total>=80 && total<=89)
    {
        return 9*2;
    }
    else if(total>=90)
    {
        return 10*2;
    }
    else
    {
        return 0;
    }
}


int main()
{
    float sub1,sub2,sub3,sub4,sub5,sub6,sub7;
    cout<<"Enter your main subjects marks"<<endl;
    cout<<"Dbms: "<<endl;
    cin>>sub1;
    cout<<"daa: "<<endl;
    cin>>sub2;
    cout<<"flat: "<<endl;
    cin>>sub3;
    cout<<"ir: "<<endl;
    cin>>sub4;
    cout<<"economics: "<<endl;
    cin>>sub5;
    cout<<"Enter your practical marks"<<endl;
    cout<<"dbms lab: "<<endl;
    cin>>sub6;
    cout<<"web lab: "<<endl;
    cin>>sub7;
    float totalSum = cgpa2(sub2) + cgpa1(sub1) + cgpa1(sub3) + cgpa1(sub4) + cgpa1(sub5) + prac1(sub7) + prac2(sub6) +8;
    float grand= totalSum/22;
    cout<<"Your SGPA is: "<<grand<<endl;
    return 0;
}