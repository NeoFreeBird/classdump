//
#ifndef TGFDitherFilter_h
#define TGFDitherFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFDitherFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFDitherFilter_h */
