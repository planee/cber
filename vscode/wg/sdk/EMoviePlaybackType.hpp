#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EMoviePlaybackType
{
   MT_Normal = 0,
   MT_Looped = 1,
   MT_LoadingLoop = 2,
   MT_MAX = 3,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
