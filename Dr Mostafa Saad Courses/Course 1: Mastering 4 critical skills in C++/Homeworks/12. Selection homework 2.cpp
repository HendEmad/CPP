 #include<bits/stdc++.h>
 using namespace std;

 int main()
 {
     // 1. Intervals
     int x, start, end, cnt = 0;
     cin >> x;

     cin >> start >> end;
     cnt += (start <= x && x <= end);

     cin >> start >> end;
     cnt += (start <= x && x <= end);

     cin >> start >> end;
     cnt += (start <= x && x <= end);

     cout << cnt;

     // Intersection of intervals
     int s1, s2, e1, e2;
     cin >> s1 >> e1 >> s2 >> e2;

     if (e1 < s2 || e2 < s1)
        cout << -1 << "\n";
     else{
        if (s1 < s2)
            s1 = s2;
        if (e1 > e2)
            e1 = e2;

        cout << s1 << " " << e1 << "\n";
     }
 }
