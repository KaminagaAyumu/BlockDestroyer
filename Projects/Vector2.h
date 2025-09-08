#pragma once
struct Vector2
{

public:
	/*�����o�ϐ�*/
	float X;
	float Y;

public:
	/*�R���X�g���N�^(�ƃf�X�g���N�^)*/
	//�f�t�H���g�R���X�g���N�^
	Vector2() :X(0.0f),Y(0.0f){}
	//�����t���R���X�g���N�^
	Vector2(float posX, float posY) : X(posX),Y(posY){}
	//�f�X�g���N�^
	~Vector2() {}

	/*�����o�֐�*/
	//�x�N�g���̑傫����Ԃ�
	float Length() const;
	//�x�N�g���̑傫����2���Ԃ�
	float Magnitude() const;
	//���K�����ꂽ�x�N�g����Ԃ��i�P�ʃx�N�g����Ԃ��j
	Vector2 Nomalize() const;

	/*static�����o�ϐ�*/
	// ���ς�Ԃ�
	static float Dot(const Vector2& left, const Vector2& right);
	//�ˉe�x�N�g��(left����right�Ɏˉe)
	static Vector2 Project(const Vector2& left, const Vector2& right);
	// �^���O�ς�Ԃ�
	// ���Ȃ�AA��B�̂Ȃ��p�͍���(���̒l�Ȃ�E�j
	//(���Ȃ��p�Ƃ�0<��<180)
	static float CrossZ(const Vector2& left, const Vector2& right);
};

/*���Z�q�I�[�o�[���[�h*/
//�x�N�g�����m�̑����Z
Vector2 operator+(const Vector2& left,const Vector2& right);
//�x�N�g�����m�̈����Z
Vector2 operator-(const Vector2& left,const Vector2& right);
// ����*�x�N�g��
Vector2 operator*(const float& left,const Vector2& right);
// �x�N�g��*����
Vector2 operator*(const Vector2& left, const float& right);
//�x�N�g��/����
Vector2 operator/(const Vector2& left,const float& right);



