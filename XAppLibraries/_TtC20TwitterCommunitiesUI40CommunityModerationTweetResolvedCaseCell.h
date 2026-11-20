//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUI40CommunityModerationTweetResolvedCaseCell_h
#define _TtC20TwitterCommunitiesUI40CommunityModerationTweetResolvedCaseCell_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class TFNTableViewCell, TwitterCommunitiesUI.CommunityModerationTweetCaseViewModel ?, _$sSo11UIImageViewCSg, _$sSo11UIStackViewCSg, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg, _$sySo9TFNButtonCcSg;

@interface TwitterCommunitiesUI.CommunityModerationTweetResolvedCaseCell : TFNTableViewCell <TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    __C.UIStackView? $__lazy_storage_$_containerStackView;
    __C.UIImageView? $__lazy_storage_$_iconImageView;
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.TFNButton? $__lazy_storage_$_moreButton;
    ((__C.TFNButton) -> ())? moreButtonAction;
    TwitterCommunitiesUI.CommunityModerationTweetCaseViewModel ? viewModel;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)didTapMoreButton;

@end

#endif /* _TtC20TwitterCommunitiesUI40CommunityModerationTweetResolvedCaseCell_h */
