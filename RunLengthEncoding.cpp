string encode(string src)
{     
  //Your code here 
  int c=1;
  string ans="";
  for(int i=1;src[i];i++){
      if(src[i] == src[i-1])
      c++;
      else{
          ans+=(src[i-1]+to_string(c));
          c=1;
      }
  }
  ans+=(src[src.size()-1]+to_string(c));
  return ans;
}
