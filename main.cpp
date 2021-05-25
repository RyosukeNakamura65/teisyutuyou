#include<DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE,LPSTR,int)
{

	SetWindowText(L"1916031_’†‘º—º‰î");
	ChangeWindowMode(true);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);
	
	while (ProcessMessage() != -1) {
		ClearDrawScreen();

		ScreenFlip();
	}
	DxLib_End();
	return 0;
}