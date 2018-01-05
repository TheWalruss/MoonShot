// trim.cxx
//
// Trim will load the image specified in argv[4]..argv[argc-1]
// and shrink the image to an argv[1] pixel border around the 
// rectangle bounding a minimally argv[2]-pixel contiguous area 
// of value argv[3] or greater.
//
// If argv[4] is  "reject_edge", then trim will not provide output
// for files in which the image edge is within the argv[1]-pixel
// border (or within the bright area). This is to filter images where
// the object is not fully within the frame.
//
//

#include <cstdio>
#include "MoonShotCMakeConfig.h"

#include "trim.hxx"

int main(int argc, char[][] argv)
{
	std::cout << "trim: Version " << MoonShot_VERSION_MAJOR << "." << MoonShot_VERSION_MINOR << "\n" <<
		     "\tusage: border contig threshold [reject_edge] files...\n" <<
		     std::endl;
	return 0;
}
