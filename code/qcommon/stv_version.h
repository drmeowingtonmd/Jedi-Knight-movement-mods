// Current version of the single player game
#include "../win32/autoversion.h"

#ifdef _DEBUG
	#define	Q3_VERSION		"(debug) Speed Outcast: v"VERSION_STRING_DOTTED
#elif defined FINAL_BUILD
	#define	Q3_VERSION		"Speed Outcast: v"VERSION_STRING_DOTTED
#else
	#define	Q3_VERSION		"(internal) Speed Outcast: v"VERSION_STRING_DOTTED
#endif
// end


