//
#ifndef _TtC12XVideoEditor33VideoEditorCaptionsStatusPillView_h
#define _TtC12XVideoEditor33VideoEditorCaptionsStatusPillView_h
@import Foundation;

@class UIView, XVideoEditor.VideoEditorCaptionsStatusPillView.Mode, XVideoEditor.VideoSettingsDownloadProgressView, _$sSo11UIImageViewC, _$sSo7UIImageCSg, _$sSo7UILabelC, _$sSo9TFNButtonC;

@interface XVideoEditor.VideoEditorCaptionsStatusPillView : UIView { // (Swift)
    /* instance variables */
    __C.TFNButton retryButton;
    XVideoEditor.VideoSettingsDownloadProgressView _spinner;
    __C.UIImageView _iconView;
    __C.UILabel _label;
    __C.UIImage? _warningIcon;
    __C.UIImage? _successIcon;
    XVideoEditor.VideoEditorCaptionsStatusPillView.Mode mode;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC12XVideoEditor33VideoEditorCaptionsStatusPillView_h */
