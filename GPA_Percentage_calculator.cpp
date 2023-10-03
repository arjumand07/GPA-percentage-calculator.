// A program to calculate the GPA and percentage. We will use two dynamic arrays. One to store the marks scored in each subject and other to store the maximum marks in each subject.

#include<iostream>
using namespace std;

class subjects {
    int n;
    int *arr_ms=new int[n];   //dynamic array allocation. here ms= marks scored
    int *arr_mm=new int[n];     // here mm = max marks in the subject.
    int percentage=0;
    int gpa=0;
    float sum1=0, sum2=0;

    public:
    void get() {
        cin>>n; // gets the number of elements our array will have.
        cout<<"Enter marks obtained in each subject"<<endl;
        for (int i=0; i<n; i++) {
            cin >> arr_ms[i];  }   // takes input from user and stores it in an array. The array stores the score achieved in diff subjects.

        cout<<"Enter the maximum marks in each subject in the order of the the previously entered data"<<endl;
        for (int j=0; j<n; j++) {
            cin >> arr_mm[j];   }
        }

    void show() {
            cout<<"\n--Please Check your given data below--\n";
        for (int i=0; i<n; i++) {
            cout<<"You have scored "<<arr_ms[i]<<"/"<<arr_mm[i]<<" in subject "<<i+1<<endl; }
          }
    
    void result() {
        for (int i=0; i<n; i++) {
            sum1 += arr_ms[i];  // this should find the sum of the marks scored in all subjects.
            sum2 += arr_mm[i];  //this should find the sum of max marks of all subjetcs.
        }
        percentage=(sum1/sum2)*100;
        gpa=percentage/10;

        cout<<"Percentage scored by the student is "<<percentage*100<<" %"<<endl;
        cout<<"GPA of the student is "<<gpa<<endl;
    }
    void delete_arr() {
        delete[] arr_ms;
        delete[] arr_mm;
    }
    };

int main() {
    subjects s1;
    s1.get();
    s1.show();
    s1.result();
    s1.delete_arr();
    return 0;
}