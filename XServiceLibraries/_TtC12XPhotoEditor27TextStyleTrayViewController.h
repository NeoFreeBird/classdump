//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12XPhotoEditor27TextStyleTrayViewController_h
#define _TtC12XPhotoEditor27TextStyleTrayViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, XPhotoEditor.MediaColorViewportPickerView ?, XPhotoEditor.MediaStyleTrayViewController ?, XPhotoEditor.TextCanvasView, XPhotoEditor.TextColorSampler, XPhotoEditor.TextPlacementView ?, XPhotoEditor.TextStyleTrayViewController.ColorSource, _$s7Combine19CurrentValueSubjectCMn XPhotoEditor.MediaStyleTrayColorSelection _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn XPhotoEditor.MediaStyleTrayFillStyle _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySi _$ss5NeverOMn, _$sSaySo6UIViewCG, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo7UIColorC5color_ XPhotoEditor.TextStyleTrayViewController.ColorSource sourcetSg, _$sySo7UIColorC_Sbtc, _$syyc;

@interface XPhotoEditor.TextStyleTrayViewController : UIViewController { // (Swift)
    /* instance variables */
    XPhotoEditor.TextCanvasView _canvas;
    [__C.UIView] _passthroughViews;
    XPhotoEditor.TextColorSampler _sampler;
    (__C.UIColor, Swift.Bool) -> () _selectColor;
    XPhotoEditor.TextFontStyle function type (escaping) _selectFont;
    () -> () _cycleFill;
    () -> () _dismiss;
    nominal type descriptor for Combine.CurrentValueSubject XPhotoEditor.MediaStyleTrayColorSelection nominal type descriptor for Swift.Never _selectionSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Int nominal type descriptor for Swift.Never _fontIndexSubject;
    nominal type descriptor for Combine.CurrentValueSubject XPhotoEditor.MediaStyleTrayFillStyle nominal type descriptor for Swift.Never _fillStyleSubject;
    XPhotoEditor.MediaStyleTrayViewController ? $__lazy_storage_$__tray;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    XPhotoEditor.TextPlacementView ? _editingTextView;
    Swift.Bool _isTrayRevealed;
    XPhotoEditor.MediaColorViewportPickerView ? _picker;
    XPhotoEditor.TextStyleTrayViewController.ColorSource _colorSource;
    __C.UIColorcolor first-element-marker  XPhotoEditor.TextStyleTrayViewController.ColorSource sourcetSg _lastCustomColor;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_keyboardDidChange:(id)change;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12XPhotoEditor27TextStyleTrayViewController_h */
