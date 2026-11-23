//
#ifndef TGFGloomFilter_h
#define TGFGloomFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFGloomFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFGloomFilter_h */
