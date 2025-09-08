#pragma once
#include "Vector2.h"
#include "Geometry.h"

class Collision
{
public:
	Collision();
	~Collision();

	void Init();	// ������
	void End();		// �I������
	void Update();	// ���t���|���̍X�V����
	void DrawBoxCollider(unsigned int color);	// ��`�̓����蔻���`��
	void DrawCircleCollider(unsigned int color);

	// �Z�b�^�[

	/// <summary>
	/// ���S���W�̃Z�b�g
	/// </summary>
	/// <param name="x"></param>
	/// <param name="y"></param>
	/// <param name="width"></param>
	/// <param name="height"></param>
	void SetCenter(float x, float y, float width, float height);
	
	void SetRect(float x, float y, float width, float height);

	void SetCircle(float x, float y, float radius);

	// �Q�b�^�[

	Vector2 GetCenter() const;

	float GetWidth() const;

	float GetHeight() const;

	float GetLeft() const { return m_left; }
	float GetTop() const { return m_top; }
	float GetRight() const { return m_right; }
	float GetBottom() const { return m_bottom; }
	float GetRadius() const { return m_radius; }

	/// <summary>
	/// ��`���m�̓����蔻��
	/// </summary>
	/// <param name="rect"></param>
	/// <returns></returns>
	bool IsCollisionRectToRect(const Collision& rect);

	/// <summary>
	/// �~�Ɛ��̓����蔻��
	/// </summary>
	/// <param name="circle">�~�̔���</param>
	/// <returns></returns>
	bool IsCollisionLineToCircle(const Collision& circle);

	/// <summary>
	/// ��`�Ɖ~�̓����蔻��
	/// </summary>
	/// <param name="circle"></param>
	/// <returns></returns>
	bool IsCollisionRectToCircle(const Collision& circle);


private:


	float m_left;
	float m_top;
	float m_right;
	float m_bottom;
	float m_radius;

};

