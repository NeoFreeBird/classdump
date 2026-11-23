//
#ifndef _TtC14T1TwitterSwift19BlurPlayPauseButton_h
#define _TtC14T1TwitterSwift19BlurPlayPauseButton_h
@import Foundation;

@class UIView, _$s13XDesignSystem4BlurCMn, _$s5TAVUI20PlayPauseMorphButtonCMn, _$sSo6UIViewC;

@interface T1TwitterSwift.BlurPlayPauseButton : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.Blur blurView;
    __C.UIView overlayView;
    nominal type descriptor for TAVUI.PlayPauseMorphButton morphButton;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14T1TwitterSwift19BlurPlayPauseButton_h */
