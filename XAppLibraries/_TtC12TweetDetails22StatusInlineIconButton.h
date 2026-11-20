//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12TweetDetails22StatusInlineIconButton_h
#define _TtC12TweetDetails22StatusInlineIconButton_h
@import Foundation;

@class NSString, Swift.Bool, TweetDetails.StatusInlineIconButton.ColorTheme, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSSSg, _$sSo11UIImageViewC, _$sSo24TFNTappableHighlightViewC, _$sSo25UIImpactFeedbackGeneratorC, _$syycSg, __C.CGSize;

@interface TweetDetails.StatusInlineIconButton : UIView { // (Swift)
    /* instance variables */
    __C.UIImpactFeedbackGenerator feedbackGenerator;
    __C.TFNTappableHighlightView highlightView;
    __C.UIImageView iconView;
}

@property (nonatomic) double padding;
@property (nonatomic) struct CGSize { double x0; double x1; } iconSize;
@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic) long long colorTheme;
@property (nonatomic) _Bool isEnabled;
@property (nonatomic) _Bool isHapticFeedbackEnabled;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* class methods */
+ (struct CGSize { double x0; double x1; })intrinsicContentSizeWithPadding:(double)padding iconSize:(struct CGSize { double x0; double x1; })size;

/* instance methods */
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)handleTap;

@end

#endif /* _TtC12TweetDetails22StatusInlineIconButton_h */
