//
#ifndef TGFSaturationFilter_h
#define TGFSaturationFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFSaturationFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFSaturationFilter_h */
