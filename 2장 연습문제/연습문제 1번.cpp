// Q. 다음 두 함수 원형에서 잘못된 점은 무엇인지 답하세요.
// 1.int TestFunc(int nParam1 =5 ,int nParam2, int nParam3 =10)
// 2.int TestFunc(int nParam1 =5, int nParam2)

//A. 디폴트 매개변수는 오른쪽 매개변수부터 기술해야 합니다. 또한 디폴트 매개변수가 여러 개인 경우에도 마찬가지 입니다. 따라서 위 두 함수는 아래와 같이 변경해야 합니다.
// 1. int TestFunc(int nParam1 ,int nParam2=5 , int nParam3 =10) 와 같이 오른쪽 부터 채우거나 int TestFunc(int nParam1 =5 ,int nParam2=5 , int nParam3 =10) 과 같이 매개변수를 전부 채워야합니다.
//2 .int TestFunc(int nParam1, int nParam2 =5 ) 과 같이 오른쪽 매개변수만 채우거나 (int nParam1 =10, int nParam2 =5 )과 같이 둘다 채워야 합니다.
