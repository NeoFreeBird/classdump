//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC6ChatUI25AttachmentBarProgressView_h
#define _TtC6ChatUI25AttachmentBarProgressView_h
@import Foundation;

@class UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo6UIViewC;

@interface ChatUI.AttachmentBarProgressView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat progress;
    __C.UIView barView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)tintColorDidChange;

@end

#endif /* _TtC6ChatUI25AttachmentBarProgressView_h */
