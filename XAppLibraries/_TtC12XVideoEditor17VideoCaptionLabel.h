//
#ifndef _TtC12XVideoEditor17VideoCaptionLabel_h
#define _TtC12XVideoEditor17VideoCaptionLabel_h
@import Foundation;

@class UILabel, XVideoEditor.VideoEditorCaptionWordHighlight ?, _$s10Foundation16AttributedStringVMn ?, _$s12CoreGraphics7CGFloatVMn, _$sSo7UIColorC, __C.UIEdgeInsets;

@interface XVideoEditor.VideoCaptionLabel : UILabel { // (Swift)
    /* instance variables */
    __C.UIEdgeInsets bubbleInsets;
    __C.UIColor bubbleColor;
    nominal type descriptor for CoreGraphics.CGFloat cornerRadius;
    XVideoEditor.VideoEditorCaptionWordHighlight ? wordHighlight;
    nominal type descriptor for Foundation.AttributedString ? sourceAttributedText;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* _TtC12XVideoEditor17VideoCaptionLabel_h */
