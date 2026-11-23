//
#ifndef _TtC12XVideoEditor21VideoEditorSliderView_h
#define _TtC12XVideoEditor21VideoEditorSliderView_h
@import Foundation;

@class UIView, XVideoEditor._SliderBackgroundView, _$sSo8UISliderC;

@interface XVideoEditor.VideoEditorSliderView : UIView { // (Swift)
    /* instance variables */
    __C.UISlider slider;
    XVideoEditor._SliderBackgroundView _sliderBackgroundView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XVideoEditor21VideoEditorSliderView_h */
