//
#ifndef TGFSharpenEffectFilter_h
#define TGFSharpenEffectFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFSharpenEffectFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFSharpenEffectFilter_h */
