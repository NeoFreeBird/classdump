//
#ifndef TFNHashflagRenderer_h
#define TFNHashflagRenderer_h
@import Foundation;

@class NSObject;

@interface TFNHashflagRenderer : NSObject

/* class methods */
+ (id)fontWithSize:(double)size;
+ (double)hashflagWidthForFont:(id)font;
+ (struct CGSize { double x0; double x1; })hashflagSizeForFont:(id)font originalSize:(struct CGSize { double x0; double x1; })size;
+ (void)drawHashFlagsWithFrame:(struct __CTFrame *)frame attributedString:(id)string inContext:(struct CGContext *)context;

@end

#endif /* TFNHashflagRenderer_h */
