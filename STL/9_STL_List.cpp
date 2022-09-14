
/*prints space separated 
elements of list A*/
void print(list<int> &A)
{
    if(A.empty())
{

    cout<<-1<<endl;
    return;
}

for(auto &i:A)
{
    cout<<i<<" ";
}
cout<<endl;
}
/*remove element from 
back of list A*/
void remove_from_back(list<int> &A)
{
   //Your code here
   A.pop_back();
}
/*remove element from 
front of list A*/
void remove_from_front(list<int> &A)
{
   //Your code here
   	A.pop_front();
}

/*inserts an element x at 
the back of the list A */
void add_to_list(list<int> &A,int x)
{
	//Your code here
  A.push_back(x);
}

/*sort the list A in ascending order*/
void sort_list(list<int> &A)
{
	//Your code here
	A.sort();
}

/*reverses the list A*/
void reverse_list(list<int> &A)
{
	//Your code here
	A.reverse();
}

/*returns the size of the list  A */
int size_of_list(list<int> &A)
{
	//Your code here
	return A.size();
}

/*inserts an element x at 
the front of the list A*/
void add_from_front(list<int> &A,int x)
{
	//Your code here
	A.push_front(x);
}
