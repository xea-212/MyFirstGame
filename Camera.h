#pragma once
#include "Direct3D.h"
#include <DirectXMath.h>

//-----------------------------------------------------------
//カメラ
//-----------------------------------------------------------
namespace Camera
{
	//初期化（プロジェクション行列作成）
	void Initialize();

	//更新（ビュー行列作成）
	void Update();

	//視点（カメラの位置）を設定
	void SetPosition(DirectX::XMVECTOR position);

	//焦点（見る位置）を設定
	void SetTarget(DirectX::XMVECTOR target);

	//ビュー行列を取得
	DirectX::XMMATRIX GetViewMatrix();

	//プロジェクション行列を取得
	DirectX::XMMATRIX GetProjectionMatrix();
};