#pragma once

#include <Wrapper/References.h>

namespace Skyrim
{
	namespace Script
	{
		namespace Papyrus
		{
			public ref class Game
			{
			public:

				static Script::Actor^ GetPlayer();
			};
		}
	}
}