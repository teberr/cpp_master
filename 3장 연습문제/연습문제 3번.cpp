//Q. 다음 코드에서 'm_nData(nParam)'이 속한 부분을 무엇이라 부르는지 답하세요.

CTest(int nParam)
    : m_nData(nParam)
{

}

// A. 생성자 초기화 목록이라 부르며 생성자가 호출됨과 동시에 변수를 초기화 할때 사용한다. 특히 참조형 변수의 경우 생성자 초기화 목록으로 초기화 해야한다.