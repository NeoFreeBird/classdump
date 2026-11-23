//
#ifndef TGFBrightnessFilter_h
#define TGFBrightnessFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFBrightnessFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFBrightnessFilter_h */
