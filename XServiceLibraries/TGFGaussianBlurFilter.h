//
#ifndef TGFGaussianBlurFilter_h
#define TGFGaussianBlurFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFGaussianBlurFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFGaussianBlurFilter_h */
