//
#ifndef TGFVibranceFilter_h
#define TGFVibranceFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFVibranceFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFVibranceFilter_h */
