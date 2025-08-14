class Solution {
public:
    string largestGoodInteger(string num) {
        int large = num[0];
        int count = 1;
        string str = "";

        for(int i=1;i<num.size();i++)
        {
            if(large == num[i] && count <3) count++;
            else
            {
                if(count == 3)
             { 
                string triple(3, large);
                if(str.empty() || triple > str) str =triple;

             }
                large = num[i];
                count = 1;
            }
        }
        if(count == 3) 
        {
            string triple(3,large);
            if(str.empty() || str < triple) str = triple;

        }
        return str;

    }
};