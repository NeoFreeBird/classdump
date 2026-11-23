//
#ifndef _TtC12XVideoEditor35VideoEditorCaptionsTextFaceSelector_h
#define _TtC12XVideoEditor35VideoEditorCaptionsTextFaceSelector_h
@import Foundation;

@class UIView, XVideoEditor.VideoEditorCaptionsTextFaceSelector.Controls, XVideoEditor.VideoEditorCaptionsTextFaceSelectorViewModel, XVideoEditor.VideoEditorSliderView, _$s12XPhotoEditor27MediaStyleTrayColorControlsVMn ?, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo11UIStackViewC, _$sSo6UIViewCSg, _$sSo8UIButtonC;

@interface XVideoEditor.VideoEditorCaptionsTextFaceSelector : UIView { // (Swift)
    /* instance variables */
    __C.UIStackView _stackView;
    __C.UIButton _colorButton;
    __C.UIButton _backgroundAlphaButton;
    XVideoEditor.VideoEditorSliderView _sliderView;
    XVideoEditor.VideoEditorCaptionsTextFaceSelectorViewModel _viewModel;
    XVideoEditor.VideoEditorCaptionsTextFaceSelector.Controls _controls;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    nominal type descriptor for XPhotoEditor.MediaStyleTrayColorControls ? _colorControlsState;
    __C.UIView? _secondaryButtonList;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never onNeedsLayoutPublisher;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)_didTapColorButton:(id)button;
- (void)_didTapBackgroundAlphaButton:(id)button;
- (void)_didChangeSliderValue:(id)value;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XVideoEditor35VideoEditorCaptionsTextFaceSelector_h */
