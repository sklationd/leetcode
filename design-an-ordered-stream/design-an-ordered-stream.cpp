class Item {
public:
    int id=0;
    string val;
    
    Item(int n, string s){
        id = n;
        val = s;
    }
};

class OrderedStream {
public:
    vector<Item> S;
    int index = 0;
    
    OrderedStream(int n) {
        S = vector<Item>(n, Item(0,""));
    }
    
    vector<string> insert(int id, string value) {
        S[id-1].id = id;
        S[id-1].val = value;
        vector<string> result;
        for(index;index<S.size();index++){
            if(S[index].id!=0){
                result.push_back(S[index].val);
            } else {
                break;
            }
        }
        return result;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(id,value);
 */