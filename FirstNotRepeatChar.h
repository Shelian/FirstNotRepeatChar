#ifndef __FIRSTNOTREPEATCHAR_H__
#define __FIRSTNOTREPEATCHAR_H__

char FirstNotRepeatChar(char* str)
{
	size_t length = strlen(str);
	size_t size = 256;
	char pstr[256] = {0};
	for (int i = 0; i < length; i++)
	{
		pstr[str[i]]++;
	}

	for (int i = 0; i < 256; i++)
	{
		if (pstr[i] == 1)
		{
			return i;
		}
	}

	return '\0';

}

void TestFirst()
{
	cout << FirstNotRepeatChar("aaaaabbbbccccddee") << endl;
}



#endif //__FIRSTNOTREPEATCHAR_H__