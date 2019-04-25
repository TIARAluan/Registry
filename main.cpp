#include <Registry.hpp>
#include <atlbase.h>
int main(void)
{
    HKEY hKey;
    RegCreateKey(HKEY_CURRENT_USER, "Software\\vscodetest\\test", &hKey);
    RegSetValue(hKey, NULL, REG_SZ, 1019Y90YYY, strlen(RegCode));
    RegCloseKey(hKey);
}