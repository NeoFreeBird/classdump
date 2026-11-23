//
#ifndef TGFLineSketchFilter_h
#define TGFLineSketchFilter_h
@import Foundation;

#include "TGFCoreImageFilterBase.h"

@interface TGFLineSketchFilter : TGFCoreImageFilterBase

/* instance methods */
- (id)init;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;
- (void)apply:(id)apply;

@end

#endif /* TGFLineSketchFilter_h */
