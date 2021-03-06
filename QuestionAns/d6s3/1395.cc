#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

class Time {
private:
    int hour_, minute_, second_;

public:
    Time()
        : hour_(0)
        , minute_(0)
        , second_(0)
    {
    }
    Time(int h, int m, int s)
        : hour_(h)
        , minute_(m)
        , second_(s)
    {
    }
    Time(const Time& t)
        : hour_(t.hour_)
        , minute_(t.minute_)
        , second_(t.second_)
    {
    }
    int hour()
    {
        return hour_;
    }
    int minute()
    {
        return minute_;
    }
    int second()
    {
        return second_;
    }
    void hour(int h)
    {
        hour_ = h;
    }
    void minute(int m)
    {
        minute_ = m;
    }
    void second(int s)
    {
        second_ = s;
    }
    Time& inputTime()
    {
        int h, m, s;
        cin >> h >> m >> s;
        hour_ = h;
        minute_ = m;
        second_ = s;
        return *this;
    }
    void showTime()
    {
        if (hour_ >= 24 || minute_ >= 60 || second_ >= 60 || hour_ < 0 || minute_ < 0 || second_ < 0)
            cout << "Time error" << endl;
        else
            cout << setw(2) << setfill('0') << hour_ << ":"
                 << setw(2) << setfill('0') << minute_ << ":"
                 << setw(2) << setfill('0') << second_ << endl;
    }
    Time operator+=(int t)
    {
        if (hour_ >= 24 || minute_ >= 60 || second_ >= 60 || hour_ < 0 || minute_ < 0 || second_ < 0)
            ;
        else {
            int nt = hour() * 3600 + minute() * 60 + second();
            nt += t;
            nt = nt - ((int)floor(nt / 86400.0) * 86400);
            hour(nt / 3600);
            minute(nt % 3600 / 60);
            second(nt % 3600 % 60);
        }
        return *this;
    }
    Time operator-=(int t)
    {
        t = -t;
        return (*this += t);
    }
};

int main()
{
    int cases;
    cin>>cases;
    for(int i = 1; i <= cases; ++i)
    {
        Time t;
        t.inputTime();
        Time tt(t);
        int num;
        cin>>num;
        t += num;
        t.showTime();
        tt -= num;
        tt.showTime();
    }
}

/**************************************************************
	Problem: 1395
	User: 201901060610
	Language: C++
	Result: Accepted
	Time:108 ms
	Memory:1268 kb
****************************************************************/

