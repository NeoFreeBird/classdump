//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BroadcastCardBroadcastDetailViewModel_h
#define T1BroadcastCardBroadcastDetailViewModel_h
@import Foundation;

@class NSArray, NSObject, NSString, TFNTwitterUser, TFSTwitterUserDesignatorInfo, TUIUserBadger;

@interface T1BroadcastCardBroadcastDetailViewModel : NSObject

@property (readonly, nonatomic) TFNTwitterUser *attributedTwitterUser;
@property (readonly, nonatomic) _Bool verified;
@property (readonly, nonatomic) _Bool blueVerified;
@property (readonly, nonatomic) long long identityType;
@property (readonly, nonatomic) TFSTwitterUserDesignatorInfo *highlightedDesignatorInfo;
@property (readonly, nonatomic) TUIUserBadger *userBadger;
@property (readonly, nonatomic) _Bool showDisplayName;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) _Bool showDisplayUsername;
@property (readonly, copy, nonatomic) NSString *displayUsername;
@property (readonly, nonatomic) NSArray *userBadges;
@property (readonly, nonatomic) _Bool showTitle;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *adString;
@property (readonly, nonatomic) _Bool showingAd;
@property (readonly, nonatomic) _Bool isInvitation;

/* instance methods */
- (id)initWithAttributedUser:(id)user title:(id)title adString:(id)string isInvitation:(_Bool)invitation featureSwitches:(id)switches;
- (id)initWithDisplayName:(id)name displayUsername:(id)username verified:(_Bool)verified isBlueVerified:(_Bool)verified identityType:(long long)type highlightedDesignatorInfo:(id)info title:(id)title adString:(id)string isInvitation:(_Bool)invitation featureSwitches:(id)switches;
- (_Bool)isShowingAd;
- (_Bool)isEqualToViewModel:(id)model;
- (_Bool)isEqual:(id)equal;
- (_Bool)isVerified;
- (_Bool)isBlueVerified;

@end

#endif /* T1BroadcastCardBroadcastDetailViewModel_h */
