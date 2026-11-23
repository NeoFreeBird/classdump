//
#ifndef TGFNoiseReductionFilter_h
#define TGFNoiseReductionFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFNoiseReductionFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFNoiseReductionFilter_h */
