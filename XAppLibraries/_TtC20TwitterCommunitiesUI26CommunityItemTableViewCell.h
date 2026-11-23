//
#ifndef _TtC20TwitterCommunitiesUI26CommunityItemTableViewCell_h
#define _TtC20TwitterCommunitiesUI26CommunityItemTableViewCell_h
@import Foundation;

#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class TFNTableViewCell, TwitterCommunitiesUI.CommunityFacepileView ?, TwitterCommunitiesUI.CommunityItemTableViewCell.ViewModel ?, TwitterCommunitiesUI.CommunityItemTableViewCell.ViewModel _$s_ -> TwitterCommunitiesUI.CommunityItemTableViewCell.PinAction _$sySbctcSg, _$sSo11UIImageViewCSg, _$sSo11UIStackViewCSg, _$sSo12TFNBadgeViewCSg, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg;

@interface TwitterCommunitiesUI.CommunityItemTableViewCell : TFNTableViewCell <TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    TwitterCommunitiesUI.CommunityItemTableViewCell.ViewModel  first-element-marker  -> TwitterCommunitiesUI.CommunityItemTableViewCell.PinAction _$sySbctcSg onPinAction;
    TwitterCommunitiesUI.CommunityItemTableViewCell.ViewModel ? viewModel;
    __C.UIStackView? $__lazy_storage_$_rootStackView;
    __C.UIStackView? $__lazy_storage_$_detailsStackView;
    __C.UILabel? $__lazy_storage_$_adultContentLabel;
    __C.UIStackView? $__lazy_storage_$_nameView;
    __C.UILabel? $__lazy_storage_$_nameLabel;
    __C.UIStackView? $__lazy_storage_$_attributesStackView;
    __C.UILabel? $__lazy_storage_$_detailsLabel;
    __C.UILabel? $__lazy_storage_$_topicLabel;
    TwitterCommunitiesUI.CommunityFacepileView ? $__lazy_storage_$_facePileView;
    __C.UIImageView? $__lazy_storage_$_thumbnailImageView;
    __C.TFNBadgeView? $__lazy_storage_$_unreadIndicatorView;
    __C.TFNButton? $__lazy_storage_$_pinButton;
}

/* instance methods */
- (id)tui_focusRectanglesForFocusMode:(long long)mode inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forFetchHelper:(id)helper;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)helper;
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)didMoveToSuperview;
- (void)prepareForReuse;
- (void)layoutMetricsDidChange:(id)change to:(id)to;

@end

#endif /* _TtC20TwitterCommunitiesUI26CommunityItemTableViewCell_h */
