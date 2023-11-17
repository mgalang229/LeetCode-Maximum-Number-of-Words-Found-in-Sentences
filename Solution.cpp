class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int best = 0;
        for (string& sentence : sentences) {
            int cnt = 0;
            for (char& c : sentence) {
                cnt += (c == ' ');
            }
            best = max(best, cnt + 1);
        }
        return best;
    }
};
