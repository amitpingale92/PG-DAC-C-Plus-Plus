int age = 25;

namespace Jack
{
	int age = 27;
}

int main(void)
{
	int age = 26;

	return ::age + age + Jack::age;
}

