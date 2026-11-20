//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14WorkExperience25ProfileWorkExperienceView_h
#define _TtC14WorkExperience25ProfileWorkExperienceView_h
@import Foundation;

#include "UILargeContentViewerInteractionDelegate-Protocol.h"

@class Swift.Bool, UIView, WorkExperience.ProfileWorkExperienceInfoButton, WorkExperience.ProfileWorkExperienceRolesPhase, WorkExperience.ProfileWorkExperienceSampledSprings, WorkExperience.ProfileWorkExperienceSummaryRowView, WorkExperience.ProfileWorkExperienceView.HeaderLayout ?, WorkExperience.ProfileWorkExperienceView.Measurements, WorkExperience.ProfileWorkExperienceView.SummaryLine ?, WorkExperience.WorkExperienceCompanyAccount _$scSg ->, _$s12CoreGraphics7CGFloatVMn, _$sSD -> _$s12CoreGraphics7CGFloatVMn WorkExperience.ProfileWorkExperienceView.RolesMeasurements, _$sSDySS _$s12CoreGraphics7CGFloatVMn, _$sSa -> WorkExperience.ProfileWorkExperienceRoleRowView, _$sSa -> WorkExperience.WorkExperienceLogoView, _$sSa -> WorkExperience.WorkExperienceRole, _$sSi, _$sSo11UIImageViewC, _$sSo16TIPImagePipelineCSg, _$sSo6UIViewC, _$sSo7UIImageCSg, _$sSo7UILabelC, _$sySbcSg, _$syycSg;

@interface WorkExperience.ProfileWorkExperienceView : UIView <UILargeContentViewerInteractionDelegate> { // (Swift)
    /* instance variables */
    (() -> ())? onHeightChange;
    (() -> ())? onInfo;
    WorkExperience.WorkExperienceCompanyAccount _$scSg -> onOpenCompany;
    ((Swift.Bool) -> ())? onToggle;
    (() -> ())? onMoveToWindow;
    __C.TIPImagePipeline? imagePipeline;
    WorkExperience.ProfileWorkExperienceSummaryRowView summaryRow;
    __C.UILabel summaryLabel;
    __C.UILabel summarySizingLabel;
    __C.UIImageView chevronView;
    WorkExperience.ProfileWorkExperienceInfoButton infoButton;
    __C.UIView rolesContainer;
    WorkExperience.ProfileWorkExperienceSampledSprings springs;
    __C.UIImage? chevronDownImage;
    __C.UIImage? chevronUpImage;
    Swift.Array -> WorkExperience.WorkExperienceRole experiences;
    Swift.Array -> WorkExperience.WorkExperienceLogoView summaryLogos;
    Swift.Array -> WorkExperience.ProfileWorkExperienceRoleRowView rows;
    Swift.Array -> WorkExperience.ProfileWorkExperienceRoleRowView departingRows;
    Swift.Dictionary empty-list Swift.String nominal type descriptor for CoreGraphics.CGFloat previousRowYs;
    WorkExperience.ProfileWorkExperienceView.Measurements measurements;
    Swift.Dictionary -> nominal type descriptor for CoreGraphics.CGFloat WorkExperience.ProfileWorkExperienceView.RolesMeasurements rolesMeasurementsByWidth;
    WorkExperience.ProfileWorkExperienceView.HeaderLayout ? headerLayout;
    WorkExperience.ProfileWorkExperienceView.SummaryLine ? shownSummaryLine;
    WorkExperience.ProfileWorkExperienceRolesPhase rolesPhase;
    Swift.Bool rowsFollowExpansion;
    Swift.Bool isReportingOneStepHeightChange;
    nominal type descriptor for CoreGraphics.CGFloat heightCarriedOver;
    Swift.Int transitionID;
    Swift.Int carryoverID;
}

/* instance methods */
- (id)largeContentViewerInteraction:(id)interaction itemAtPoint:(struct CGPoint { double x0; double x1; })point;
- (id)initWithCoder:(id)coder;
- (void)dynamicColorsDidReload;
- (void)toggleExpansion;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)change;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC14WorkExperience25ProfileWorkExperienceView_h */
