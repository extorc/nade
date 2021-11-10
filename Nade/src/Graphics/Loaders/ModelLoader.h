#pragma once
#include "../Components/RawModel.h"
#include "glad/glad.h"

namespace Nade {
	class ModelLoader {
	public:
		static RawModel Load(float position[], unsigned int index[], float coords[], int vsize, int isize, int csize);
	};
}