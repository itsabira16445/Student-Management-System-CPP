#include<iostream>
#include<string>
using namespace std;
int main()
{
    int choice;
    string name;
    int rollno;
    int age;
    float marks;
    bool studentAdded= false;
    bool running=true;
    while(running){
    cout<<"============================"<<endl;
    cout<<"STUDENT MANAGEMENT SYSTEM"<<endl;
    cout<<"============================"<<endl;
    cout<<"1.Add Student"<<endl;
    cout<<"2.Display Student"<<endl;
    cout<<"3.Search Student"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    
    if(choice==1){
    cout<<"Add Student"<<endl;
    cout<<"Enter Name  :"<<endl;
    cin>>name;
    cout<<"Enter RollNo:"<<endl;
    cin>>rollno;
    cout<<"Enter age   :"<<endl;
    cin>>age;
    cout<<"Enter Marks :"<<endl;
    cin>>marks;
    studentAdded=true;
    cout<<"\nStudent Added Successfully!"<<endl;
    cout<<"\n\nStudent Information:"<<endl;
    cout<<"Name:"<<name<<endl;
    cout<<"RollNo:"<<rollno<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Marks="<<marks<<endl;
}
    else if(choice==2){
    if(studentAdded)
    {
        cout<<"Display Student:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"RollNo:"<<rollno<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
    else
    {
        cout<<"No Student Record found:"<<endl;
    }

    }
    else if(choice==3){
    cout<<"Search Student"<<endl;
    int searchRoll;
    cout<<"Enter RollNo:"<<endl;
    cin>>searchRoll;
    if(studentAdded && searchRoll==rollno)
    {
        cout<<"\nStudent Found!"<<endl;
        cout<<"======================"<<endl;
        cout<<"Name   :"<<name<<endl;
        cout<<"RollNo :"<<rollno<<endl;
        cout<<"Age    :"<<age<<endl;
        cout<<"Marks  :"<<marks<<endl;
        cout<<"======================"<<endl;
    } else{
        cout<<"Student Not Found:"<<endl;
    }
}
    else if(choice==4){
    cout<<"\nThankyou for using Student Management System"<<endl;
    running=false;
    }
    else{
    cout<<"Invalid choice";
    }
}  
    
    return 0;
}
