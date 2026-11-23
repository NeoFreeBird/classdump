//
#ifndef T1UserViewOptions_h
#define T1UserViewOptions_h
@import Foundation;

#include "T1UserViewActionControlProvider-Protocol.h"
#include "T1UserViewModel-Protocol.h"
#include "T1UserViewOptions-Protocol.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSObject, NSString, TUIUserBadger;

@interface T1UserViewOptions : NSObject <T1UserViewOptions>

@property (nonatomic) long long userCellStyle;
@property (retain, nonatomic) id <T1UserViewModel> viewModel;
@property (retain, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (nonatomic) _Bool enableTappableSocialProof;
@property (nonatomic) _Bool expanded;
@property (nonatomic) _Bool showAdminTextLabel;
@property (nonatomic) _Bool showBio;
@property (nonatomic) _Bool showAutoTranslate;
@property (nonatomic) _Bool isTranslationAnnotationOnly;
@property (nonatomic) _Bool reservesActionControlColumn;
@property (nonatomic) _Bool showBlockedYou;
@property (nonatomic) _Bool showDesignatorBadge;
@property (nonatomic) _Bool showParodyBadge;
@property (nonatomic) _Bool showFollowsYou;
@property (nonatomic) _Bool showMuteBadge;
@property (nonatomic) _Bool showUnmuted;
@property (nonatomic) _Bool showUsernameLabel;
@property (nonatomic) _Bool socialContextViewShowsBadge;
@property (nonatomic) _Bool unread;
@property (nonatomic) _Bool avatarAccessibilityElement;
@property (nonatomic) _Bool avatarSelectable;
@property (nonatomic) _Bool userBlocked;
@property (nonatomic) _Bool userInfoSelectable;
@property (nonatomic) unsigned long long bioMaxLines;
@property (retain, nonatomic) id <T1UserViewActionControlProvider> actionControlProvider;
@property (nonatomic) struct CGSize { double x0; double x1; } avatarSize;
@property (nonatomic) long long caretType;
@property (retain, nonatomic) TUIUserBadger *userBadger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (_Bool)isEqual:(id)equal;
- (_Bool)isAvatarAccessibilityElement;
- (_Bool)isAvatarSelectable;
- (_Bool)isUserBlocked;
- (_Bool)isUserInfoSelectable;

@end

#endif /* T1UserViewOptions_h */
