//
#ifndef _TtC12XPhotoEditor26MediaStyleTrayFontListView_h
#define _TtC12XPhotoEditor26MediaStyleTrayFontListView_h
@import Foundation;

@class Swift.Bool, UIView, XPhotoEditor.MediaStyleTrayFonts, XPhotoEditor.MediaStyleTrayPaneScrollView, _$sSa -> XDesignSystem.Button, _$sSa -> XPhotoEditor.MediaStyleTrayFontPreviewContent ?, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSi, _$sSo28UISelectionFeedbackGeneratorC;

@interface XPhotoEditor.MediaStyleTrayFontListView : UIView { // (Swift)
    /* instance variables */
    Swift.Bool arePreviewsPlaying;
    XPhotoEditor.MediaStyleTrayFonts _fonts;
    Swift.Array -> XDesignSystem.Button _buttons;
    Swift.Array -> XPhotoEditor.MediaStyleTrayFontPreviewContent ? _previews;
    XPhotoEditor.MediaStyleTrayPaneScrollView _scrollView;
    __C.UISelectionFeedbackGenerator _selectionFeedback;
    Swift.Int _selectedIndex;
    Swift.Bool _isHandlingTap;
    Swift.Bool _didScrollToInitialSelection;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable _cancellables;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (void)_prepareSelectionFeedback;
- (void)_didTapFontButton:(id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor26MediaStyleTrayFontListView_h */
