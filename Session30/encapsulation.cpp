#include <iostream>
#include <string>
using namespace std;

class Person  {
 
  private:
      string name;
      int age;


   public:
   // Setter methods
   void setName (const string& newName) {
        name = newName;
    }
   //setters
    void setAge(int newAge){
        if(newAge >= 0 ){
            age = newAge;
        }else{
            cout<<"Invalid age "<<endl;
        }
    }
  
   //getter
    string getName() const {
        return name;
    }
   //getter
    int getAge() const {
        return age;
    }
 
};

int main() {
    //object creation
    Person boy;
    


    //setters call
    boy.setName("Shubham");
    boy.setAge(25);

    //getters call
    cout<<boy.getName()<<endl;
    cout<<boy.getAge()<<endl;
    
    // Person girl;

    // //setters call
    // girl.setName("Shalu");
    // girl.setAge(23);

    // //getters call
    // cout<<girl.getName()<<endl;
    // cout<<girl.getAge()<<endl;


    return 0;
}

//Code with private getters and setters

// #include <iostream>
// #include <string>

// class Person {
// private:
//     std::string name;
//     int age;
    
//     // Private setter methods
//     void setName(const std::string& newName) {
//         name = newName;
//     }
    
//     void setAge(int newAge) {
//         if (newAge >= 0) {
//             age = newAge;
//         } else {
//             std::cout << "Invalid age!" << std::endl;
//         }
//     }
    
// public:
//     // Public interface methods
//     void initializePerson(const std::string& newName, int newAge) {
//         setName(newName);
//         setAge(newAge);
//     }
    
//     void displayPerson() const {
//         std::cout << "Name: " << getName() << std::endl;
//         std::cout << "Age: " << getAge() << std::endl;
//     }
// };

// int main() {
//     Person person;
    
//     person.initializePerson("John", 25);
//     person.displayPerson();
    
//     return 0;
// }
