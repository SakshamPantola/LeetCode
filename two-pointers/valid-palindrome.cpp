class Solution {
public:
    bool isPalindrome(string s) {
        int x = 0;
        int y = s.length() - 1;

        for (int j = 0; j < s.length(); j++) {
            if ('A' <= s[j] && s[j] <= 'Z') {
                s[j] = s[j] + 32;
            }
            if ((unsigned char)s[j] == 216 || (unsigned char)s[j] == 248) {
                s[j] = 'o';
            }
        }

        while (x < y) {
            if ((('a' <= s[x] && s[x] <= 'z') || ('0' <= s[x] && s[x] <= '9')) &&
                (('a' <= s[y] && s[y] <= 'z') || ('0' <= s[y] && s[y] <= '9'))) {
                if (s[x] == s[y]) {
                    x++;
                    y--;
                } else {
                    return false;
                }
            } else {
                if (!(('a' <= s[x] && s[x] <= 'z') || ('0' <= s[x] && s[x] <= '9'))) x++;
                if (!(('a' <= s[y] && s[y] <= 'z') || ('0' <= s[y] && s[y] <= '9'))) y--;
            }
        }

        return true;
    }
};