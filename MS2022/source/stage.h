/*==================================================================================================
	MS2022
	[stage.h]
	�E�X�e�[�W�@�O��
----------------------------------------------------------------------------------------------------
	2021.10.18 @Author OTA KANAME
====================================================================================================
	History
		211018 �쐬

/*================================================================================================*/
#pragma once

#include "game_object.h"
#include "model.h"
#include "shader.h"

// �L���[�u�N���X�i�Q�[���I�u�W�F�N�g�j
class CStage : public CGameObject {
private:
	CModel* m_Model;

	CShader* m_Shader;

public:

	void Init();
	void Uninit();
	void Update();
	void Draw();

};