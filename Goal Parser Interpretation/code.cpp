class Solution {
public:
    string interpret(string command) {

        string s = "";
        for(int i=0;i<command.size();i++)
        {
            if(command[i]=='G')
            {
                s+=command[i];
            }
            else if(command[i]=='(' && command[i+1]==')')
            {
                s+='o';
                i=i+1;
            }
            else
            {
                s+="al";
                i+=3;
            }
        }
        return s;
    }
    
};