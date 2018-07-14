#include <iostream>
class polygon {
protected:
int height;
int width;
public:
  void setvalues(int a,int b) {
    width=a;
    height=b;
  }
  polygon (){};
  virtual ~polygon (){};
};

class rectangle:public polygon {
private:


public:
  int area(){
    return width * height;
  }
  rectangle (){};
  virtual ~rectangle (){};
};

class triangle:public polygon {
private:
  /* data */

public:
  int area(){
    return width * height /2;
  }
  triangle (){};
  virtual ~triangle(){};
};
int main(int argc, char const *argv[]) {
  rectangle rect;
  triangle tri;
  rect.setvalues(4,5);
  tri.setvalues(4,5);
  std::cout << rect.area() << '\n';
  std::cout << tri.area() << '\n';
  return 0;
}
