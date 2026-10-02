class Solution {
   public:
    string encode(vector<string>& strs) {
        string encoded_string = "";
        for (auto str : strs) {
            encoded_string = encoded_string + to_string(str.size()) + "#" + str;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs = {};
        size_t size = 0;
        bool label = false;
        string buffer = "";
        for (char c : s) {
            if (label == false) {
                if (c <= '9' && c >= '0') {
                    size = 10 * size + c - '0';
                } else if (c == '#') {
                    label = true;
                    if (size == 0) {
                        decoded_strs.push_back(buffer);
                        label = false;
                    }
                }
            } else {
                if (size) {
                    buffer += c;
                    size--;
                    if (size == 0) {
                        decoded_strs.push_back(buffer);
                        buffer = "";
                        label = false;
                    }
                }
            }
            
        }
        return decoded_strs;
    }
};
