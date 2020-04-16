#include <iostream>
#include <vector>

using namespace std;

struct nn{
    int l, r;
};

bool cmp (nn a, nn b){
     if (a.r > b.l){
          nn c = a;
          a = b;
          b = c;
}
     if (a.r > b.l)
          return true;
     else
          return false;
}

int main(){
      int n;
      vector <nn> v;
      vector <vector <nn> > room;
      while (cin >> n){
           for (int i = 0; i < n; ++i) {
                nn c;
                cin >> c.l >> c.r;
                v.push_back(c);
}
           for (int i = 0; i < v.size(); ++i){
                int room_result = -1;
                for (int j = 0; j < (int)room.size(); ++j){
                     bool p = false;
                     for (int q = 0; q < room[j].size(); ++q){
                        if (cmp(room[j][q], v[i])){
                            p = true;
                            break;
}
}
                     if (p == false){
                         room_result = j;
                         break;
}
}
                if (room_result == -1){
                    vector<nn> room_new(1, v[i]);
                    room.push_back(room_new);
}
                else
                   room[room_result].push_back(v[i]);
}
    cout << room.size() << endl;
}
    system("pause");
    return 0;
}
