#include "CppUnitTest.h"
#include "..\ParaKeyValue\ParaKeyValue.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ParaKeyValueTests
{
	TEST_CLASS(ParaKeyValueTests)
	{
	public:
		TEST_METHOD(ParaGetters)
		{
			Para<int, int> p(123, 456);
			Assert::AreEqual(123, p.getK());
			Assert::AreEqual(456, p.getV());
		}
		TEST_METHOD(ParaCopy)
		{
			Para<string, string> p("Key", "Value");
			Para<string, string> q(p);
			Assert::AreEqual(p.getK(), q.getK());
			Assert::AreEqual(p.getV(), q.getV());
		}
		TEST_METHOD(ParaComparators)
		{
			Para<int, int> p1(7, 4), p2(7, 9);
			Para<string, string> p("ABC", "XYZ");
			Assert::IsFalse(cmpK(p1, p2));
			Assert::IsTrue(cmpV(p1, p2));
		}
		TEST_METHOD(ParaOutput)
		{
			stringstream ss;
			Para<string, string> p("ABC","XYZ");
			string s1("<ABC:XYZ>"), s2;
			ss<<p;
			ss>>s2;
			Assert::AreEqual(s1, s2);
		}
	};
}
