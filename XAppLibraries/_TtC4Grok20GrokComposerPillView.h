//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC4Grok20GrokComposerPillView_h
#define _TtC4Grok20GrokComposerPillView_h
@import Foundation;

@class Grok.GrokComposerPillView.Layout, UIView, _$s12CoreGraphics7CGFloatVMn ?, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface Grok.GrokComposerPillView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView iconView;
    __C.UILabel label;
    Grok.GrokComposerPillView.Layout layout;
    nominal type descriptor for CoreGraphics.CGFloat ? maximumHeight;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC4Grok20GrokComposerPillView_h */
