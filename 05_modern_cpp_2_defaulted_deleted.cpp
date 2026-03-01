// Default : Interger() = default;
#include <iostream>

class Interger
{
  int m_value {0};
  public:
  Interger() = default; // C++11 feature when no need of default constructor
  //no need of definition by force, can declare & initialize with default value at a time like on top.
  //Interger()
  //{
    //  m_value = 0;
  //}
  Interger(int val)
  {  
      // When parameterised constructure is available, it demands a default constructor also
      m_value = val; 
  }
};
int main() {
    // Write C++ code here
    Interger i1;
    Interger i2(3);

    return 0;
}

--------------------------------------------------------------------------------------------------------------------------------------------

// Deleted
#include <iostream>

class Interger
{
  int m_value {0};
  public:
  Interger() = default; // C++11 feature when no need of default constructor

  // saying compiler not to allow / create default copy constructor
  Interger (const Interger & intgr) = delete; 
  void setData(int val){
      m_value = val;
  }
  // Same can be applied to member functions also,
  //In this case we are saying to compiler not to allow float value for this operation
  void setValue(float) = delete;
};
int main() {
    // Write C++ code here
    Interger i1;
    i1.setData(5);
    i1.setValue(5.5); // not allowed, compilation error: error: use of deleted function

    return 0;
}
