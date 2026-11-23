//
#ifndef _TtC12XVideoEditor33VideoEditorBoundedSliderThumbView_h
#define _TtC12XVideoEditor33VideoEditorBoundedSliderThumbView_h
@import Foundation;

@class NSString, UIView, XVideoEditor.VideoEditorBoundedSliderThumbView.AccessibilityConfiguration ?, _$sSo11UIImageViewC, __C.CGSize;

@interface XVideoEditor.VideoEditorBoundedSliderThumbView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView _imageView;
    __C.CGSize _lastRenderedSize;
    XVideoEditor.VideoEditorBoundedSliderThumbView.AccessibilityConfiguration ? accessibilityConfiguration;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, copy) NSString *accessibilityHint;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XVideoEditor33VideoEditorBoundedSliderThumbView_h */
