#include<DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	
	DxLib::SetGraphMode(640, 480, 32);
	DxLib::ChangeWindowMode(true);
	DxLib::SetWindowText(L"2016018_‚ß‚®‚Ý");
	if (DxLib_Init()) {
		return -1;
	}
	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	while (DxLib::ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0) {
		DxLib::ScreenFlip();
	}
	return 0;
}
