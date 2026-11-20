//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC20TwitterCommunitiesUIP33_F82C8FB428FBE1FE0E94BFBD31381A8032CommunityResolvedJoinRequestCell_h
#define _TtC20TwitterCommunitiesUIP33_F82C8FB428FBE1FE0E94BFBD31381A8032CommunityResolvedJoinRequestCell_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class TFNTableViewCell;

@interface TwitterCommunitiesUI.(CommunityResolvedJoinRequestCell in _F82C8FB428FBE1FE0E94BFBD31381A80) : TFNTableViewCell <TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 contentStackView;
    @40@0:8:16@24@32 iconImageView;
    @40@0:8:16@24@32 titleLabel;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutMetricsDidChange:(id)change to:(id)to;

@end

#endif /* _TtC20TwitterCommunitiesUIP33_F82C8FB428FBE1FE0E94BFBD31381A8032CommunityResolvedJoinRequestCell_h */
