//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUIUserBadger_h
#define TUIUserBadger_h
@import Foundation;

@class NSObject;

@interface TUIUserBadger : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 internalBadger;
}

/* class methods */
+ (id)defaultBadger;
+ (id)verifiedOnlyBadger;
+ (id)superfollowBadger;
+ (id)profileBadger;

/* instance methods */
- (id)authorBadgeForStatus:(id)status;
- (id)authorBadgesForStatus:(id)status account:(id)account;
- (id)badgesForCanonicalUser:(id)user;
- (id)badgeForCanonicalUser:(id)user;
- (id)badgeForTypeaheadUser:(id)user;
- (id)badgesForTypeaheadUser:(id)user;
- (id)badgeForUserVerified:(_Bool)verified isBlueVerified:(_Bool)verified identityType:(long long)type protectedUser:(_Bool)user usernameless:(_Bool)usernameless translatorType:(long long)type highlightedDesignatorInfo:(id)info;
- (id)badgesForUserVerified:(_Bool)verified isBlueVerified:(_Bool)verified identityType:(long long)type protectedUser:(_Bool)user usernameless:(_Bool)usernameless translatorType:(long long)type highlightedDesignatorInfo:(id)info;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TUIUserBadger_h */
