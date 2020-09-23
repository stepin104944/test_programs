
#include"complex.cpp"
#include<iostream>
#include<gtest/gtest.h>
TEST(a,b){
	Complex<int> p1(43,56);
	ASSERT_EQ(43, p1.real());
	ASSERT_EQ(56, p1.image());
	std::string ExpectedOut="43,56";
	testing::internal::CaptureStdout();
	p1.display();
	std::string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
int main(int argc, char **argv)
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }
