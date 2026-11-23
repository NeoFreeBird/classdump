//
#ifndef TGFPixelateFilter_h
#define TGFPixelateFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFPixelateFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFPixelateFilter_h */
