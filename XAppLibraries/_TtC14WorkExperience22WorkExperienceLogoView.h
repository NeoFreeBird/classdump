//
#ifndef _TtC14WorkExperience22WorkExperienceLogoView_h
#define _TtC14WorkExperience22WorkExperienceLogoView_h
@import Foundation;

@class UIView, WorkExperience.WorkExperienceLogoView.Shape, _$s10Foundation3URLVMn ?, _$s12CoreGraphics7CGFloatVMn, _$sSo11UIImageViewC, _$sSo12CAShapeLayerC, _$sSo18TUIAvatarImageViewC, _$sSo22TIPImageFetchOperationCSg, _$sSo6UIViewC;

@interface WorkExperience.WorkExperienceLogoView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat size;
    __C.TUIAvatarImageView avatarView;
    __C.UIView placeholderView;
    __C.UIImageView glyphView;
    __C.UIImageView logoImageView;
    __C.TIPImageFetchOperation? logoFetch;
    nominal type descriptor for Foundation.URL ? shownLogoURL;
    __C.UIView outlineView;
    __C.UIImageView emptySlotGlyphView;
    __C.CAShapeLayer emptySlotOutline;
    WorkExperience.WorkExperienceLogoView.Shape shape;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14WorkExperience22WorkExperienceLogoView_h */
