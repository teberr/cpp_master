//Q.다음 두 함수는 문법적으로 문제가 없습니다. 하지만 호출하는 코드에서는 문제가 발생할 수 있습니다. 어떤 문제인지 답하시오.

//  void TestFunc(int a)
//  {
//      std::cout << "TestFunc(int)" << std::endl;
//  }
//
//  void TestFunc(int a, int b=10)
//  {
//      std::cout << "TestFunc(int,int)" <<std :: endl;
//  }


//A. 두 함수는 각각은 문제가 없지만 같이 정의 되어있을 경우 호출할 때 애매하여 문제가 발생합니다. 예를 들어 TestFunc(3)으로 호출하면 두 함수중 어느 함수를 호출할지 결정할 수 없으므로 문제가 발생합니다.
