#ifndef MODAPI_CLIENT_GUI_WIDGET_H
#define MODAPI_CLIENT_GUI_WIDGET_H

#include "config.h"

enum
{
	MODAPI_INPUT_CTRL=0x1,
	MODAPI_INPUT_SHIFT=0x2,
	MODAPI_INPUT_ALT=0x4,
};

class CModAPI_ClientGui_Rect
{
public:
	int x;
	int y;
	int w;
	int h;
	
public:
	CModAPI_ClientGui_Rect();
	CModAPI_ClientGui_Rect(int X, int Y, int W, int H);
	
	void CenterIn(const CModAPI_ClientGui_Rect& Rect);
	bool IsInside(int X, int Y);
};

class CModAPI_ClientGui_Widget
{
protected:
	static float s_LayoutOpacity;
	static float s_LayoutCornerRadius;
	
	static int s_ButtonInnerMargin;
	static float s_ButtonOpacity;
	static float s_ButtonCornerRadius;

protected:
	class CModAPI_ClientGui_Config *m_pConfig;

public:
	CModAPI_ClientGui_Rect m_Rect;

protected:
	CModAPI_ClientGui_Widget(class CModAPI_ClientGui_Config *pConfig);
	
	class IGraphics *Graphics() { return m_pConfig->m_pGraphics; };
	class ITextRender *TextRender() { return m_pConfig->m_pTextRender; };
	class CRenderTools *RenderTools() { return m_pConfig->m_pRenderTools; };
	class IInput *Input() { return m_pConfig->m_pInput; };
	
public:
	virtual ~CModAPI_ClientGui_Widget();
	
	virtual void Update();
	virtual void Render() = 0;
	
	virtual void OnMouseOver(int X, int Y, int KeyState);
	virtual void OnMouseMotion(int X, int Y, int KeyState);
	virtual void OnMouseButtonClick(int X, int Y);
	virtual void OnMouseButtonRelease();
	virtual void OnInputEvent();
	
	void SetRect(const CModAPI_ClientGui_Rect& Rect);
	void SetX(int y);
	void SetY(int y);
	void SetWidth(int w);
	void SetHeight(int w);

};

#endif
