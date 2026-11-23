//
#ifndef T1VoiceRoomScheduledSpaceViewModel_h
#define T1VoiceRoomScheduledSpaceViewModel_h
@import Foundation;

#include "TASSpaceModelObserver-Protocol.h"
#include "TASSpacesContext-Protocol.h"

@class NSObject;

@interface T1VoiceRoomScheduledSpaceViewModel : NSObject <TASSpaceModelObserver> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *title;
    NSNumber"16@0:8 *scheduledDate;
    NSNumber"16@0:8 *topicIDs;
    NSNumber"16@0:8 *narrowCastType;
    NSNumber"16@0:8 *contentType;
    NSNumber"16@0:8 *isAvailableForReplay;
    NSNumber"16@0:8 *isAvailableForClipping;
    NSNumber"16@0:8 *isAvailableForTweetSharing;
    NSNumber"16@0:8 *schedulerViewModel;
    NSNumber"16@0:8 *spaceModel;
    NSNumber"16@0:8 *authorizationManager;
    NSNumber"16@0:8 *needsLoading;
    NSNumber"16@0:8 *communityID;
    NSNumber"16@0:8 *noIncognito;
    NSNumber"16@0:8 *delegate;
}

@property (nonatomic, readonly) id <TASSpacesContext> context;

/* instance methods */
- (void)spaceModel:(id)model didUpdateLoggedInUserModel:(id)model;
- (void)spaceModel:(id)model didSubscribeScheduledSpaceWithSpaceID:(id)id sender:(id)sender automaticToast:(_Bool)toast;
- (void)spaceModel:(id)model didFailToSubscribeScheduledSpaceWithError:(id)error sender:(id)sender automaticToast:(_Bool)toast;
- (void)spaceModel:(id)model didUnsubscribeScheduledSpaceWithSpaceID:(id)id sender:(id)sender;
- (void)spaceModel:(id)model didFailToUnsubscribeScheduledSpaceWithError:(id)error sender:(id)sender;
- (void)spaceModelDidChangeConnectionState:(id)state fromState:(long long)state;
- (void)spaceModel:(id)model didUpdateSettings:(id)settings;
- (id)initWithContext:(id)context title:(id)title scheduledDate:(id)date isAvailableForReplay:(_Bool)replay isAvailableForClipping:(_Bool)clipping authorizationManager:(id)manager topicIDs:(id)ids narrowCastType:(long long)type contentType:(long long)type isAvailableForTweetSharing:(_Bool)sharing communityID:(id)id noIncognito:(_Bool)incognito;
- (id)initWithSpaceModel:(id)model;
- (void)dealloc;
- (void)scheduleSpace;
- (void)subscribeWithAutomaticToast:(_Bool)toast;
- (void)unsubscribe;
- (id)init;

@end

#endif /* T1VoiceRoomScheduledSpaceViewModel_h */
