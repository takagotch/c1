//wcstok_s(), strtok(), strtok_s(), wcsspn(), wcscspn(), wcsstr(), wcspbrk()

#include <wchar.h>
wchar_t* wcstok(wchar_t* restrict s1, const wchar_t* restrict s2,
		wchar_t** restrict ptr);

wchar_t line[] = L" mul eax,[ebp+4] ; Multipy; by y\n";

const wchar_t* mnemonic = wcstok(line, L" \t");
const wchar_t* arg1 = wcstok(NULL, L",");

const wchar_t* arg2 = wcstok(NULL, L";\n");

const wchar_t* comment = wcstok(NULL, L"\n\r\v\f");
wprintf(L"Mnemonic: %ls\n"
	L"1st argument: %ls\n"
	L"2nd argument: %ls\n"
	L"Comment: %ls\n\n",
	mnemonic, arg1, arg2, comment);


