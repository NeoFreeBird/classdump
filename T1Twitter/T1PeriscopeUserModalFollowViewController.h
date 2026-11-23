//
#ifndef T1PeriscopeUserModalFollowViewController_h
#define T1PeriscopeUserModalFollowViewController_h
@import Foundation;

#include "T1BroadcastingFeatures.h"
#include "T1FollowLiveFollowButtonsProtocol-Protocol.h"

@class NSString, TFNTwitterAccount, TFNTwitterUser, UIViewController;

@interface T1PeriscopeUserModalFollowViewController : UIViewController <T1FollowLiveFollowButtonsProtocol>

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) T1BroadcastingFeatures *broadcastingFeatures;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) TFNTwitterUser *user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account username:(id)username;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (void)private_loadUser;
- (void)private_updateUserRelationshipIfNeeded;
- (long long)private_preferredButtonSize;
- (void)private_userUpdated:(id)updated;
- (void)private_reloadData;
- (void)private_failedToLoadUser;
- (void)followLiveFollowButtonsView:(id)view didTapFollowForUser:(id)user;
- (void)followLiveFollowButtonsView:(id)view didTapLiveFollowForUser:(id)user;
- (_Bool)followPromptViewCanShowLiveFollowButton:(id)button;
- (id)scribePage;
- (id)scribeComponent;

@end

#endif /* T1PeriscopeUserModalFollowViewController_h */
