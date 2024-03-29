#ifndef RENDERER_H
#define RENDERER_H

#include "Utilities.h"
#include "Screen.h"
#include "ResourceLoader.h"

class Renderer
{
public:
		Renderer();
		~Renderer();
		void Update();
		void Draw();
		void Initialize(HWND* lHwnd);
private:
		void CreateSwapChain();
		void SetUpViewPort();
		void CreateBackBufferAndRenderTarget();
private:
	UINT					mWidth, mHeight;
	HWND*					hWnd;

	D3D10_DRIVER_TYPE       mDriverType;
	ID3D10Device*           mDevice;
	IDXGISwapChain*         mSwapChain;
	ID3D10RenderTargetView* mRenderTargetView;
	ID3D10Texture2D*        mDepthStencil;
	ID3D10DepthStencilView* mDepthStencilView;
	ID3D10RasterizerState*	mRastState;

	Screen* mScreen;


};

#endif
