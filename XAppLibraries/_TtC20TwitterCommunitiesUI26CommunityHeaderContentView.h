//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI26CommunityHeaderContentView_h
#define _TtC20TwitterCommunitiesUI26CommunityHeaderContentView_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class Swift.Bool, TwitterCommunitiesUI.CommunityFacepileView ?, TwitterCommunitiesUI.CommunityHeaderContentViewDelegate ?, TwitterCommunitiesUI.CommunityHeaderContentViewModel, TwitterCommunitiesUI.CommunityJoinButton ?, UIView, _$sSo11UIImageViewC, _$sSo11UIStackViewCSg, _$sSo18NSAttributedStringCSg, _$sSo21TFNAttributedTextViewCSg, _$sSo7UILabelC, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg;

@interface TwitterCommunitiesUI.CommunityHeaderContentView : UIView <TFNAttributedTextViewDelegate, TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.CommunityHeaderContentViewDelegate ? delegate;
    TwitterCommunitiesUI.CommunityHeaderContentViewModel viewModel;
    __C.UIStackView? $__lazy_storage_$_rootView;
    __C.UILabel? $__lazy_storage_$_nameLabel;
    __C.UIStackView? $__lazy_storage_$_descriptionView;
    __C.TFNAttributedTextView? $__lazy_storage_$_descriptionTextView;
    Swift.Bool shouldShowFullDescription;
    __C.NSAttributedString? $__lazy_storage_$_descriptionTruncationText;
    __C.UIImageView designationIconView;
    __C.UILabel designationTitleView;
    __C.UIStackView? $__lazy_storage_$_designationContainerView;
    __C.UIStackView? $__lazy_storage_$_membershipView;
    TwitterCommunitiesUI.CommunityFacepileView ? $__lazy_storage_$_facePileView;
    __C.UILabel? $__lazy_storage_$_membershipLabel;
    TwitterCommunitiesUI.CommunityJoinButton ? $__lazy_storage_$_joinButton;
    __C.TFNButton? $__lazy_storage_$_inviteButton;
    __C.TFNButton? $__lazy_storage_$_notificationButton;
    __C.TFNButton? $__lazy_storage_$_shareButton;
    __C.TFNButton? $__lazy_storage_$_pinButton;
    __C.UIStackView? $__lazy_storage_$_topicView;
    __C.TFNButton? $__lazy_storage_$_topicButton;
    __C.TFNButton? $__lazy_storage_$_adultContentButton;
}

/* instance methods */
- (void)attributedTextViewDidTapInactiveArea:(id)area;
- (void)attributedTextView:(id)view didTapTruncationTokenAreaWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)didSelectViewMembers;
- (void)didMoveToWindow;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)didTapJoinButton;

@end

#endif /* _TtC20TwitterCommunitiesUI26CommunityHeaderContentView_h */
