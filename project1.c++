#include<iostream>
#include<iomanip>
using namespace std;
class employee{
   protected:
    int employeeID;
    string employeeName;
    string address;
    double salary;
    int code;
    public:
    int getter_employeeID(){
        return employeeID;
    }
    void input_Employee(){
        cout<<"Enter  ID:";cin>>employeeID;
        cout<<"Enter  name:";cin>>employeeName;
        cout<<"Enter  salary:";cin>>salary;
        cout<<"Enter  address:";cin>>address;
       
    }
 
      void output_Employee() {
        cout << setw(10)<<employeeID
       << setw(15)<<employeeName
       << setw(15)<<address
       << setw(10)<<salary;
    }
};
class product:public employee{
    private:
    int code;
    int qty;
    string mad_in;
    string productName;
    double price;
    public:
    void input_Product(){
        product::input_Employee();
        cout<<"Enter product code:";cin>>code;
        cout<<"Enter product name:";cin>>productName;
        cout<<"Enter qty:";cin>>qty;
        cout<<"Enter product price:";cin>>price;
        cout<<"Enter Mad_in:";cin>>mad_in;
      
    }
   
    //setter
    double Total(){
        return qty*price;
    }
    //getter
    double payment(){
        
        if( Total()>=1 && Total()<=10)
          return Total()-(Total()*10)/100;
        else if(Total()>10 && Total()<=20){
          return Total()-(Total()*20)/100;
        }else if(Total()>30 && Total()<=30){
          return Total()-(Total()*30)/100;
        }else if(Total()>40 && Total()<=40){
          return Total()-(Total()*40)/100;
        }else if(Total()>50 && Total()<=50){
            return Total()-(Total()*50)/100;
        }else if(Total()>60 && Total()<=60){
            return Total()-(Total()*60)/100;
        }else {
            return Total()-(Total()*70)/100;
        }
    }
    void Header() {
    cout << setw(15)<<"EmployeeID"
     << setw(5)
     << setw(15)<<"EmployeeName"
     << setw(5)
     << setw(10)<<"Address"
     << setw(5)
     << setw(9) <<"Salary"
     << setw(5)
     << setw(13)<<"ProductCode"
     << setw(5)
     << setw(14)<<"Product Name"
     << setw(5)
     << setw(10)<<"Qty"
     << setw(5)
     << setw(10)<<"Price"
     << setw(5)
     << setw(10)<<"Made In"
     << setw(5)
     << setw(9) <<"Total"
     << setw(5)
     << setw(9)  << "Payment" << endl;
}
void output_Product() {
    output_Employee();
    cout << setw(10)<< code
         << setw(5) 
         << setw(15)<< productName
         << setw(5) 
         << setw(8) << qty
         << setw(5)
         << setw(10)<< price << "$"
         << setw(5)
         << setw(10)<< mad_in
         << setw(5) 
         << setw(9)<< Total()
         << setw(5) 
         << setw(9)<< payment() << endl;
}
  
     void set_ID(int new_code){
        code = new_code;
    }
};
class  student{
   protected:
    int student_id;
    string student_name;
    string  student_address;
    int  student_age;
    public:
    
    int getter_student_id(){
        return student_id;
    }
    void input_Student() {
    cout << "Enter DepartmentID: ";
    cin >> student_id;
    cout << endl; 
    cout << "Enter DepartmentName: "; 
    cin >> student_name;
    cout << endl; 
    cout << "Enter DepartmentAddress: "; 
    cin >> student_address;
    cout << endl; 
    cout << "Enter DepartmentAge: "; 
    cin >> student_age;
    cout << endl; 
}
    void output_Student(){
       cout<<setw(12)<<student_id;
       cout<<setw(15)<<student_name;
       cout<<setw(14)<<student_address;
       cout<<setw(14)<<student_age;
       
    }
};
class Average_student:public student{
    private:
    float average;
    float total_grade;
    float web,javascript,html,css,php;
    public:
      
