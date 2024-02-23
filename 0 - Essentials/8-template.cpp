#include <iostream>

template<typename T>
class Calculator{
  private:
    T num1;
    T num2;
  public:
    Calculator(T n1, T n2);
    T add();
    T sub();
    T mul();
    T div();
    T getNum1();
    T getNum2();
    void firstNum(T newVal);
    void nextVal(T newVal);
    void update(T nextVal);
};

template<typename T>
Calculator<T>::Calculator(T n1, T n2){
  this->num1 = n1;
  this->num2 = n2;
};

template<typename T>
T Calculator<T>::add(){
  T result = num1 + num2;
  update(result);
  return result;
};

template<typename T>
T Calculator<T>::sub(){
  T result = num1 - num2;
  update(result);
  return result;
};

template<typename T>
T Calculator<T>::mul(){
  T result = num1 * num2;
  update(result);
  return result;
};

template<typename T>
T Calculator<T>::div(){
  T result = num1 / num2;
  update(result);
  return result;
}

template<typename T>
void Calculator<T>::update(T newVal){
  num1 = newVal;
  num2 = 0;
}

template<typename T>
void Calculator<T>::nextVal(T nextVal){
  num2 = nextVal;
}

template<typename T>
void Calculator<T>::firstNum(T newVal){
  num1 = newVal;
}
template<typename T>
T Calculator<T>::getNum1(){
  return num1; 
}
template<typename T>
T Calculator<T>::getNum2(){
  return num2; 
}

int main(){
  using namespace std;

  cout << "--- Calculator ---" << endl;
  int num1;
  Calculator<int> calc(0,0);

  //1 - Get the first number input
  cin >> num1;
  calc.firstNum(num1);
  bool running = true;
  while(running){
    //2 - Get the operation type
    char op;
    cin >> op;
    //3 - Get the second number + perform operation
    int num2;
    cin >> num2;
    calc.nextVal(num2);

    switch (op)
    {
    case '+':
      calc.add();
      break;
    case '-':
      calc.sub();
      break;
    case '/':
      calc.div();
      break;
    case 'x':
      calc.mul();
      break;
    default:
      cout << "Exiting..." << endl;
      break;
    }
    //4 - Save result to first number + GOTO 2
    std::cout << "Result: " << calc.getNum1() << std::endl;

    //5 - Finish program
  }


  return 0;
}