//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI17CommunityInfoView_h
#define _TtC20TwitterCommunitiesUI17CommunityInfoView_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"

@class TwitterCommunitiesUI.CommunityInfoViewDelegate ?, TwitterCommunitiesUI.CommunityInfoViewModel, UIStackView, _$s12CoreGraphics7CGFloatVMn ?, _$s13XDesignSystem9ListItemsCMn ?, _$sSa -> _$s14TFSTwitterCore20TwitterCommunityRuleVMn ?, _$sSo11UIImageViewCSg, _$sSo11UIStackViewCSg, _$sSo18NSLayoutConstraintCSg, _$sSo21TFNAttributedTextViewCSg, _$sSo6UIViewCSg, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg;

@interface TwitterCommunitiesUI.CommunityInfoView : UIStackView <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.CommunityInfoViewDelegate ? delegate;
    TwitterCommunitiesUI.CommunityInfoViewModel viewModel;
    __C.UIStackView? $__lazy_storage_$_infoHeaderView;
    __C.UILabel? $__lazy_storage_$_infoHeaderLabel;
    __C.UIStackView? $__lazy_storage_$_descriptionView;
    __C.TFNAttributedTextView? $__lazy_storage_$_descriptionTextView;
    __C.UIStackView? $__lazy_storage_$_memberCapabilitiesView;
    __C.UIImageView? $__lazy_storage_$_memberCapabilitiesIconView;
    __C.NSLayoutConstraint? $__lazy_storage_$_memberCapabilitiesIconViewWidthConstraint;
    __C.UILabel? $__lazy_storage_$_memberCapabilitiesLabel;
    __C.UIStackView? $__lazy_storage_$_publicCapabilitiesView;
    __C.UIImageView? $__lazy_storage_$_publicCapabilitiesIconView;
    __C.NSLayoutConstraint? $__lazy_storage_$_publicCapabilitiesIconViewWidthConstraint;
    __C.UILabel? $__lazy_storage_$_publicCapabilitiesLabel;
    __C.UIStackView? $__lazy_storage_$_creatorInfoView;
    __C.UIImageView? $__lazy_storage_$_creatorIconView;
    __C.NSLayoutConstraint? $__lazy_storage_$_creatorIconViewWidthConstraint;
    __C.TFNAttributedTextView? $__lazy_storage_$_creatorTextView;
    __C.UIView? $__lazy_storage_$_infoGapView;
    __C.UIStackView? $__lazy_storage_$_rulesHeaderView;
    __C.UILabel? $__lazy_storage_$_rulesHeaderLabel;
    nominal type descriptor for XDesignSystem.ListItems ? rulesListView;
    __C.NSLayoutConstraint? rulesListHeightConstraint;
    nominal type descriptor for CoreGraphics.CGFloat ? rulesListSizedWidth;
    Swift.Array -> nominal type descriptor for TFSTwitterCore.TwitterCommunityRule ? shownRules;
    __C.UIStackView? $__lazy_storage_$_showMoreRulesListItemView;
    __C.TFNButton? $__lazy_storage_$_showMoreRulesButton;
}

/* instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size withHorizontalFittingPriority:(float)priority verticalFittingPriority:(float)priority;
- (void)didSelectShowAllRules;

@end

#endif /* _TtC20TwitterCommunitiesUI17CommunityInfoView_h */
