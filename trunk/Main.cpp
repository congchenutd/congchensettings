#include "MySetting.h"

class UserSetting : public MySetting<UserSetting>
{
public:
	UserSetting(const QString& userName) : MySetting(userName) {}
};

int main(int argc, char* argv[])
{
	UserSetting* setting = MySetting<UserSetting>::getInstance("Global");
	setting->setValue("name", "chencong");
	MySetting<UserSetting>::destroySettingManager();
	return 0;
}