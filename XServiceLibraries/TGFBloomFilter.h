//
#ifndef TGFBloomFilter_h
#define TGFBloomFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFBloomFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFBloomFilter_h */
