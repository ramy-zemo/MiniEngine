#pragma once
#include "Core/EngineBase.h"

#include <glm/glm.hpp>

#include "GraphicsPipeline.h"


namespace Engine
{
	class Mesh;

	class Renderer
	{
	public:
		static void Initialize();
		static void Shutdown();

		static void Clear();
		static void SetClearColor(const glm::vec4 &clearColor);

		static void RenderLines(bool enable = true);
		static void SetLineThickness(float thickness);

		static void SubmitQuad(const SharedPtr<Shader> &shader);
		static void SubmitLine(const glm::vec3 &from, const glm::vec3 &to, const glm::vec4 color = glm::vec4(0.0f), float thickness = 1.0f);

		static void SubmitMesh(const SharedPtr<Mesh> &mesh, const glm::mat4 &transform);
		static void SubmitMeshWithShader(const SharedPtr<Mesh>& mesh, const glm::mat4& transform, const SharedPtr<Shader>& shader);

		static void SubmitPipeline(const GraphicsPipeline &pipeline);
	};
}