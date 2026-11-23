//
#ifndef TGFVignetteEffectFilter_h
#define TGFVignetteEffectFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFVignetteEffectFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFVignetteEffectFilter_h */
