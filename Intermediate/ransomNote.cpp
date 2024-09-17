383. Ransom Note
//brute force: non optimized initial boomer solution
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool match = false;
        for(int i=0; i<ransomNote.size(); i++){
            for(int j=0; j<magazine.size(); j++){
                if(ransomNote[i] == magazine[j]){
                    match = true;
                    magazine.erase(j, 1);
                    break;
                }
            }
        }
        return match;
    }
};
