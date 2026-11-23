//
#ifndef TUIFollowControl_h
#define TUIFollowControl_h
@import Foundation;

#include "TFNBinaryChoiceDelegate-Protocol.h"
#include "TFSTwitterPromotedEventMetadata-Protocol.h"
#include "TUITwitterUserContext.h"
#include "_TtP10TAPAccount21TAPAccountPerspective_-Protocol.h"

@class NSNumber, NSString, TFNBinaryChoiceControl, TFNButton, TFNCustomScreenshotContainerView, TFSTwitterRelationship, TFSTwitterScribeContext, UINotificationFeedbackGenerator, UIView;
@protocol TFSTwitterAccountFeatureSwitchProviding, TFSTwitterAccountFollowing, TFSTwitterAccountScribeAccess, TFSTwitterUserDataSourceModel, TUIFollowControlDelegate;

@interface TUIFollowControl : UIView <TFNBinaryChoiceDelegate> {
    /* instance variables */
    _Bool _haveCustomTouchInsets;
    TFNCustomScreenshotContainerView *_screenshotContainerView;
    UINotificationFeedbackGenerator *_notificationFeedbackGenerator;
}

@property (nonatomic) long long state;
@property (retain, nonatomic) TFNButton *followButtonV1;
@property (retain, nonatomic) TFNBinaryChoiceControl *followerRequestControl;
@property (retain, nonatomic) TFSTwitterRelationship *standinRelationship;
@property (retain, nonatomic) NSNumber *standinProtectedUser;
@property (readonly, nonatomic) id <TAPAccount.TAPAccountPerspective, TFSTwitterAccountFollowing, TFSTwitterAccountScribeAccess, TFSTwitterAccountFeatureSwitchProviding> account;
@property (readonly, nonatomic) id <TFSTwitterUserDataSourceModel> userDataSource;
@property (readonly, nonatomic) TUITwitterUserContext *userContext;
@property (copy, nonatomic) TFSTwitterScribeContext *scribeContext;
@property (nonatomic) unsigned long long followControlType;
@property (nonatomic) unsigned long long variant;
@property (retain, nonatomic) id <TFSTwitterPromotedEventMetadata> promotedMetadata;
@property (weak, nonatomic) id <TUIFollowControlDelegate> delegate;
@property (nonatomic) _Bool confirmUnfollow;
@property (nonatomic) _Bool showUnblocked;
@property (nonatomic) _Bool showDMBlocked;
@property (nonatomic) _Bool confirmBlock;
@property (nonatomic) _Bool isCustomScreenshotsEnabled;
@property (nonatomic) struct CGSize { double x0; double x1; } overrideSize;
@property (readonly, nonatomic) long long buttonState;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } touchInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)stateForUser:(id)user;
+ (long long)stateForUserRelationship:(id)relationship userIsProtected:(_Bool)_protected showUnblocked:(_Bool)unblocked showDMBlocked:(_Bool)dmblocked;
+ (struct CGSize { double x0; double x1; })sizeForFollowControlType:(unsigned long long)type variant:(unsigned long long)variant user:(id)user;
+ (struct CGSize { double x0; double x1; })sizeForFollowControlType:(unsigned long long)type variant:(unsigned long long)variant state:(long long)state;
+ (struct CGSize { double x0; double x1; })_defaultSwitchSize;
+ (id)_inFlightTaskForToken:(id)token;
+ (id)updateItemsInParameters:(id)parameters tweetScribeItem:(id)item;
+ (void)_scribeAction:(id)action forToken:(id)token tweetScribeItem:(id)item;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (id)initWithFollowControlType:(unsigned long long)type variant:(unsigned long long)variant;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setUserDataSource:(id)source userContext:(id)context account:(id)account standinRelationship:(id)relationship standinProtectedUser:(id)user;
- (void)_userDataSourceDidUpdate:(id)update;
- (void)_setState:(long long)state removeAllControls:(_Bool)controls;
- (void)updateState;
- (void)performAction:(unsigned long long)action fromView:(id)view;
- (long long)_tui_computeFollowControlState;
- (void)_updateAndRemoveAllControls:(_Bool)controls;
- (void)_requestLayoutUpdate;
- (void)_updateFollowButton;
- (void)_setupScreenshotContainer;
- (void)_setupFollowButton:(long long)button;
- (void)_setupFollowerRequestControl;
- (void)_removeAllControls;
- (void)_configureFollowButtonForButtonState:(long long)state;
- (void)_configureFollowButtonMenu;
- (void)_tui_resizeFollowButton;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)_willPerformAction:(unsigned long long)action event:(id)event;
- (void)_didPerformActionWithToken:(id)token success:(_Bool)success error:(id)error;
- (void)_followUser:(id)user event:(id)event;
- (void)_unfollowUser:(id)user event:(id)event;
- (void)_cancelPendingFollowRequest:(id)request event:(id)event;
- (void)_unblockUser:(id)user event:(id)event;
- (void)_blockUser:(id)user event:(id)event;
- (void)_unblockMessageUser:(id)user event:(id)event;
- (void)_blockMessageUser:(id)user event:(id)event;
- (void)_showMenuSheetWithActionItem:(id)item sender:(id)sender;
- (void)_showMenuSheetWithActionItems:(id)items sender:(id)sender;
- (void)_showActionSheetWithActionItems:(id)items sender:(id)sender;
- (void)_doUnfollowUserWithEvent:(id)event;
- (void)_doCancelPendingFollowRequestWithEvent:(id)event;
- (void)_doUnblockUser:(id)user event:(id)event;
- (void)_doBlockUser:(id)user event:(id)event;
- (void)_doUnblockMessageUser:(id)user event:(id)event;
- (void)_doBlockMessageUser:(id)user event:(id)event;
- (void)_didFollowUserForToken:(id)token success:(_Bool)success error:(id)error;
- (void)_didUnfollowUserForToken:(id)token success:(_Bool)success error:(id)error;
- (void)_didCancelPendingFollowRequestForToken:(id)token success:(_Bool)success error:(id)error;
- (void)_didUnblockUserForToken:(id)token success:(_Bool)success error:(id)error;
- (void)_didBlockUserForToken:(id)token success:(_Bool)success error:(id)error;
- (void)_didAcceptFollowerRequestForToken:(id)token success:(_Bool)success error:(id)error;
- (void)_didDeclineFollowerRequestForToken:(id)token success:(_Bool)success error:(id)error;
- (id)_promotedMetadata;
- (void)didAccept:(id)accept event:(id)event;
- (void)didDecline:(id)decline event:(id)event;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (id)viewForLastBaselineLayout;

@end

#endif /* TUIFollowControl_h */
