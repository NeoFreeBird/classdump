//
#ifndef TGFContrastFilter_h
#define TGFContrastFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFContrastFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFContrastFilter_h */
