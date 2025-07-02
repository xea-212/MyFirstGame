#pragma once
#include "Direct3D.h"
#include <DirectXMath.h>

//-----------------------------------------------------------
//�J����
//-----------------------------------------------------------
namespace Camera
{
	//�������i�v���W�F�N�V�����s��쐬�j
	void Initialize();

	//�X�V�i�r���[�s��쐬�j
	void Update();

	//���_�i�J�����̈ʒu�j��ݒ�
	void SetPosition(DirectX::XMVECTOR position);

	//�œ_�i����ʒu�j��ݒ�
	void SetTarget(DirectX::XMVECTOR target);

	//�r���[�s����擾
	DirectX::XMMATRIX GetViewMatrix();

	//�v���W�F�N�V�����s����擾
	DirectX::XMMATRIX GetProjectionMatrix();
};