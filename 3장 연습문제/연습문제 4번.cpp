// Q. 다음 코드에서 잘못된 점은 무엇이며 문법 오류를 피하려면 어떻게 수정해야 하는지 답하세요.

class CRefTest
{
public:
    CRefTest(int &rParam)
    {
        m_nData= rParam;
    }
    
    int GetData(void){ return m_nData;}
    
    private:
        int &m_nData;
};

// A. m_nData는 참조형 변수이므로 생성자에서 변수를 초기화할 때 생성자 초기화 목록을 통해 초기화를 해야 한다. 

class CRefTest
{
public:
    CRefTest(int &rParam):m_nData(rParam) {};

    int GetData(void){ return m_nData;}
    
    private:
        int &m_nData;
};