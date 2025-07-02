#pragma once
#include "Direct3D.h"
#include <DirectXMath.h>

//コンスタントバッファー
struct CONSTANT_BUFFER
{
	DirectX::XMMATRIX	matWVP;
};

class Quad
{
	ID3D11Buffer* pVertexBuffer_; //頂点バッファ
	ID3D11Buffer* pIndexBuffer_;  //インデックスバッファ
	ID3D11Buffer* pConstantBuffer_;	//コンスタント(定数)バッファ
public:
	Quad();
	~Quad();
	HRESULT Initialize();
	void Draw(DirectX::XMMATRIX& worldMatrix);
	void Release();
};