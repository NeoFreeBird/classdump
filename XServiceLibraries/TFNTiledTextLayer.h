//
#ifndef TFNTiledTextLayer_h
#define TFNTiledTextLayer_h
@import Foundation;

#include "TFNTiledTextLayerState.h"

@class CATiledLayer;

@interface TFNTiledTextLayer : CATiledLayer

@property (retain) TFNTiledTextLayerState *state;

/* class methods */
+ (double)fadeDuration;

/* instance methods */
- (id)init;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds traitCollection:(id)collection;
- (void)drawInContext:(struct CGContext *)context;
- (void)setSelectionColor:(id)color;
- (void)setHitRange:(id)range;
- (void)configureWithTextModel:(id)model;

@end

#endif /* TFNTiledTextLayer_h */
