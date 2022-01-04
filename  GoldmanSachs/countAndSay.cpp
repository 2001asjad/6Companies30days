string encode(string src)
{     
  //Your code here 
    string ans;
    int c=1;
    ans+=src[0];
    for(int i=1;i<src.size();i++)
    {
        if(src[i]!=src[i-1])
        {
            ans+=to_string(c);
            ans+=src[i];
            c=1;
        }
        else
        c++;
    }
    ans+=to_string(c);
    return ans;
}     