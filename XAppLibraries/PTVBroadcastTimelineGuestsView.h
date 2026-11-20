//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBroadcastTimelineGuestsView_h
#define PTVBroadcastTimelineGuestsView_h
@import Foundation;

#include "PTVBroadcast.h"
#include "PTVLoggedInUserProtocol-Protocol.h"
#include "TAVHydraCoordinator.h"
#include "TAVHydraCoordinatorDelegate-Protocol.h"

@class NSMutableDictionary, UIView;

@interface PTVBroadcastTimelineGuestsView : UIView <TAVHydraCoordinatorDelegate> {
    /* instance variables */
    NSMutableDictionary *_guestContainerViews;
}

@property (retain, nonatomic) id <PTVLoggedInUserProtocol> loggedInUser;
@property (retain, nonatomic) PTVBroadcast *broadcast;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double shadowOpacity;
@property (retain, nonatomic) TAVHydraCoordinator *hydraCoordinator;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)hideCurrentAudioIndicators;
- (void)layoutSubviews;
- (id)guestViewWithUserID:(id)id;
- (_Bool)canAddGuestWithUserID:(id)id;
- (void)addGuestView:(id)view;
- (void)removeGuestViewWithUserID:(id)id;
- (void)removeGuestViewsWithUserIDs:(id)ids;
- (void)removeAllGuestViews;
- (void)hydraCoordinator:(id)coordinator didUpdateActiveGuestsWithAddedGuests:(id)guests removedGuests:(id)guests;
- (void)hydraCoordinatorDidUpdateAudioLevels:(id)levels;
- (void)hydraCoordinatorDidUpdateTargetRPO:(id)rpo;
- (id)hydraCoordinator:(id)coordinator playerStateForParticipant:(id)participant;

@end

#endif /* PTVBroadcastTimelineGuestsView_h */
