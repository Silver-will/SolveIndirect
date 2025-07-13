#include "base_renderer.h"

struct FlatlandRadianceCascadeRenderer : public BaseRenderer {
	void Init(VulkanEngine* engine) override;

	void Cleanup() override;

	void Draw() override;
	void DrawUI() override;

	void Run() override;
	void UpdateScene() override;
	void LoadAssets() override;
	void InitImgui() override;
};