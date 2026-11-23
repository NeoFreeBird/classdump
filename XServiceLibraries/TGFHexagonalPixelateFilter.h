//
#ifndef TGFHexagonalPixelateFilter_h
#define TGFHexagonalPixelateFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFHexagonalPixelateFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFHexagonalPixelateFilter_h */
