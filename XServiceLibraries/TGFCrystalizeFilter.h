//
#ifndef TGFCrystalizeFilter_h
#define TGFCrystalizeFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFCrystalizeFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFCrystalizeFilter_h */
