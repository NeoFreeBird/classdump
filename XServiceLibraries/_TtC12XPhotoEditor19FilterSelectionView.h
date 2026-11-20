//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor19FilterSelectionView_h
#define _TtC12XPhotoEditor19FilterSelectionView_h
@import Foundation;

@class Swift.Bool, UIView, XPhotoEditor.EditorScrubSlider, XPhotoEditor.FilterDefinition ?, XPhotoEditor.FilterSelectionViewDelegate ?, XPhotoEditor.InlineOptionStrip, _$sSo6UIViewC;

@interface XPhotoEditor.FilterSelectionView : UIView { // (Swift)
    /* instance variables */
    XPhotoEditor.FilterSelectionViewDelegate ? delegate;
    XPhotoEditor.InlineOptionStrip strip;
    __C.UIView sliderContainer;
    XPhotoEditor.EditorScrubSlider intensitySlider;
    Swift.Bool isSliderVisible;
    XPhotoEditor.FilterDefinition ? selectedFilter;
}

/* instance methods */
- (void)handleIntensityChange:(id)change;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor19FilterSelectionView_h */
