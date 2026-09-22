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


} ;

int main(void) {

    int input ;

    StudentManager student ;

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
            return 0 ;
        default:
            break;
        }

    }

    return 0 ;
}