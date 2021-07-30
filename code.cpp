class Solution {
public:
    string interpret(string c) {
        vector<char>A;
        A.push_back(c[0]);
        for(int s=1;s<c.size();s++)
        {
            if(c[s]==')')
            {
                if(A.back()=='(')
                {
                    A.pop_back();
                    A.push_back('o');
                }
            }
            else if(c[s]=='(')
            {
                A.push_back(c[s]);
            }
            else if(c[s]=='G' || c[s]=='a' || c[s]=='l')
            {
                if(A.back()=='(')
                {
                    A.pop_back();
                    A.push_back(c[s]);
                }
                else
                {
                    A.push_back(c[s]);
                }
                
            }
        }
        string p(A.begin(),A.end());
        return p;
    }
};
