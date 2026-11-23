//
#ifndef _TtC18TwitterAudiospaces24CardContentUserViewModel_h
#define _TtC18TwitterAudiospaces24CardContentUserViewModel_h
@import Foundation;

@class NSObject, Swift.Bool, TwitterAudiospaces.CardContentUserViewModelRole, _$s14TFSTwitterCore0A13UserReferenceCMn, _$sSSSg, _$sSa -> TwitterUISwift.UserBadge, _$sSo7UIColorCSg, __C.TFSTwitterUserIdentityType, __C.TFSTwitterUserProfileImageShape;

@interface TwitterAudiospaces.CardContentUserViewModel : NSObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSTwitterCore.TFSTwitterUserReference userReference;
    Swift.String? profileImageURL;
    Swift.Array -> TwitterUISwift.UserBadge badges;
    __C.TFSTwitterUserIdentityType identityType;
    Swift.Bool isFollowed;
    TwitterAudiospaces.CardContentUserViewModelRole role;
    Swift.String? bio;
    __C.UIColor? color;
    __C.TFSTwitterUserProfileImageShape profileImageShape;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC18TwitterAudiospaces24CardContentUserViewModel_h */
