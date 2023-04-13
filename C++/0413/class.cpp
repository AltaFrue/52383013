#include<iostream>
using namespace std;

class CPerson{
    public:
        const char* m_Name;
        int m_Age;

        void print(){
            cout << "Name: " << m_Name << endl;
            cout << "Age: " << m_Age << endl;
        }
};

int main(){
    CPerson p[2];

    p[0].m_Name = "Kim DO Hyung";
    p[0].m_Age = 11;
    p[0].print();

    p[1].m_Name = "Kim Na In";
    p[1].m_Age = 9;
    p[1].print();
}