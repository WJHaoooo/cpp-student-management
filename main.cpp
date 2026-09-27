#include <bits/stdc++.h>

using namespace std ;

struct Student {

    string name ;
    int age ;
    double score ;

} ;

class StudentManager {

    private :
        vector<Student> students ;

    public :
        
        void addStudent() {
            string n ;
            int a ; 
            double s ;
            cin >> n >> a >> s;
            students.push_back({n,a,s}) ;

            cout << "Student added." << endl ;
        }

        void printAll() const{

            if (students.empty()) {
                cout << "No students." << endl;
                return;
            }

            for (const auto& a : students) {
                cout << "Name: " << a.name
                    << ", Age: " << a.age
                    << ", Score: " << a.score
                    << endl;
            }
        }

        void FindHighest() const{

            if ( students.empty() ) {
                cout << "No students." << endl ;
                return ;
            }

            Student result = students[0];

            for( const auto& a : students ) {
                if( a.score > result.score ) result = a  ;
            }

            cout << "Highest: " << result.name << " " << result.score << endl ;
        }

        void countAvg() const{

            if ( students.empty() ) {
                cout << "No students." << endl ;
                 return ;
            }
            double sum = 0 ;

            for ( const auto& a : students ) {
                sum += a.score ;
            }

            double result = sum/students.size() ;

            cout << "Average: " << result << endl ;
            
        }

        void FindStudent() const{
            string input ;
            cin >> input ;

            for ( const auto& n : students ) {
                if( n.name == input ) {
                    cout << "Name: " << n.name
                         << ", Age: " << n.age
                         << ", Score: " << n.score
                         << endl ;
                    return ;
                }

            }

            cout << "Student not found." << endl ;

        }

} ;

int main(void) {

    int input ;

    StudentManager student ;

    cout << "1. Add student" << endl ; 
    cout << "2. Display all students" << endl ;
    cout << "3. Find highest score" << endl ;
    cout << "4. Calculate average" << endl ;
    cout << "5. Search student" << endl ;
    cout << "6. Exit" << endl ;

    while ( cin >> input ) {

        switch (input)
        {
        case 1:
            student.addStudent();
            break;
        case 2:
            student.printAll();
            break;
        case 3:
            student.FindHighest();
            break;
        case 4:
            student.countAvg() ;
            break;
        case 5:
            student.FindStudent() ;
            break ;
        case 6:
            return 0 ;
        default:
            break;
        }

        cout << endl ;
        cout << "1. Add student" << endl ; 
        cout << "2. Display all students" << endl ;
        cout << "3. Find highest score" << endl ;
        cout << "4. Calculate average" << endl ;
        cout << "5. Search student" << endl ;
        cout << "6. Exit" << endl ; 

    }

    return 0 ;
}