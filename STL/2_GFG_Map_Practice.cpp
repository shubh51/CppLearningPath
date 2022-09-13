

// C++ STL | Set 3 (map)
/* Adds a value with key x and value y to the map*/
void add_value(map<int,int> &m,int x,int y)
{
    //Your code here
    m[x]=y;
}

/* Returns the value of the key
 x if present else returns -1 */
int find_value(map<int,int> &m,int x)
{
  //Your code here
  map<int,int>:: iterator itr;
  int flag =0;
  for(itr = m.begin(); itr!= m.end(); itr++)
  {
      if((itr->first)==x)
      {
          flag++;
          return itr->second;
      }
  }
  if(flag==0)
  {
      return -1;
  }
  
}

/* Prints contents of the map ie keys and values*/
void print_contents(map<int,int> &m)
{
     map<int,int>:: iterator itr1;
      for(itr1 = m.begin(); itr1!= m.end(); itr1++)
      {
          cout<<itr1->first<<" "<<itr1->second<<" ";
      }
    
   //Your code here
}
