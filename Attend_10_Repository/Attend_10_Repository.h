// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the ATTEND10REPOSITORY_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// ATTEND10REPOSITORY_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef ATTEND10REPOSITORY_EXPORTS
#define ATTEND10REPOSITORY_API __declspec(dllexport)
#else
#define ATTEND10REPOSITORY_API __declspec(dllimport)
#endif

// This class is exported from the dll
class ATTEND10REPOSITORY_API CAttend10Repository {
public:
	CAttend10Repository(void);
	// TODO: add your methods here.
};

extern ATTEND10REPOSITORY_API int nAttend10Repository;

ATTEND10REPOSITORY_API int fnAttend10Repository(void);

ATTEND10REPOSITORY_API int initial_Test(int i);
