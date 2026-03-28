#include <iostream>
using namespace std;
main()

{
    string USERNAME = "admin";
    string PASSWORD = "1234";

    int t_students = 0;
    string s_name[3];
    int s_age[3]; 

    int t_courses = 0;
    string c_name[3];

    bool isLogin = false;

    string user, pw;
    for(int i=0; i <3; i++)
    {
        cout<<"Enter Username: ";
        cin>>user;

        cout<<"Enter Password: ";
        cin>>pw;

        if(user == USERNAME && pw == PASSWORD)
        {
            cout<<"Login Successful\n\n";
            isLogin = true;
            break;
        }
        else
        {
            cout<<"Invalid Credentials\n\n";
        }
    }

    if(isLogin)
    {
        int choice =0;
        while(true) 
        {
            cout<<"---University Management System---\n";
            cout<<"1. Add Student\n";
            cout<<"2. View Students\n";
            cout<<"3. Add Course\n";
            cout<<"4. View Course\n";
            cout<<"5. Exit\n";

            cout<<"Enter your choice: ";
            cin>>choice;
    
            if(choice == 1)
            {
                if(t_students < 3)
                {
                    cout<<"Enter Student Name: ";
                    cin>>s_name[t_students];
        
                    cout<<"Enter Student Age: ";
                    cin>>s_age[t_students];
        
                    t_students++;
                    cout << "Student Added Successfully! \n\n";
                } 
            }
            else if(choice == 2)
            {
                cout<<endl;
                for(int j = 0; j < t_students; j++)
                {
                    cout << "Student " << j+1 << " : Name - " << s_name[j] << "\t Age - " << s_age[j] << endl;
                }
                cout << endl << endl;
            }
             else if(choice == 3)
            {
                if(t_courses < 3)
                {
                    cout<<"Enter Course Name: ";
                    cin>>c_name[t_courses];

                    t_courses++;
                    cout << "Course Added Successfully! \n\n";
                }
            }
             else if(choice == 4)
            {
                cout << endl;
                for(int j = 0; j < t_courses; j++)
                {
                    cout << "Course " << j+1 << " : Name - " << c_name[j] << endl;
                }
                cout << endl << endl;
            }
            
            else
            {
                if(choice == 5)
                    cout<<"Invalid choice!\n\n";
                break;
            }
        }
    }
    cout<<"Thank you for using University Management System";
}