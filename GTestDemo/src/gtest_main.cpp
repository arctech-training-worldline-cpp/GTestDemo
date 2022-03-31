#include <gtest/gtest.h>
#include <src/gtest-all.cc>
#include <iostream>
using namespace std;

class BankAccount
{
public:
	int balance;
	BankAccount()
	{
		balance = 0;
	}
	BankAccount(int val) : balance(val){}
	void deposit(int val)
	{
		balance += val;
	}
	/*bool withdraw(int val)
	{

	}*/
};


class BankAccountTest : public testing::Test
{
public:
	BankAccount *account;
	BankAccountTest()
	{
		account = new BankAccount();
	}
	~BankAccountTest()
	{
		delete account;
	}
};


TEST_F(BankAccountTest, BankAccountWithdraw)
{
	account->deposit(500);
	EXPECT_EQ(400, account->balance);
}

TEST(AccountTest, BankAccountStartEmpty)
{
	BankAccount account;
	EXPECT_EQ(0, account.balance);
}

TEST(AccountTest, BankAccountDeposit)
{
	BankAccount account;
	account.deposit(100);
	EXPECT_EQ(100, account.balance);
}


int main(int argc, char *argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
