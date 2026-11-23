//
#ifndef TGFUnsharpMaskFilter_h
#define TGFUnsharpMaskFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFUnsharpMaskFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFUnsharpMaskFilter_h */
