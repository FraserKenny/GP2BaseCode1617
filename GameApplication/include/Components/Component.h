#ifndef _COMPONENT_H
#define _COMPONENT_H

#include "Common.h"

class GameObject;

class IComponent
{
public:
	virtual ~IComponent() {};

	virtual const string& getName() = 0;
	virtual void setName(const string& name) = 0;
	virtual void setParent(GameObject * gameObject) = 0;
	virtual GameObject * getParent() = 0;

	virtual void onUpdate() = 0;
	virtual void onRender() = 0;
	virtual void onInit() = 0;
	virtual void onDestroy() = 0;
};


class BaseComponet :public IComponent
{
public:
	BaseComponet();
	virtual ~BaseComponet();


	const string& getName();
	void setName(const string& name);
	void setParent(GameObject * gameObject);
	GameObject * getParent();

	virtual void onUpdate();
	virtual void onRender();
	virtual void onInit();
	virtual void onDestroy();
protected:
	GameObject * m_ParentGameObject;
	string m_Name;
};
#endif
