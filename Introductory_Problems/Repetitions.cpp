#include<iostream>

using namespace std;



int main(){
    string s;
    cin >> s;
    int currRep = 1;
    int maxRep = 1;
      if (s.empty()) {
        cout << 1 << endl;
        return 0;
    }
    for(int i = 1; i < s.length();i++){
       
            if(s[i] == s[i - 1]){
             
                currRep += 1;
                
            }
            else{
                currRep = 1;
                
            }
            if(currRep > maxRep){
                maxRep = currRep;
            }
        
    }
    cout << maxRep;
    return 0;

}
