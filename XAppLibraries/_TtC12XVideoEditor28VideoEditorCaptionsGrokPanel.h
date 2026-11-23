//
#ifndef _TtC12XVideoEditor28VideoEditorCaptionsGrokPanel_h
#define _TtC12XVideoEditor28VideoEditorCaptionsGrokPanel_h
@import Foundation;

@class Swift.Bool, UIView, XVideoEditor.VideoEditorCaptionsGrokPanel.Mode, XVideoEditor.VideoEditorCaptionsGrokPanel.Status, _$s13XDesignSystem5InputCMn, _$s13XDesignSystem6ButtonCMn, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo12UIScrollViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface XVideoEditor.VideoEditorCaptionsGrokPanel : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onAutoCorrect;
    (() -> ())? onAskGrok;
    (() -> ())? onPromptChanged;
    (() -> ())? onPromptEditingChanged;
    (() -> ())? onSend;
    XVideoEditor.VideoEditorCaptionsGrokPanel.Mode mode;
    __C.UIScrollView _chipsScrollView;
    __C.UIStackView _chipsStack;
    nominal type descriptor for XDesignSystem.Button _autoCorrectButton;
    nominal type descriptor for XDesignSystem.Button _askGrokButton;
    __C.UIView _promptContainer;
    nominal type descriptor for XDesignSystem.Input _input;
    nominal type descriptor for XDesignSystem.Button _sendButton;
    __C.UIImageView _statusIcon;
    __C.UILabel _statusLabel;
    XVideoEditor.VideoEditorCaptionsGrokPanel.Status _status;
    Swift.Bool _isPromptEnabled;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)_didTapAutoCorrect;
- (void)_didTapAskGrok;
- (void)_didTapSend;

@end

#endif /* _TtC12XVideoEditor28VideoEditorCaptionsGrokPanel_h */
