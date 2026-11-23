//
#ifndef _TtC23QuickComposerComponents29QuickComposerAvatarHeaderView_h
#define _TtC23QuickComposerComponents29QuickComposerAvatarHeaderView_h
@import Foundation;

@class QuickComposer.QuickComposerContext ?, QuickComposerComponents.QuickComposerAvatarHeaderView.Style, QuickComposerComponents.QuickComposerAvatarView ?, QuickComposerComponents.QuickComposerChipFan ?, QuickComposerComponents.QuickComposerComponentsAppearance, QuickComposerComponents.QuickComposerComponentsMetrics, QuickComposerComponents.QuickComposerHeaderCaptionView ?, QuickComposerComponents.QuickComposerRecipient _$s_SbtcSg ->, Swift.Bool, UIView, _$s12CoreGraphics7CGFloatVMn ?, _$sSa -> QuickComposerComponents.QuickComposerRecipient, _$sSo11UIImageViewCSg, _$sSo22UITapGestureRecognizerCSg, _$sSo25UIImpactFeedbackGeneratorC, _$sSo6UIViewC QuickComposerComponents.QuickComposerRecipient _$scSg, _$sSo6UIViewCSg, _$syycSg;

@interface QuickComposerComponents.QuickComposerAvatarHeaderView : UIView { // (Swift)
    /* instance variables */
    QuickComposerComponents.QuickComposerAvatarHeaderView.Style style;
    QuickComposerComponents.QuickComposerAvatarView ? avatar;
    __C.UIView? caption;
    __C.UIView? trailingAccessory;
    Swift.Bool isCaptionInteractive;
    Swift.Array -> QuickComposerComponents.QuickComposerRecipient recipients;
    __C.UIView QuickComposerComponents.QuickComposerRecipient _$scSg makeRecipientAvatarView;
    QuickComposerComponents.QuickComposerRecipient _$s_SbtcSg -> onToggleRecipient;
    (() -> ())? onRecipientsFanPresented;
    (() -> ())? onRequestRecipientsSheet;
    QuickComposer.QuickComposerContext ? context;
    QuickComposerComponents.QuickComposerComponentsAppearance appearance;
    QuickComposerComponents.QuickComposerComponentsMetrics metrics;
    QuickComposerComponents.QuickComposerHeaderCaptionView ? captionContainer;
    __C.UIImageView? $__lazy_storage_$_socialContextGlyph;
    nominal type descriptor for CoreGraphics.CGFloat ? textColumnInset;
    __C.UITapGestureRecognizer? captionTap;
    __C.UIImpactFeedbackGenerator captionTapHaptics;
    QuickComposerComponents.QuickComposerChipFan ? activeFan;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)handleCaptionTapGesture;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC23QuickComposerComponents29QuickComposerAvatarHeaderView_h */
