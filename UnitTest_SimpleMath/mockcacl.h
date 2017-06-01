
#include "caculation.h"
#include <gmock/gmock.h>
class MockCacl :public Caculation
{
public:
	MOCK_METHOD2(Add, int(int a, int b));
};