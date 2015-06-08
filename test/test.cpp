// test.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>


int _tmain(int argc, _TCHAR* argv[])
{
	using namespace boost::lambda;
	typedef std::istream_iterator<int> in;

	std::for_each(
		in(std::cin), in(), std::cout << (_1 * 3) << " ");
	
	return 0;
}

