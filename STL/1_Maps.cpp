
class Solution
{
    /*
    Twice Counter GFG problem
    Solved Using Unurdered_map
    
    Given a list of N words.
    Count the number of words that appear exactly twice in the list.
    */
    public:
        int countWords(string list[], int n)
        {
            // map for storing words with their frequency 
           unordered_map<string, int>wordFreq; 
           for(int i =0; i < n; i++)
                wordFreq[list[i]]++;
            int counter = 0; 
            for(auto x : wordFreq)
            {
                // checking whether particular word is having apperance twice or not 
                if(x.second == 2)
                    counter++; 
            }
            return counter;
}

  
    

};