    void input_score(){
    
        cout << "Enter Web score: "; cin >> web;
        cout << "Enter JavaScript score: "; cin >> javascript;
        cout << "Enter HTML score: "; cin >> html;
        cout << "Enter CSS score: "; cin >> css;
        cout << "Enter PHP score: "; cin >> php;
  }
    double Total_score(){
        return web+javascript+html+css+php;
    }
    double average_score(){
        return Total_score()/5;
    }
    char grade(){
        if(average_score()>=90 && average_score()<=100){
            return 'A';
        }else if(average_score()>=80 && average_score()<90){
            return 'B';
        }else if(average_score()>=70 && average_score()<80){
            return 'C';
        }else if(average_score()>=60 && average_score()<70){
            return 'D';
        }else if(average_score()>=50 && average_score()<60){
            return 'E';
        }else {
            return 'F';
        }
    }
   void output_Header() {
    cout << setw(12) << "StudentID";
    cout << setw(20) << "StudentName";
    cout << setw(20) << "StudentAddress";
    cout << setw(12) << "StudentAge";
    cout << setw(10) << "Web";
    cout << setw(15) << "JavaScript";
    cout << setw(10) << "HTML";
    cout << setw(10) << "CSS";
    cout << setw(10) << "PHP";
    cout << setw(10) << "AVG";
    cout << setw(10) << "Grade" << endl;
}
void output_score() {
    
    cout << setw(15) << web;
    cout << setw(15) << javascript;
    cout << setw(11) << html;
    cout << setw(11) << css;
    cout << setw(11) << php;
    cout << setw(11) << average_score();
    cout << setw(10) << grade() << endl;
}
};
int main() {
    system("clear");
        product object_product[100];
        int i,n,j,option1,option2;
        int  stop1;
        int search_id;
        int update_id;
        int delete_id;
        int insert_id;
        bool check=false;
        int onptio2;
        int stope2;
        Average_student oject_student[100];
        int update_student_id;
        int delete_student_id;
        int insert_student_id; 
        Average_student temp;
    
    do {
        cout << "\n************************************" << endl;
        cout << "*         [1] INFORMATION FOR PRODUCT       *" << endl;
        cout << "*         [2] INFORMATION FOR STUDENT       *" << endl;
        cout << "************************************" << endl;
        cout << "Enter your choice : ";
        cin >> option1;
        if (option1 == 1) {
           
            do {
                cout << setw(60) << "************************************" << endl;
                cout << setw(60) << "*    [INFORMATION FOR PRODUCT]     *" << endl;
                cout << setw(60) << "************************************" << endl;
                cout<<""<<endl;
                cout << setw(50) << "1.  Input product" << endl;
                cout<<""<<endl;
                cout << setw(50) << "2.  Output product"<< endl;
                cout<<""<<endl;
                cout << setw(50) << "3.  Search product"<< endl;
                cout<<""<<endl;
                cout << setw(50) << "4.  Update product"<< endl;
                cout<<""<<endl;
                cout << setw(50) << "5.  Delete product"<< endl;
                cout<<""<<endl;
                cout << setw(50) << "6.  Insert product"<< endl;
                cout<<""<<endl;
                cout << setw(48) << "7.  Sort product"  << endl;
                cout<<""<<endl;
                cout << setw(47) << "8.  Add product"   << endl;
                cout<<""<<endl;
                cout << setw(40) << "9.  Exit" << endl;
                cout << setw(60) << "************************************" << endl;
                cout << "Enter your choice : ";
                cin >> option2;
                switch (option2) {
                    case 1:
                    cout<< setw(50)<<"Enter size of array: ";cin>>n;
                    for(i=0;i<n;i++){
                        object_product[i].input_Product();
                        system("clear");
                    }
                    break;
                   
                    case 2:
                    if (n > 0) {  
                        object_product[0].Header(); 
                        for (i = 0; i < n; i++) {
                            object_product[i].output_Product(); 
                        }
                    } else {
                        cout << "No products available to display." << endl;
                    }
                     
                    break;
                    case 3:
                    check = false; 
                    again4:
                    cout << "Enter employeeID to search: ";
                    cin >> search_id;
                    
                    for (i = 0; i < n; i++) {
                        if (search_id == object_product[i].getter_employeeID()) {
                         
                            object_product[i].output_Product();
                            check = true;  
                        }
                    }
        
                    if (check) {
                        cout << "Search Found Success" << endl;
                    } else {
                        cout << "place your search id again" << endl;
                        goto again4;
                    }
                             
                    break;
                    case 4:
                     check = false;  
                     cout << "Enter employeeID you want to update: ";
                     cin >> update_id;
                for (i = 0; i < n; i++) {
                  if (object_product[i].getter_employeeID() == update_id) {
                    object_product[i].input_Product();  
                    cout << "employeeID updated successfully!" << endl;
                    check = true;
                    break;
                  }
                }
                if (!check) {
                    cout << "employeeID not found, update failed." << endl;
                }
              break;
              case 5:  
              check = false; 
              cout << "Enter employeeID to delete: ";
              cin >> delete_id;
              for (i = 0; i < n; i++) {
                  if (object_product[i].getter_employeeID() == delete_id) {
                      for (j = i; j < n - 1; j++) {
                        object_product[j] = object_product[j+ 1];
                      }
                      n--;  
                      cout << "employeeID deleted successfully." << endl;
                      check = true;
                      break;
                  }
              }
              if (!check) {
                  cout << "employeeID not found, delete failed." << endl;
              }
             break;
             case 6: 
              cout << "Enter employeeID to insert: ";
              cin >> insert_id;
              check = false;
              for (i = 0; i < n; i++) {
                if (object_product[i].getter_employeeID() == insert_id) {
                     for(i=0;i<n;i++){
                        
                        object_product[i].input_Product();
                    }
                    check = true;
                    break;
                }
              }
                break; 
                case 7:
                {
                    product temp; 
                    cout << "Enter employeeID to sort: ";
                    cin >> search_id;
                    for (int i = 0; i < n - 1; i++) {
                        for (int j = 0; j < n - i - 1; j++) {
                         
                            if (object_product[j].getter_employeeID() > object_product[j + 1].getter_employeeID()) {
                               
                                temp = object_product[j];
                                object_product[j] = object_product[j + 1];
                                object_product[j + 1] = temp;
                            }
                        }
                    }
                    cout << "Products sorted successfully by employeeID." << endl;
                }
                break;
              case 8: 
                if (n < 100) { 
                 cout << "Enter details for the new product:" << endl;
                 object_product[n].input_Product(); 
                 n++; 
                 cout << "Product added successfully." << endl;
                } else {
                 cout << "Cannot add more products. Maximum limit reached." << endl;
                }
                break;
                case 9:
                
                cout << "Exiting product information menu." << endl;
                break; 
                default:
                  cout << "Invalid choice. Please try again." << endl;
                break;
                    
                }
            } while (option2 != 9);
        }
        else if (option1 == 2) {
            
            do {
                cout << setw(60)<<"************************************"  <<endl;
                cout << setw(60)<<"*    [INFORMATION FOR PRODUCT]     *"  <<endl;
                cout << setw(60)<<"************************************"    <<endl;
                cout << setw(50)<< "1.  Input  product "<<endl; 
                cout << setw(50)<< "2.  Output product "<<endl;
                cout << setw(50)<< "3.  Search product "<<endl;
                cout << setw(50)<< "4.  Update product "<<endl;
                cout << setw(50)<< "5.  Delete product "<<endl;
                cout << setw(50)<< "6.  insert product "<<endl;
                cout << setw(50)<< "7.  sort   product "<<endl;
                cout << setw(50)<< "8.  Add    product "<<endl;
                cout << setw(50)<< "9.  Exit           "<<endl;
                cout << setw(60)<<"************************************"  <<endl;
                cout << setw(50)<< "Enter your choice : ";cin >> option2;
           switch(option2){
            case 1:
                cout<< setw(50)<<"Enter size of array: ";cin>>n;
                for(i=0;i<n;i++){
                   oject_student[i].input_Student();
                   oject_student[i].input_score();
                   
                    system("clear");
                }
            break;
        case 2:
            if (n > 0) {  
                oject_student[0].output_Header(); 
                for (int i = 0; i < n; i++) {
                    oject_student[i].output_Student(); 
                    oject_student[i].output_score();   
                }
            } else {
                cout << "No students available to display." << endl;
            }
            break;
            break;
              case 3:
                    check = false; 
                    again3:
                    cout << "Enter stundent to search: ";
                    cin >> search_id;
                     oject_student[0].output_Header(); 
                    for (i = 0; i < n; i++) {
                        if (search_id == oject_student[i].getter_student_id()) {
                         
                            oject_student[i].output_Student();
                              oject_student[i].output_score();
                            check = true;  
                        }
                    }
        
                    if (check) {
                        cout << "Search Found Success" << endl;
                    } else {
                        cout << "place your search id again" << endl;
                      goto again3;
                    }
                break;
                case 4:
                check = false;  
                cout << "Enter ID of the student you want to update: ";
                cin >> update_student_id;
                for (i = 0; i < n; i++) {
                    if (oject_student[i].getter_student_id() == update_student_id) {
                      
                        oject_student[i].input_Student(); 
                        cout << "Student ID updated successfully!" << endl;
                        check = true;
                        break;
                    }
                }
                if (!check) {
                    cout << "Student ID not found, update failed." << endl;
                }
                break;
            
              break;     
            case 5:
            check = false; 
            cout << "Enter ID of the student to delete: ";
            cin >> delete_student_id;
            for (i = 0; i < n; i++) {
                if (oject_student[i].getter_student_id() == delete_student_id) {
                    for (j = i; j < n - 1; j++) {
                        oject_student[j] = oject_student[j + 1];
                    }
                    n--; 
                    cout << "Student ID deleted successfully." << endl;
                    check = true;
                    break; 
                }
            }
            if (!check) {
                cout << "Student ID not found, delete failed." << endl;
            }
           
             break;
                case 6:
                cout << "Enter ID of the student to insert: ";
                cin >> insert_student_id;
                check = false;
         
                for (i = 0; i < n; i++) {
                    if (oject_student[i].getter_student_id() == insert_student_id) {
                        cout << "Student ID already exists. Cannot insert." << endl;
                        check = true; 
                        break;
                    }
                }
                if (!check) {
                    if (n < 100) { 
                        oject_student[n].input_Student(); 
                        n++;
                        cout << "Student added successfully." << endl;
                    } else {
                        cout << "Cannot add more students. Maximum limit reached." << endl;
                    }
                }
                break;
                case 7:
                    for (int i = 0; i < n - 1; i++) {
                        for (int j = 0; j < n - i - 1; j++) {
                            if (oject_student[j].getter_student_id()> oject_student[j + 1].getter_student_id()) {
                                temp = oject_student[j];
                                oject_student[j] = oject_student[j + 1];
                                oject_student[j + 1] = temp;
                            }
                        }
                    }
                    cout << "Students sorted successfully by student ID.\n";
                
                break;
                case 8: 
                if (n < 100) { 
                 cout << "Enter details for the new product:" << endl;
                 object_product[n].input_Product(); 
                 n++; 
                 cout << "Product added successfully." << endl;
                } else {
                 cout << "Cannot add more products. Maximum limit reached." << endl;
                }
                break;
                case 9:
                char confirmExit;
                cout << "Are you sure you want to exit? (y/n): ";
                cin >> confirmExit;
                if (confirmExit == 'y' || confirmExit == 'Y') {
                    cout << "Exiting the program. Goodbye!" << endl;
                    exit(0); 
                } else {
                    cout << "Returning to menu." << endl;
                }
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
           } 
        }while(option2 != 10);
        }
        else {
            cout << "Invalid choice. Please select 1 or 2." << endl;
        }
    } while (option1 != 2);
    cout << "Exiting the program. Goodbye!" << endl;
    return 0;
}