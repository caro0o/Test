/**
 * @brief Test class for doxygen
 */
class Test
{
    public:
    Test(): i(0)
    {

    }

    int i;
};

int main()
{
    Test test;
    test.i = 10;
	return test.i;
}