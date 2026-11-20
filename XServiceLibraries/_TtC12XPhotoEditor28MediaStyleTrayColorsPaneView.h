//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor28MediaStyleTrayColorsPaneView_h
#define _TtC12XPhotoEditor28MediaStyleTrayColorsPaneView_h
@import Foundation;

@class UIView, XPhotoEditor.MediaStyleTrayColorGridView, XPhotoEditor.MediaStyleTrayColorSelection ?, XPhotoEditor.MediaStyleTrayColorSpectrumView ?, XPhotoEditor.MediaStyleTrayColors, XPhotoEditor.MediaStyleTrayColorsPresentation, XPhotoEditor.MediaStyleTrayCustomColorButton, XPhotoEditor.MediaStyleTrayCustomColorEntry, XPhotoEditor.MediaStyleTrayPaneScrollView, _$sSh -> _$s7Combine14AnyCancellableCMn, _$syycSg;

@interface XPhotoEditor.MediaStyleTrayColorsPaneView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onToggleCustomColors;
    XPhotoEditor.MediaStyleTrayColors _colors;
    XPhotoEditor.MediaStyleTrayCustomColorEntry _customColorEntry;
    XPhotoEditor.MediaStyleTrayPaneScrollView _scrollView;
    XPhotoEditor.MediaStyleTrayColorGridView _gridView;
    XPhotoEditor.MediaStyleTrayCustomColorButton _customColorButton;
    XPhotoEditor.MediaStyleTrayColorSpectrumView ? _spectrumView;
    XPhotoEditor.MediaStyleTrayColorsPresentation _presentation;
    XPhotoEditor.MediaStyleTrayColorSelection ? _selection;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)_didTapCustomColorButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor28MediaStyleTrayColorsPaneView_h */
