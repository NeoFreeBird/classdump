//
#ifndef TGFPosterizeFilter_h
#define TGFPosterizeFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFPosterizeFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFPosterizeFilter_h */
