#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student{

    int age;
    string first_name;
    string last_name;
    int standard;

    public:
          int get_age(){
              return age;
          }
          void set_age(int age1){
              age = age1;
          }
           string get_first_name(){
              return first_name;
          }
          void set_first_name(string first_name1){
              first_name = first_name1;
          }
          string get_last_name(){
              return last_name;
          }
          void set_last_name(string last_name1){
              last_name = last_name1;
          }
           int get_standard(){
              return standard;
          }
          void set_standard(int standard1){
              standard = standard1;
          }

};

int main() {
    int age, standard;
    string first_name, last_name;
    stringstream ss;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";

    ss << st.get_age() <<","<<st.get_first_name() <<","<<st.get_last_name()<<","<< st.get_standard();
    cout<<ss.str()<<endl;

    return 0;
}
