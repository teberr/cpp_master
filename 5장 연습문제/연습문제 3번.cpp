// Q. 후위식 단항 증가 연산자를 작성하려고 합니다. 적절한 함수 원형을 예로 들어보세요.

int operator++(int) {
	
	int n_Data = m_nData;
	m_nData++;
	return n_Data;
}
