//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SpacesNavigation_h
#define T1SpacesNavigation_h
@import Foundation;

#include "TASSpaceViewController-Protocol.h"
#include "TASSpacesContext-Protocol.h"
#include "TASSpacesNavigatable-Protocol.h"

@class NSHashTable, NSObject, NSTimer, UIViewController;

@interface T1SpacesNavigation : NSObject <TASSpacesNavigatable>

@property (readonly, weak, nonatomic) id <TASSpacesContext> spacesContext;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSTimer *joinAttemptTimer;
@property (retain, nonatomic) UIViewController<TASSpaceViewController> *currentSpaceViewController;
@property (readonly, nonatomic) _Bool isCurrentlyHostingSpace;
@property (readonly, nonatomic) _Bool isCurrentlyInSpace;

/* instance methods */
- (id)initWithContext:(id)context;
- (_Bool)canJoinSpace:(id)space;
- (id)createSpaceExpandingButtonItemWithScribeSection:(id)section;
- (id)shareToSpaceActionItemForStatus:(id)status;
- (void)presentNewSpaceWithSpaceModel:(id)model;
- (void)presentSpaceCreateViewControllerWithCreationContext:(long long)context;
- (void)createSpaceWithSpaceModel:(id)model fromViewController:(id)controller;
- (void)presentExistingSpaceWithSpaceModel:(id)model isPreview:(_Bool)preview source:(id)source;
- (void)presentExistingSpaceWithSpaceID:(id)id isPreview:(_Bool)preview source:(id)source;
- (void)presentCommunitySpaceCreateViewControllerWithCommunityID:(id)id communityName:(id)name component:(id)component;
- (void)presentCommunitySpaceCreateViewControllerWithCommunityModel:(id)model component:(id)component;
- (void)presentClipEditWithSpaceModel:(id)model fromViewController:(id)controller;
- (void)presentReplaySpaceWithSpaceID:(id)id forceReplay:(_Bool)replay isEditingTitle:(_Bool)title source:(id)source;
- (void)presentReplaySpaceWithSpaceModel:(id)model forceReplay:(_Bool)replay isEditingTitle:(_Bool)title source:(id)source;
- (void)presentEndedSpaceWithSpaceModel:(id)model;
- (void)presentScheduledSpaceDetailsWithSpaceID:(id)id;
- (void)presentScheduledSpaceDetailsFromViewController:(id)controller spaceID:(id)id;
- (void)presentScheduledSpaceDetailsFromViewController:(id)controller spaceModel:(id)model;
- (void)presentFullScreenVideoWithSpaceModel:(id)model;
- (void)presentEditScheduledSpaceDetailsModalFromViewController:(id)controller audiospace:(id)audiospace;
- (void)presentEditScheduledSpaceDetailsFromViewController:(id)controller spaceID:(id)id;
- (void)presentScheduledOrExistingSpaceViewControllerWithSpaceID:(id)id source:(id)source completion:(id /* block */)completion;
- (void)presentTabNUXTooltipViewControllerWithHighlightFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame completion:(id /* block */)completion;
- (void)presentDeviceUnavailableAlert;
- (void)presentPeriscopeRectifyAccountViewControllerWithRectifyURL:(id)url fromViewController:(id)controller completion:(id /* block */)completion;
- (void)openActiveTextRange:(id)range scribeContext:(id)context fromViewController:(id)controller;
- (void)presentSpaceUserModel:(id)model spaceModel:(id)model fromViewController:(id)controller;
- (void)presentSpaceUser:(id)user spaceModel:(id)model fromViewController:(id)controller;
- (void)presentSpaceGuestsWithSpaceModel:(id)model fromViewController:(id)controller;
- (void)presentSpaceWithExistingViewController:(id)controller;
- (void)presentInModal:(id)modal fromViewController:(id)controller embedInNavigationController:(_Bool)controller expandable:(_Bool)expandable prefersFullScreen:(_Bool)screen slideoverContentExtendsBelowHandle:(_Bool)handle navigationBarHidden:(_Bool)hidden;
- (void)presentInModal:(id)modal fromViewController:(id)controller embedInNavigationController:(_Bool)controller expandable:(_Bool)expandable;
- (void)presentInModal:(id)modal fromViewController:(id)controller expandable:(_Bool)expandable slideoverContentExtendsBelowHandle:(_Bool)handle navigationBarHidden:(_Bool)hidden;
- (void)presentTweetWithViewModel:(id)model statusID:(long long)id fromViewController:(id)controller;
- (void)presentDMConversationWithUserID:(long long)id fromViewController:(id)controller;
- (void)presentCurrentSpace;
- (void)leaveCurrentSpace;
- (void)leaveSpace:(id)space;
- (void)leaveFailedScheduledSpace:(id)space andPresentScheduledSpaceDetailsWithSpaceModel:(id)model;
- (_Bool)hasPresentedTutorial:(long long)tutorial;
- (void)didPresentTutorial:(long long)tutorial;
- (void)resetTutorial:(long long)tutorial;
- (void)resetTutorials;
- (void)resetTooltipTutorials;
- (_Bool)shouldPresentWithTutorial:(long long)tutorial;
- (void)addSpacesNavigatableObserver:(id)observer;
- (void)removeSpacesNavigatableObserver:(id)observer;
- (id)currentSpaceModel;
- (id)spaceModelWithSpaceID:(id)id;
- (id)spaceModelWithSpaceID:(id)id conferenceKey:(id)key;
- (id)spaceModelWithAudiospace:(id)audiospace;
- (void)openURL:(id)url fromViewController:(id)controller;
- (void)updateConferenceWithKey:(id)key attendeeUserIDs:(id)ids completion:(id /* block */)completion;
- (id)spaceViewController:(id)controller isPreview:(_Bool)preview isReplay:(_Bool)replay isCreating:(_Bool)creating navigationSource:(id)source;
- (void)presentSpaceWithViewController:(id)controller;

@end

#endif /* T1SpacesNavigation_h */
