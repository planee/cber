#pragma once
#include "UMovieScenePropertyTrack.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMovieSceneBoolTrack // Size: 0xE0
	: public UMovieScenePropertyTrack // Size: 0xE0
{
private:
	typedef UMovieSceneBoolTrack t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(121); // id32("Class MovieSceneTracks.MovieSceneBoolTrack")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMovieSceneBoolTrack = sizeof(UMovieSceneBoolTrack); // 224
    static_assert(sizeof(UMovieSceneBoolTrack) == 0xE0, "Size of UMovieSceneBoolTrack is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
