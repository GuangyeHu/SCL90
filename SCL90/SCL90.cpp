#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a[100] = {
		0,
		2, 3, 3, 1, 2,
		3, 1, 3, 3, 4,
		3, 1, 1, 3, 1,
		2, 2, 2, 4, 2,
		1, 1, 2, 1, 1,
		3, 2, 4, 4, 4,
		3, 3, 1, 2, 1,
		2, 1, 3, 2, 4,
		3, 3, 1, 4, 3,
		3, 1, 2, 2, 1,
		3, 2, 3, 4, 3,
		2, 4, 2, 1, 1,
		1, 1, 1, 1, 2,
		3, 1, 2, 1, 2,
		3, 2, 2, 1, 1,
		1, 3, 2, 3, 1,
		1, 1, 1, 2, 2,
		4, 3, 2, 1, 1 };

	float Somzatization = 0;           // 躯体化
	float ObsessiveCompulsiveSymp = 0; // 强迫症状
	float RelationshipSensitivity = 0; // 人际关系敏感
	float Depression = 0;              // 抑郁
	float Anxiety = 0;                 // 焦虑
	float Hostility = 0;               // 敌对
	float Horror = 0;                  // 恐怖
	float Crankiness = 0;              // 偏执
	float Psychotic = 0;               // 精神病性
	float Other = 0;                   // 其他
	float Total = 0;                   // 总和

	Somzatization =
		(a[1] + a[4] + a[12] + a[27] +
			a[40] + a[42] + a[48] + a[49] +
			a[52] + a[53] + a[56] + a[58]) /
		12.0;

	ObsessiveCompulsiveSymp =
		(a[3] + a[9] + a[10] + a[28] + a[38] +
			a[45] + a[46] + a[51] + a[55] + a[65]) /
		10.0;

	RelationshipSensitivity =
		(a[6] + a[21] + a[34] + a[36] + a[37] +
			a[41] + a[61] + a[69] + a[73]) /
		9.0;

	Depression =
		(a[5] + a[14] + a[15] + a[20] + a[22] +
			a[26] + a[29] + a[30] + a[31] + a[32] +
			a[54] + a[71] + a[79]) /
		13.0;

	Anxiety =
		(a[2] + a[17] + a[23] + a[33] + a[39] +
			a[57] + a[72] + a[78] + a[80] + a[86]) /
		10.0;

	Hostility =
		(a[11] + a[24] + a[63] + a[67] + a[74] +
			a[81]) /
		6.0;

	Horror =
		(a[13] + a[25] + a[47] + a[50] + a[70] +
			a[75] + a[82]) /
		7.0;

	Crankiness =
		(a[8] + a[18] + a[43] + a[68] + a[76] +
			a[83]) /
		6.0;

	Psychotic =
		(a[7] + a[16] + a[35] + a[62] + a[77] +
			a[84] + a[85] + a[87] + a[88] + a[90]) /
		10.0;

	Other =
		(a[19] + a[44] + a[59] + a[60] + a[64] +
			a[66] + a[89]) /
		7.0;

	for (int i = 1; i <= 90; i++)
	{
		Total += a[i];
	}
	Total /= 90.0;

	cout << "躯体化：     " << Somzatization << endl;
	cout << "强迫症状：   " << ObsessiveCompulsiveSymp << endl;
	cout << "人际关系敏感：" << RelationshipSensitivity << endl;
	cout << "抑郁：       " << Depression << endl;
	cout << "焦虑：       " << Anxiety << endl;
	cout << "敌对：       " << Hostility << endl;
	cout << "恐怖：       " << Horror << endl;
	cout << "偏执：       " << Crankiness << endl;
	cout << "精神病性：    " << Psychotic << endl;
	cout << "其他：       " << Other << endl;
	cout << "总分：       " << Total << endl;

	return 0;
}