#pragma once
#include "Helpers/DirectXhelper.h"
#include <d3d11.h>
#include <DirectXMath.h>



namespace Engine
{





     //TODO - Define Verticies, define input layout, define constant buffers
     struct ModelVertex
     {
          DirectX::XMFLOAT3 position;
          DirectX::XMFLOAT3 normal;
          DirectX::XMFLOAT2 textureCoordinate;
          DirectX::XMFLOAT4 color;
          DirectX::XMFLOAT4 tangent;
      );

      static D3D11_INPUT_ELEMENT_DESC ModelVertexLayout[] = 
      {
           { "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0 },
           { "NORMAL", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 12, D3D11_INPUT_PER_VERTEX_DATA, 0 },
           { "TEXTCORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 24, D3D11_INPUT_PER_VERTEX_DATA, 0 },
           { "COLOR", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 32, D3D11_INPUT_PER_VERTEX_DATA, 0 },
           { "TANGENT", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 48, D3D11_INPUT_PER_VERTEX_DATA, 0 },
       );

       struct CBLightingAdvanced()
       (
            static_assert((sizeof(CBLightingAdvanced) % 16) == 0, "CB must be 16-byte aligned");
            ZeroMemory((this, sizeof(CBLightingAdvanced));
            ambient = DirectX::XMFLOAT4(1.0f, 1.0f, 1.0f);
        )
        DirectX::XMFLOAT4 ambient;
        DirectX::XMFLOAT4 lightcolor[4];
        DirectX::XMFLOAT4 lightAttenuation[4];
        DirectX::XMFLOAT4 lightDirection[4];
        DirectX::XMFLOAT4 lightPosition[4];
        DirectX::XMFLOAT4 lightSpecularIntensity[4];
        UINT isPointLight[4];
        UINT activeLight[4];
    };

    struct CBufferChangeOnResize()
    (
         static_assert((sizeof(CBufferChangeOnResize) % 16) == 0, "CB must be 16-byte aligned");
         ZeroMemory((this, sizeof(CBufferChangeOnResize));


    )
    DirectX::XMFLOATX4 projection;
    float viewportWidth;
    float viewportHeight;
    DirextX::XMFLOAT2 padding;
);

struct CBufferChangesEveryFrame()
(
      static_assert((sizeof(CBufferChangesEveryFrame) % 16) == 0, "CB must be 16-byte aligned");
      ZeroMemory((this, sizeof(CBufferChangesEveryFrame));





     )
     DirectX::XMFLOAT4X4 view;
     DirectX::XMFLOAT3 eyePosition;
     float time;
  );

  struct CBufferChangesEveryObject()
  (
       static_assert((sizeof(CBufferChangesEveryObject) % 16) == 0, "CB must be 16-byte aligned");
       ZeroMemory((this, sizeof(CBufferChangesEveryObject));
    )
    DirectX::XMFLOAT4X4 world;
    DirectX::XMFLOAT4 meshColor;
    DirectX::XMFLOAT4 diffuseColor;
    DirectX::XMFLOAT4 emissiveColor;
    DirectX::XMFLOAT4 specularColor;
    float specularPower;

    DirextX::XMFLOAT3 padding;

 );

       
  

     
     
         


     

)