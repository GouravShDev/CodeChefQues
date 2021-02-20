// Problem Code : MEET
// url : https://www.codechef.com/problems/MEET

#include<bits/stdc++.h>
using namespace std;
#define sync_off ios::sync_with_stdio(0);cin.tie(0);
#define ll long long int


class Time{
public:
    int hours;
    int minutes;
    bool isAM;
    Time(int h,int min,bool isAM){
        this->hours = h;
        this->minutes = min;
        this->isAM = isAM;

        if(isAM){
            hours %= 12;
        }
        if(!isAM && hours != 12){
            hours += 12;
        }
    }

    bool operator<=(const Time &t){
        if((this->hours <= t.hours) || t.hours == 0){
            return true;
        }else{
            return false;
        }
    }
    bool operator>=(const Time &t){
        if((this->hours >= t.hours) || t.hours == 0){
            return true;
        }else{
            return false;
        }
    }
};

Time stringToTime(string time, string meridian){
    string hours = "";
    string mins = "";
    bool isAM;
    isAM = (meridian == "AM")? true: false;
    hours+= time[0];
    hours+= time[1];
    mins += time[3];
    mins += time[4];

    return Time(stoi(hours), stoi(mins), isAM);

}
bool isGreater(Time t1, Time t2){

}

bool isInBetween(Time st, Time end, Time time){
    bool isBetween = false;
    if(st.hours <= end.hours){
        if(st < time && time > end){

        }
    }else{

    }
}
int main(){
    //sync_off;
    int tc, n;
    string meetingT, meetingMeridiem, op;
    cin>>tc;
    while(tc--){
        cin>>meetingT>>meetingMeridiem;
        cin>>n;
        Time meetingTime = stringToTime(meetingT, meetingMeridiem);
        vector<Time> begTime;
        vector<Time> endTime;
        string time;
        string meridiem;
        op = "";
        for (int i = 0; i < n; i++)
        {
            cin>>time>>meridiem;
            begTime.push_back(stringToTime(time,meridiem));
            cin>>time>>meridiem;
            endTime.push_back(stringToTime(time,meridiem));
        }
        for (int i = 0; i < n; i++)
        {
            Time bT = begTime.back();
            begTime.pop_back();
            Time eT = endTime.back();
            endTime.pop_back();
            if(isInBetween(bT,eT,meetingTime)){
                op+="1";
            }else{
                op+="0";
            }
        }
        for (int i = op.length()-1; i >= 0; i--)
        {
            cout<<op[i];
        }
        
        cout<<endl;

    }
    return 0;
}