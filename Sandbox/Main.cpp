#include "Main.h"

void Sandbox::Init() {
	light.SetPosition(20,20,20);
	light.SetColor(1, 1, 1);
	object.SetModel(Nade::OBJLoader::Load("C:/dev/Nade/res/models/dragon.obj"));
	material.SetColor(glm::vec3(1, 1, 1));
	material.SetTexture(Nade::TextureLoader::Load("C:/dev/Nade/res/textures/dragon.png"));
	object.SetMaterial(material);
	object.Translate(0, -5, 0);
	camera.Translate(0.0, 0.0, 5.0);
}

void Sandbox::Update() {
	light.Bind(shader->GetProgram());
	renderer.Draw(object, shader);
}