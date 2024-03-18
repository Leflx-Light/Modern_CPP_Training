/*
  C++ 11
  std::set was built on red black tree.
  std::unordered_set is built on hash table.





11, 12, 11, 14, 11,13

hash function : mode 4

11 % 4 = 3
12 % 4 = 0
11 % 4 = 3 // key already exist.  compiler will not reach this line 



SET HASH TABLE

key value 
12    12
11    11



unordered ----> related to hash table, hashing, hash values.

*/


#include<iostream>
#include<unordered_set>


int main(){
    std::unordered_set<int>s1{11,12,11,13,11,14};

    auto pair = s1.insert(11);
    if(pair.second){
        std::cout<<"Element added"<<std::endl;
    }else{
        std::cout<<"Element not added"<<std::endl;
    }

}

