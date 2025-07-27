#include<iostream>
using namespace std;

int main(){
    int case_num;
    cin>>case_num;
    cin.ignore();
    for(int i=0;i<case_num;i++){
            string ans,current,suggestion_1,suggestion_2,suggestion_3;
            getline(cin,ans);
            getline(cin,current);
            getline(cin,suggestion_1);
            getline(cin,suggestion_2);
            getline(cin,suggestion_3);
            int same_line1=0;
            while(same_line1<suggestion_1.size()&&same_line1<current.size()&&suggestion_1[same_line1]==current[same_line1]){
                same_line1++;
            }
            int same_line2=0;
            while(same_line2<suggestion_2.size()&&same_line2<current.size()&&suggestion_2[same_line2]==current[same_line2]){
                same_line2++;
            }
            int same_line3=0;
            while(same_line3<suggestion_3.size()&&same_line3<current.size()&&suggestion_3[same_line3]==current[same_line3]){
                same_line3++;
            }
            int minpresses=current

    }

    return 0;
}