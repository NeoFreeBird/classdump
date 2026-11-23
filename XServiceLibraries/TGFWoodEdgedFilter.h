//
#ifndef TGFWoodEdgedFilter_h
#define TGFWoodEdgedFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFWoodEdgedFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFWoodEdgedFilter_h */
