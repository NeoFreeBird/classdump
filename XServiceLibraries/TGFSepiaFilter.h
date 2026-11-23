//
#ifndef TGFSepiaFilter_h
#define TGFSepiaFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFSepiaFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFSepiaFilter_h */
