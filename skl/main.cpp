#include<DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	DxLib::SetGraphMode(1280, 720, 32);
	DxLib::ChangeWindowMode(true);
	DxLib::SetWindowText(L"2016008_è¨î®ós");
	if (DxLib_Init()) {
		return -1;
	}
	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	
	while (DxLib::ProcessMessage() == 0) {
		DxLib::ScreenFlip();
		ClearDrawScreen();



	}
	return 0;
}