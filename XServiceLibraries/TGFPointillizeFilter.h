//
#ifndef TGFPointillizeFilter_h
#define TGFPointillizeFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFPointillizeFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFPointillizeFilter_h */
