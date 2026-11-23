//
#ifndef _TtC12XPhotoEditor24MediaStyleTrayTabRowView_h
#define _TtC12XPhotoEditor24MediaStyleTrayTabRowView_h
@import Foundation;

@class Swift.Bool, UIView, XPhotoEditor.MediaStyleTrayFillStyle, XPhotoEditor.MediaStyleTrayMode ?, XPhotoEditor.MediaStyleTrayMode _$scSg ->, XPhotoEditor.MediaStyleTrayTabCell, _$sSa -> XPhotoEditor.MediaStyleTrayMode mode_ XPhotoEditor.MediaStyleTrayTabCell cellt, _$sSa -> XPhotoEditor.MediaStyleTrayTabCell, _$sSo11UIImageViewC, _$sSo28UISelectionFeedbackGeneratorC, _$sSo31UINotificationFeedbackGeneratorC, _$sSo6UIViewC, _$syycSg, __C.CGSize;

@interface XPhotoEditor.MediaStyleTrayTabRowView : UIView { // (Swift)
    /* instance variables */
    XPhotoEditor.MediaStyleTrayMode ? selectedMode;
    Swift.Bool isColorsAvailable;
    XPhotoEditor.MediaStyleTrayFillStyle fillStyle;
    Swift.Bool isFillStyleAvailable;
    XPhotoEditor.MediaStyleTrayMode _$scSg -> onSelect;
    (() -> ())? onCycleFillStyle;
    Swift.Array -> XPhotoEditor.MediaStyleTrayTabCell _slotCells;
    Swift.Array -> XPhotoEditor.MediaStyleTrayMode mode_ XPhotoEditor.MediaStyleTrayTabCell cellt _modeCells;
    __C.UIImageView _toggleGlyphView;
    XPhotoEditor.MediaStyleTrayTabCell _toggleCell;
    __C.UISelectionFeedbackGenerator _selectionFeedback;
    __C.UINotificationFeedbackGenerator _notificationFeedback;
    __C.CGSize _laidOutSize;
    (() -> ())? _unavailableHintDismissal;
    __C.UIView _selectionView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_prepareFeedback:(id)feedback;
- (void)_didTapModeCell:(id)cell;
- (void)_didTapToggleCell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor24MediaStyleTrayTabRowView_h */
