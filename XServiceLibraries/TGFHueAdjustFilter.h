//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TGFHueAdjustFilter_h
#define TGFHueAdjustFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFHueAdjustFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFHueAdjustFilter_h */
