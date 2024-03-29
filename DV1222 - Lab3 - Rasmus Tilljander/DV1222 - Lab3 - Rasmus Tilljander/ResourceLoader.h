#ifndef RESOURCELOADER_H
#define RESOURCELOADER_H

#include <string>
#include "Utilities.h"

class ResourceLoader
{
public:

	static ResourceLoader* GetResourceLoader();
	void Initialize(ID3D10Device* lDevice);


#pragma region GetTextureMethods
	ID3D10ShaderResourceView* GetBlendMapTexture() const 
	{
		return mBlendMapTexture;
	}
	ID3D10ShaderResourceView* GetDarkGrassTexture() const
	{
		return mDarkGrassTexture;
	}
	ID3D10ShaderResourceView* GetFlameTexture() const
	{
		return mFlameTexture;
	}
	ID3D10ShaderResourceView* GetGrassTexture() const
	{
		return mGrassTexture;
	}
	ID3D10ShaderResourceView* GetLavaTexture() const
	{
		return mLavaTexture;
	}
	ID3D10ShaderResourceView* GetParticleTexture() const
	{
		return mParticleTexture;
	}
	ID3D10ShaderResourceView* GetStoneTexture() const
	{
		return mStoneTexture;
	}
	ID3D10ShaderResourceView* GetSunTexture() const
	{
		return mSunTexture;
	}

	ID3D10ShaderResourceView* GetBTHTexture() const
	{
		return mBTHTexture;
	}

	ID3D10ShaderResourceView* GetTreeTexture() const
	{
		return mTreeTexture;
	}

	ID3D10ShaderResourceView* GetBoxTexture() const
	{
		return mBoxTexture;
	}
#pragma endregion

private:	
	ResourceLoader();
	~ResourceLoader();
	void CreateTextureShader(ID3D10Device* lDevice, char* lTexturePath, ID3D10ShaderResourceView** lShaderResView);	
	void LoadTextures(ID3D10Device* lDevice);


private:
	static ResourceLoader* mResourceLoader;
	ID3D10ShaderResourceView* mBlendMapTexture;
	ID3D10ShaderResourceView* mDarkGrassTexture;
	ID3D10ShaderResourceView* mFlameTexture;
	ID3D10ShaderResourceView* mGrassTexture;
	ID3D10ShaderResourceView* mLavaTexture;
	ID3D10ShaderResourceView* mParticleTexture;
	ID3D10ShaderResourceView* mStoneTexture;
	ID3D10ShaderResourceView* mSunTexture;
	ID3D10ShaderResourceView* mBTHTexture;
	ID3D10ShaderResourceView* mTreeTexture;
	ID3D10ShaderResourceView* mBoxTexture;
};

#endif
