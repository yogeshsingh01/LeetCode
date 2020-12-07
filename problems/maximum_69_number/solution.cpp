class Solution {
public:
    int maximum69Number (int num) {
        int n = 1000, m = num;
        while(m)
        {
            if(int(m/n) == 6)
            {
                num += n*3;
                break;
            }
            m = m%n;
            n = n/10;
        }
        return num;        
    }
};