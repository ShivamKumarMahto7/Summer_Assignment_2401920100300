class Solution {
public:
    string decodeString(string s) {
        stack<int> numbers;
        stack<string> words;
        string curr = "";
        int num = 0;

        for(auto ch : s) {
          if(isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if(ch == '[') {
                numbers.push(num);
                words.push(curr);
                num = 0;
                curr = "";
            }
            else if(ch == ']') {
                int rept = numbers.top();
                numbers.pop();
                string prev = words.top();
                words.pop();
                string decoded = "";

                while(rept--) {
                    decoded += curr;
                }
                curr = prev+decoded;
            }

            else{
                curr += ch;
            }
        }
        return curr;
    }
};
