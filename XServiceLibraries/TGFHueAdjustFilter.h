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
