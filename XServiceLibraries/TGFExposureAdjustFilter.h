//
#ifndef TGFExposureAdjustFilter_h
#define TGFExposureAdjustFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFExposureAdjustFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFExposureAdjustFilter_h */
