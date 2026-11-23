//
#ifndef TGFGammaAdjustFilter_h
#define TGFGammaAdjustFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFGammaAdjustFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFGammaAdjustFilter_h */
