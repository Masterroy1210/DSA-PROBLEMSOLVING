//PRINT ALL COMBINATIONS THAT SUM UP TO N;
    #include<iostream>
    #include<vector>
    using namespace std;

    void printcombo(int n ,vector<int>&vec){
        if(n==0){
            for(auto it:vec){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        for(int i=1;i<=n;i++){
            vec.push_back(i);
            printcombo(n-i,vec);
            vec.pop_back();
        }
    }




    int main(){
        int n;
        cin>>n;
        vector<int>vec;
        printcombo(n,vec);
        return 0;
    }
