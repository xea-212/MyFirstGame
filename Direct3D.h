#pragma once
#include <d3d11.h>

#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "d3dcompiler.lib")

#define SAFE_DELETE(p) if(p != nullptr){ delete p; p = nullptr;}
#define SAFE_RELEASE(p) if(p != nullptr){ p->Release(); p = nullptr;}

namespace Direct3D
{
	//extern�͂Ȃ񂩒T���݂����Ȃ��
	extern ID3D11Device* pDevice;
	extern ID3D11DeviceContext* pContext;

	//������
	HRESULT Initialize(int winW, int winH, HWND hWnd);

	//�V�F�[�_�[����
	HRESULT InitShader();

	//�`��J�n
	void BeginDraw();

	//�`��I��
	void EndDraw();

	//���
	void Release();
};