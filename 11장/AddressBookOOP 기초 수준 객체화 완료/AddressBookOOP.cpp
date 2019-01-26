// AddressBookOOP.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "UserInterFace.h"
#include "MyList.h"


int main()
{	
	CMyList DB;
	CUserInterFace UI(DB);
	UI.Run();
    return 0;
}

