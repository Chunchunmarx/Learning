//Varianta Andreei
#include <vector>

using namespace std ; 

vector <int> menFromBoys (vector <int> values)
{
    
    vector<int> men ;
    vector<int> boys;
    vector<int> menThenBoys;
    for(int male : values)
    {
     if(male % 2 ==0)
     {
      men.push_back(male);
     }
     else 
     {
      boys.push_back(male);
     }
     }
     sort(men.begin(),men.end());
     sort(boys.begin(), boys.end(), greater<int>());
     for(int man : men)
     {
      if(find(menThenBoys.begin(), menThenBoys.end() , man) == menThenBoys.end())
      {
       menThenBoys.push_back(man);
      }
     }
      for(int boy : boys)
     {
      if (find(menThenBoys.begin(), menThenBoys.end(), boy)== menThenBoys.end())
      {
        menThenBoys.push_back(boy);
      }
     }
     return menThenBoys;
} 
  

//Tony 1
#include <vector>
#include <iostream>

using namespace std ; 

vector <int> menFromBoys (vector <int> values)
{  
  vector<int> men ;
  vector<int> boys;
  vector<int> menThenBoys;
  for(int male : values)
  {
    if(male % 2 ==0)
    {
      men.push_back(male);
    }
    else 
    {
      boys.push_back(male);
    }
  }
  sort(men.begin(),men.end());
  cout<<1;
  sort(boys.begin(), boys.end(), greater<int>());
  for(int man : men)
  {
    if(menThenBoys.size() == 0)
    {
      menThenBoys.push_back(man);
    }
    else if(menThenBoys[menThenBoys.size()-1] != man)
    {
      menThenBoys.push_back(man);
    }
  }
  for(auto boy : boys)
  {
    if(menThenBoys.size() == 0)
    {
      menThenBoys.push_back(boy);
    }
    else if (menThenBoys[menThenBoys.size()-1] != boy)
    {
      menThenBoys.push_back(boy);
    }
  }
  return menThenBoys;
}



// sort + unique


#include <vector>
#include <iostream>

using namespace std ; 

bool tony_compare(int a, int b)
{
  int a_modulo = a > 0 ? a : -a;
  int b_modulo = b > 0 ? b : -b;
  
  if(a_modulo % 2 == b_modulo % 2)
  {
    if(a % 2 == 0)
    {
      return a < b;
    }
    else
    {
      return b < a;
    }
  }
  else
  {
    return a % 2 == 0 ? true : false;
  }
}

vector <int> menFromBoys (vector <int> values)
{  
  sort(values.begin(), values.end(), tony_compare);
  
  values.erase(unique(values.begin(), values.end()),values.end());
  return values;
}