//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUIP33_F82C8FB428FBE1FE0E94BFBD31381A8024CommunityJoinRequestCell_h
#define _TtC20TwitterCommunitiesUIP33_F82C8FB428FBE1FE0E94BFBD31381A8024CommunityJoinRequestCell_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class TFNTableViewCell;

@interface TwitterCommunitiesUI.(CommunityJoinRequestCell in _F82C8FB428FBE1FE0E94BFBD31381A80) : TFNTableViewCell <TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 delegate;
    @40@0:8:16@24@32 viewModel;
    @40@0:8:16@24@32 contentStackView;
    @40@0:8:16@24@32 $__lazy_storage_$_userView;
    @40@0:8:16@24@32 $__lazy_storage_$_buttonsStackView;
    @40@0:8:16@24@32 $__lazy_storage_$_approveButton;
    @40@0:8:16@24@32 $__lazy_storage_$_denyButton;
    @40@0:8:16@24@32 additionalButtonConstraints;
    @40@0:8:16@24@32 timestampLabel;
    @40@0:8:16@24@32 timestampSeparatorDotLabel;
    @40@0:8:16@24@32 blockedMutedDetailsLabel;
    @40@0:8:16@24@32 userAnswerLabel;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)didTapApprove;
- (void)didTapDeny;

@end

#endif /* _TtC20TwitterCommunitiesUIP33_F82C8FB428FBE1FE0E94BFBD31381A8024CommunityJoinRequestCell_h */
