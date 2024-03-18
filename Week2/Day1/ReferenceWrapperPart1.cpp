#include<iostream>
#include<functional>

void Magic(int& ref){

}



int main(){
     int data{10};
     //implicit conversion of reference wrapper into reference.
     std::reference_wrapper<int>refWrap{data};
     Magic(refWrap);
     //now you can store references in refWrap.
     std::reference_wrapper<int> arr[]{refWrap};
}