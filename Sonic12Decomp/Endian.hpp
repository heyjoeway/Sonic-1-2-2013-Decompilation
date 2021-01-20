#ifndef ENDIAN_H
#define ENDIAN_H

#if RETRO_USING_SDL
#define RETRO_LE16(x) SDL_SwapLE16(x)
#define RETRO_LE32(x) SDL_SwapLE32(x)
#define RETRO_LE64(x) SDL_SwapLE64(x)
#else
//ummm
#define RETRO_LE16(x) (x)
#define RETRO_LE32(x) (x)
#define RETRO_LE64(x) (x)
#endif

#endif //ENDIAN_H
