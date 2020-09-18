#include "color.h"   // including the user defined functions
#include "gtest/gtest.h"


namespace{

TEST(Color, DefaultConstructor) {
	Color c1;
	EXPECT_EQ(black, c1.getClr());
}

TEST(Color, ParameterizedConstructor) {
	Color c1(1,0,0);
	EXPECT_EQ(red, c1.getClr());
}

TEST(Color, ParameterizedConstructor1) {
	Color c1(0);
	EXPECT_EQ(red, c1.getClr());
}

TEST(Color, ParameterizedConstructor2) {
	Color c1(white);
	EXPECT_EQ(white, c1.getClr());
}



TEST(Color, DisplayTest) {
	Color c1(green);
	string ExpectedOut = "1\n";
	testing::internal::CaptureStdout();
	c1.display();
	string ActualOut = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(Color, invertTest) {
	Color c1(white);
	c1.invert();
	EXPECT_EQ(black,c1.getClr());
}

}// end of the name space
