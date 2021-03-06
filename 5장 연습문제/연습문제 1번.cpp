// Q. 대입 연산자 오버로딩 시 주의해야 할 점(두가지)은 무엇인지, 그리고 이유를 답하세요.

// A. 첫째로 자기 자신을 대입하는 경우 a=a 와 같은 경우를 주의해야 한다. 보통 대입 전 기존 데이터를 삭제하므로 자기 자신에게 대입하기전 원본 데이터가 삭제 되는 불상사가 일어날 수 있기 때문이다.
// 둘째로 a=b=c와 같이 대입 연산의 결과가 클래스의 참조자가 필요한 경우를 주의해야 한다. 일반적인 경우에는 반환 형식을 void로 해도 문제가 없지만 a=b=c의 경우 b=c의 결과 값이 다시 a와 연산이 일어나야 하므로 결과 값을 참조자로 돌려줘야 한다.  
