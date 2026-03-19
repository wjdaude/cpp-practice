#include<iostream>
#include<iomanip>
using namespace std;


struct st_score{
    int kor, eng, math;
    int total;
    double average;
};
int main(){
   
st_score s;

    cin >> s.kor >> s.eng >> s.math;

    s.total=s.kor+s.eng+s.math;
    s.average=s.total/3.0;

    cout << s.total << " " <<  fixed << setprecision(1) << s.average << "\n";
    if(s.kor>=70){
        cout << "Korean - Pass\n";
    }else{
        cout << "Korean - Fail\n";
    }

     
    if(s.eng>=70){
        cout << "English - Pass\n";
    }else{
        cout << "English - Fail\n";
    }

       
    if(s.math>=70){
        cout << "Math - Pass\n";
    }else{
        cout << "Math - Fail\n";
    }
}