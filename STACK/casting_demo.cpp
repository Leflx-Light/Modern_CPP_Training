#include<iostream>
//dynamic method dispatch.
class Parent
{
private:
    /* data */
public:
    Parent(/* args */) {}
    virtual void Magic()=0;
    virtual ~Parent() {}
};



class Child:public Parent
{
private:
    /* data */
public:
    Child(/* args */) {}
    ~Child() {}
    void ChildDisplay(){std::cout<<"Done\n";}
    void Magic() override{std::cout<<"Magic done\n";}
};



int main(){
    float f1 = 10.21f;
  //  int n1 = (float) "harshit"; // C STYLE CAST
    int n1 = static_cast<int>(f1);

    //static_assert() // modern cpp keyword

    //TYPE-2 Cast when parent-child runtime polymorphism is in picture.
    //2.a) converting reference
     Parent *ptr = new Child();
     try{
            Child& ch  = dynamic_cast<Child&>(*ptr);
            ch.ChildDisplay();
     }catch(std::bad_cast& ex){
        //do something about failure.
     }
    

   /*
    if you want to use dynamic_cast , atleast one function of base class should marked virtual.
    mark virtual of base destructor.


      inheriteance
      upcasting
      ther eis fucntion in child class n not mention in base class, use ---dynamic_cast
   */



    //2.b) converting pointer: if conversion fails , we get nullptr;
    // Parent *ptr = new Child(); //upcasting
    // ptr->Magic();

    // Child *temp = dynamic_cast<Child*>(ptr);
    // if(temp != nullptr){
    //     temp->ChildDisplay();
    // }
   



}