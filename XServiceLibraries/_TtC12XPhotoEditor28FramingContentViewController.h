//
#ifndef _TtC12XPhotoEditor28FramingContentViewController_h
#define _TtC12XPhotoEditor28FramingContentViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, XIcons.XIcon, XPhotoEditor.EditorToolbarButton ?, XPhotoEditor.FramingAspectRatio, XPhotoEditor.FramingAspectRatio ?, XPhotoEditor.FramingContentView ?, XPhotoEditor.FramingParameters ?, XPhotoEditor.FramingParameters _$scSg ->, _$sSS, _$sSSSg, _$sSo11UIStackViewC, _$sSo15UIBarButtonItemCSg, _$sSo7UIImageC, _$syycSg, __C.CGSize;

@interface XPhotoEditor.FramingContentViewController : UIViewController { // (Swift)
    /* instance variables */
    __C.UIImage image;
    XPhotoEditor.FramingParameters ? previousParameters;
    XPhotoEditor.FramingAspectRatio ? fixedAspectRatio;
    Swift.Bool pinchEnabled;
    Swift.Bool rotateEnabled;
    __C.CGSize minSize;
    Swift.Bool fitsCropToImage;
    XPhotoEditor.FramingAspectRatio currentAspectRatio;
    XPhotoEditor.EditorToolbarButton ? activePresetButton;
    __C.UIStackView footerStackView;
    __C.UIBarButtonItem? $__lazy_storage_$_cancelBarButtonItem;
    __C.UIBarButtonItem? $__lazy_storage_$_applyBarButtonItem;
    XPhotoEditor.FramingContentView ? $__lazy_storage_$_contentView;
    XPhotoEditor.FramingParameters _$scSg -> onApply;
    (() -> ())? onCancel;
    (() -> ())? onRotate;
    XIcons.XIcon cancelIcon;
    Swift.String cancelAccessibilityLabel;
    Swift.String? screenTitle;
    Swift.String? screenSubtitle;
    Swift.Bool dismissesOnAction;
}

@property (nonatomic, readonly) _Bool shouldAutorotate;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (void)cancelTapped;
- (void)applyTapped;
- (void)rotateTapped;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12XPhotoEditor28FramingContentViewController_h */
