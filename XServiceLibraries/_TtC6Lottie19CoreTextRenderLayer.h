//
#ifndef _TtC6Lottie19CoreTextRenderLayer_h
#define _TtC6Lottie19CoreTextRenderLayer_h
@import Foundation;

@class CALayer, Lottie.TextRangeUnit ?, Swift.Bool, _$s12CoreGraphics7CGFloatVMn, _$s12CoreGraphics7CGFloatVMn ?, _$sSSSg, _$sSiSg, _$sSo18NSAttributedStringCSg, __C.CGColor ?, __C.CGPoint, __C.CGRect, __C.CGSize ?, __C.CTFont ?, __C.CTFramesetter ?, __C.NSTextAlignment;

@interface Lottie.CoreTextRenderLayer : CALayer { // (Swift)
    /* instance variables */
    Swift.String? text;
    __C.CTFont ? font;
    __C.NSTextAlignment alignment;
    nominal type descriptor for CoreGraphics.CGFloat lineHeight;
    nominal type descriptor for CoreGraphics.CGFloat tracking;
    __C.CGColor ? fillColor;
    __C.CGColor ? strokeColor;
    nominal type descriptor for CoreGraphics.CGFloat strokeWidth;
    Swift.Bool strokeOnTop;
    __C.CGSize ? preferredSize;
    Swift.Int? start;
    Swift.Int? end;
    Lottie.TextRangeUnit ? textRangeUnit;
    nominal type descriptor for CoreGraphics.CGFloat ? selectedRangeOpacity;
    __C.CGRect drawingRect;
    __C.CGPoint drawingAnchor;
    __C.CTFramesetter ? fillFrameSetter;
    __C.NSAttributedString? attributedString;
    __C.CTFramesetter ? strokeFrameSetter;
    Swift.Bool needsContentUpdate;
}

/* instance methods */
- (id)actionForKey:(id)key;
- (void)drawInContext:(struct CGContext *)context;
- (id)init;
- (id)initWithLayer:(id)layer;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC6Lottie19CoreTextRenderLayer_h */
