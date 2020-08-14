class CombinationIterator {
public:
    vector<string> C;
    int ind = 0;
    bool nextbm(vector<int> &V, int N, int cl){
        int n = N;
        if(V.size()==0){
            for(int i=0;i<cl;i++){
                V.push_back(i);
            }
            return true;
        }
        for(int i=V.size()-1;i>=0;i--){
            if(V[i] == n){
                n--;
            } else {
                V[i]+=1;
                for(int j=i+1;j<V.size();j++){
                    V[j]=V[j-1]+1;
                }
                break;
            }
        }
        return n>N-cl;
    }
    
    CombinationIterator(string characters, int combinationLength) {
        vector<int> bm;
        int index = 0;
        while(nextbm(bm, characters.length()-1, combinationLength)){
            string s;
            for(int i=0;i<bm.size();i++){
                s+=characters[bm[i]];   
            }
            C.push_back(s);
        }
        cout << C.size() << endl;
    }
    
    string next() {
        return C[ind++];
    }
    
    bool hasNext() {
        return ind < C.size();
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */