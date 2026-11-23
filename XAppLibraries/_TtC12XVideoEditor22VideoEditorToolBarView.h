//
#ifndef _TtC12XVideoEditor22VideoEditorToolBarView_h
#define _TtC12XVideoEditor22VideoEditorToolBarView_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class UIView, XVideoEditor.VideoEditorNavigationMenu _$sSgcSg ->, XVideoEditor.VideoEditorToolBarViewModelProtocol, _$s12XPhotoEditor05MediaB15ToolbarItemViewCMn ?, _$s7Combine14AnyCancellableCMn ?, _$sSa -> _$s12XPhotoEditor05MediaB15ToolbarItemViewCMn, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo11UIStackViewC, _$sSo12UIScrollViewC, _$sSo22UITapGestureRecognizerC, _$syycSg;

@interface XVideoEditor.VideoEditorToolBarView : UIView <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    XVideoEditor.VideoEditorToolBarViewModelProtocol _viewModel;
    __C.UIScrollView _scrollView;
    __C.UIStackView _contentStackView;
    Swift.Array -> nominal type descriptor for XPhotoEditor.MediaEditorToolbarItemView _cells;
    nominal type descriptor for XPhotoEditor.MediaEditorToolbarItemView ? _coverCell;
    __C.UITapGestureRecognizer _backgroundTapGesture;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
    nominal type descriptor for Combine.AnyCancellable ? _selectedItemStateCancellable;
    (() -> ())? backgroundTapHandler;
    XVideoEditor.VideoEditorNavigationMenu _$sSgcSg -> navigationMenuHandler;
}

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)_didTapEditorTabButton:(id)button;
- (void)_didTapBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XVideoEditor22VideoEditorToolBarView_h */
