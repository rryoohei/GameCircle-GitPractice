//
// GameMain.cpp
//
// �Q�[���J��������Git���K�p�v���W�F�N�g
//



// �w�b�_�t�@�C���̓ǂݍ��� ========================================================
#include "DxLib.h"
#include "GameMain.h"



// �O���[�o���ϐ��̒�` ============================================================
int g_inputState;		// ���͏��




// �֐��̒�` ======================================================================

// -------------------------------------------------
// ����������
// -------------------------------------------------
void Initialize(void)
{
}

// -------------------------------------------------
// �X�V����
// -------------------------------------------------
void Update(void)
{
	// �W���C�p�b�h�ƃL�[�̓��͏�Ԃ��擾
	g_inputState = GetJoypadInputState(DX_INPUT_KEY_PAD1);
}

// -------------------------------------------------
// �`�揈��
// -------------------------------------------------
void Render(void)
{
}

// -------------------------------------------------
// �I������
// -------------------------------------------------
void Finalize(void)
{
}