#include <bits/stdc++.h>
using namespace std;
 
struct Clock {
 
  int hour;
  int minute;
  int second;
 
  void set(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
  }
 
  string to_str() {
    string ans;
    if(hour < 10) ans += "0";
    ans += to_string(hour);
    ans += ":";
    if(minute < 10) ans += "0";
    ans += to_string(minute);
    ans += ":";
    if(second < 10) ans += "0";
    ans += to_string(second);
    return ans;
  }
 
  void shift(int diff_second) {
    bool forward = diff_second > 0;
    if(forward) {
      second += diff_second;
      minute += second / 60;
      hour += minute / 60;
      hour %= 24;
      minute %= 60;
      second %= 60;
    } else {
      second += diff_second;
      if (second < 0) {
        minute += (second / 60 - 1);
        second %= 60;
        if (second < 0) second += 60;
      }
      if (minute < 0) {
        hour += minute / 60 - 1;
        minute %= 60;
        minute += 60;
      }
      if (hour < 0) {
        hour += 24;
      }
    }

  }
};
 
 
 
int main() {
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;
 
  Clock clock;
 
  clock.set(hour, minute, second);
 
  cout << clock.to_str() << endl;
 
  clock.shift(diff_second);
 
  cout << clock.to_str() << endl;
}
