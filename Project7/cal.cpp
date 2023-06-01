
class Account
{
public:
	explicit Account(int money)
		: balance_(money)
	{
	}

	int getBalance()
	{
		return balance_;
	}

	void deposit(int money)
	{
		balance_ += money;
	}

	void withdraw(int money)
	{
		balance_ -= money;
	}
	
	void setInterest(int value)
	{
		interest_ = value;
	}

	int getBalanceByInterest(int balance)
	{
		return balance * (100 + interest_) / 100;
	}

	void applyInterest()
	{
		balance_ = getBalanceByInterest(balance_);
	}

	int predictPrice(int i)
	{
		int temp = balance_;
		for(int t=0;t<i;t++)
		{
			temp = getBalanceByInterest(temp);
		}
		return temp;
	}

private:
	int balance_;
	int interest_ = 5;
};
