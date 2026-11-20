//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14WorkExperience32ProfileWorkExperienceRoleRowView_h
#define _TtC14WorkExperience32ProfileWorkExperienceRoleRowView_h
@import Foundation;

@class Swift.Bool, UIView, WorkExperience.ProfileWorkExperienceRoleRowView.TextLayout ?, WorkExperience.ProfileWorkExperienceScrollDeferringPress ?, WorkExperience.WorkExperienceLogoView, WorkExperience.WorkExperienceRole, _$s12CoreGraphics7CGFloatVMn, _$s13XDesignSystem4BlurC13ContentEffectCMn ?, _$sSaySo6UIViewC4view_ __C.CGSize naturalSizet, _$sSo12CAShapeLayerCSg, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface WorkExperience.ProfileWorkExperienceRoleRowView : UIView { // (Swift)
    /* instance variables */
    WorkExperience.WorkExperienceRole experience;
    (() -> ())? onTap;
    nominal type descriptor for XDesignSystem.Blur.ContentEffect ? $__lazy_storage_$_blur;
    nominal type descriptor for CoreGraphics.CGFloat naturalWidth;
    Swift.Bool isRightToLeft;
    nominal type descriptor for CoreGraphics.CGFloat nextRowOffset;
    WorkExperience.ProfileWorkExperienceScrollDeferringPress ? $__lazy_storage_$_press;
    __C.UIView pressDimmedContent;
    WorkExperience.WorkExperienceLogoView logoView;
    __C.UILabel titleLabel;
    __C.UILabel companyLabel;
    __C.UILabel datesLabel;
    __C.UIView connectorView;
    __C.CAShapeLayer? connectorDots;
    Swift.Array empty-list __C.UIViewview first-element-marker  __C.CGSize naturalSizet lines;
    WorkExperience.ProfileWorkExperienceRoleRowView.TextLayout ? measuredTextLayout;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (_Bool)accessibilityActivate;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14WorkExperience32ProfileWorkExperienceRoleRowView_h */
