class Solution {
public:

   // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        string encoded_string;
        for (string str : strs) {
            int len = str.size();
            encoded_string += (to_string(len) + '#' + str);
        }
        return encoded_string;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        vector<string> decoded_vector;
        int size = s.size();
        int i = 0;
        while (i < size) {
            int j = i;
            while (j < size) {
                if (s[j] == '#') {
                    break;
                }
                j++;
            }
            int len = stoi(s.substr(i, j - i));
            decoded_vector.push_back(s.substr(j + 1, len));
            i = len + j + 1;
        }
        return decoded_vector;
    }
};
