//
#ifndef TGFVignetteFilter_h
#define TGFVignetteFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFVignetteFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFVignetteFilter_h */
