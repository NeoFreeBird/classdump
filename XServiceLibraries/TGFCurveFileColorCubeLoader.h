//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TGFCurveFileColorCubeLoader_h
#define TGFCurveFileColorCubeLoader_h
@import Foundation;

#include "TGFFileColorCubeLoader.h"

@interface TGFCurveFileColorCubeLoader : TGFFileColorCubeLoader

/* instance methods */
- (id)initWithFilePath:(id)path;

@end

#endif /* TGFCurveFileColorCubeLoader_h */
