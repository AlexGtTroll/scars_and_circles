#pragma once

#include <map>
#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

namespace Belonogov
{
	class Assets
	{
	public:
		Assets() {}
		~Assets() {}

		void LoadTexture(string name, string fileName);
		Texture& GetTexture(string name);

		void LoadFont(string name, string fileName);
		Font& GetFont(string name);

	private :
		map<string, Texture> _textures;
		map<string, Font> _fonts;
	};
}