// 6. 自动售卖机.cpp : 定义控制台应用程序的入口点。
//

#include<iostream>
using namespace std;
int calculatemoney( int num, int choice)
{
	int payment;
	switch (choice)
	{
	case 1:payment = 3.00 * num; break;
	case 2:payment = 5.00 * num; break;
	case 3:payment = 7.00 * num; break;
	}
	return payment;
}

int main()
{
	cout << "欢迎使用自动售货机\n";
	cout << "您需要购买以下哪种商品，请输入相应的编号：\n";
	int numofdrink;
	int choice;
	int num;
	int coin;
	int judge;//是否退币的情况；
	
		while (1)  //死循环
		{

			cout << "-------------------" << endl;
			cout << "-1:可乐 3.00元/瓶-\n";
			cout << "-2:绿茶 5.00元/瓶-\n";
			cout << "-3:红牛 7.00元/瓶-\n";
			cout << "-0:退出-----------\n";
			cout << "-------------------" << endl;

			cin >> numofdrink;
			if (numofdrink == 0)
			{
				break;
			}
			else {
				cout << "请输入您需要购买的数量\n";
				cin >> num;

			}
			cout << "商品的总金额为：\n" << calculatemoney(num, numofdrink) << endl;
			cout << "请投入" << (int)calculatemoney(num, numofdrink) << "枚一元硬币" << endl;
			cin >> coin;
			//怎么检测投币数量呢？？
					//
			if (coin == (int)calculatemoney(num, numofdrink))
			{
				cout << "支付完成，请领取商品，感谢使用" << endl;
			}
			if (coin < (int)calculatemoney(num, numofdrink))
			{	while(1){
				cout << "支付金额不足，是否继续支付（1.继续，2.结束）" << endl;
				cin >> judge;
				if (judge == 1)
				{
					cout << "请投入剩余硬币" << endl;
					int coin2;
					cin >> coin2;
					coin = coin2 + coin;
					if (coin == (int)calculatemoney(num, numofdrink))
					{
						cout << "支付完成，请领取商品，感谢使用";
						break;
					}
					
					
					
					}
				
				if (judge == 2)
				{
					cout << "请取回之前投入硬币" << endl;
					break;
				}
			}



			}

		}

	}

