//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TGFSepiaFilter_h
#define TGFSepiaFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFSepiaFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFSepiaFilter_h */
