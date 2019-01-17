// Q. 만일 다음과 같은 코드에서 컴파일 오류가 없었다면 CTestData 클래스는 잠재적인 문제를 가진 것으로 볼 수 있습니다. 그 문제는 무엇이고 어떻게 막을 수 있는지 답하세요.

void TestFunc( const CTestData &param)
{

}

int _tmain(int argc, _TCHAR*argv[]){

TestFunc(5);

return 0;


}

// A. main 함수에서 TestFunc의 매개변수로 int형을 넘겨 주었음에도 불구하고 컴파일 오류가 없었다는 것은 묵시적 변환 생성자가존재 한다는 것을 의미한다.
// 이러한 경우 보통 CTestData의 생성자가 매개변수가 하나인 경우가 해당이 되는데 불필요하게 임시 객체를 만들어서 프로그램의 효율을 안좋게 만든다.
// 해결을 위해서는 클래스의 생성자에서 explicit을 붙여서 묵시적 형변환이 안되도록 만들면 된다.
// ex)

Class CTestData {
public :
    explicit CTestData(int Param): m_nData(nParam)
    {
    
    }

}