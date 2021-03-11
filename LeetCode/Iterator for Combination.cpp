class CombinationIterator {
    vector<string> result;
    int valNext = 0;
    void combination(string chara,int combinationLength, int charLength,int curr,string str,int comb){
        //cout<<str<<endl;
        if(str.size() == comb) {
            result.push_back(str);
            return;
        }
        for(int i=curr;i+combinationLength<=charLength;++i){
            combination(chara,combinationLength-1,charLength,i+1,str+chara[i],comb);
        }
    }
public:
    CombinationIterator(string characters, int combinationLength) {
        combination(characters,combinationLength,(int)characters.size(),0,"",combinationLength);
    }
    
    string next() {
        return result[valNext++];
    }
    
    bool hasNext() {
        return valNext < result.size();
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */