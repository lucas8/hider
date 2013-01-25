
#ifndef DEF_PICTURE
#define DEF_PICTURE

#include <SDL.h>
#include <boost/filesystem/path.hpp>

class Picture
{
	public:
		Picture(const boost::filesystem::path& path);
		~Picture();

		char getPart(Uint32 x, Uint32 y, Uint8 p) const; // Les deux bits de poid faible du char sont à prendre en compte
		void setPart(Uint32 x, Uint32 y, Uint8 p, char value);

		void save();

		SDL_PixelFormat* format() const;
		Uint32 width() const;
		Uint32 height() const;

	private:
		SDL_Surface* m_img;
		const boost::filesystem::path& m_path;
};

#endif