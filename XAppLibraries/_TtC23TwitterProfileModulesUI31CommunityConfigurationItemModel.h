//
#ifndef _TtC23TwitterProfileModulesUI31CommunityConfigurationItemModel_h
#define _TtC23TwitterProfileModulesUI31CommunityConfigurationItemModel_h
@import Foundation;

#include "TUIImageViewFetchHelperDelegate-Protocol.h"

@class NSObject, Swift.Bool, TwitterProfileModulesUI.CommunityConfigurationItemModel _$scSg ->, _$s14TFSTwitterCore27TwitterCommunityBannerMediaCMn ?, _$sSS, _$sSSSg, _$sSa -> _$s14TFSTwitterCore22TwitterCommunityMemberVMn ?, _$ss5Int64VMn ?;

@interface TwitterProfileModulesUI.CommunityConfigurationItemModel : NSObject <TUIImageViewFetchHelperDelegate> { // (Swift)
    /* instance variables */
    Swift.String accountId;
    Swift.String communityId;
    nominal type descriptor for TFSTwitterCore.TwitterCommunityBannerMedia ? bannerMedia;
    Swift.String displayName;
    Swift.String? communityDescription;
    Swift.Array -> nominal type descriptor for TFSTwitterCore.TwitterCommunityMember ? membersFacepile;
    nominal type descriptor for Swift.Int64 ? memberCount;
    Swift.Bool selected;
    TwitterProfileModulesUI.CommunityConfigurationItemModel _$scSg -> tapHandler;
}

/* instance methods */
- (id)tui_focusRectanglesForFocusMode:(long long)mode inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds forFetchHelper:(id)helper;
- (long long)tui_scaleAspectFillFocusModeForFetchHelper:(id)helper;
- (id)init;

@end

#endif /* _TtC23TwitterProfileModulesUI31CommunityConfigurationItemModel_h */
