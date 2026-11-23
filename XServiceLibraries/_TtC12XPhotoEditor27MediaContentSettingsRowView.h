//
#ifndef _TtC12XPhotoEditor27MediaContentSettingsRowView_h
#define _TtC12XPhotoEditor27MediaContentSettingsRowView_h
@import Foundation;

@class UIView, XPhotoEditor.MediaContentToggle, _$sSo11UIImageViewC, _$sSo25UIImpactFeedbackGeneratorC, _$sSo6UIViewC, _$sSo7UILabelC, _$sSo8UISwitchC, _$sySbcSg;

@interface XPhotoEditor.MediaContentSettingsRowView : UIView { // (Swift)
    /* instance variables */
    XPhotoEditor.MediaContentToggle toggle;
    ((Swift.Bool) -> ())? onToggle;
    __C.UILabel titleLabel;
    __C.UISwitch toggleSwitch;
    __C.UIImageView iconImageView;
    __C.UIView separatorView;
    __C.UIImpactFeedbackGenerator hapticFeedbackGenerator;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (void)toggleValueChanged;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC12XPhotoEditor27MediaContentSettingsRowView_h */
