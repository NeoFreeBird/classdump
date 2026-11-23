//
#ifndef PTVTwitterCameraLiveDelegate_Protocol_h
#define PTVTwitterCameraLiveDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVTwitterCameraLiveDelegate <NSObject>

@required

/* required instance methods */
- (id)twitterCameraLiveCopyrightViolationLearnMoreURL;

@optional

/* optional instance methods */
- (void)twitterCameraLiveBroadcastCapabilityChanged:(long long)changed;
- (void)twitterCameraLiveBroadcastStatusChangedForBroadcast:(id)broadcast status:(long long)status;
- (_Bool)twitterCameraLiveCanShareBroadcast;
- (void)twitterCameraLiveComposeTweetForBroadcast:(id)broadcast atTimecode:(double)timecode initialTimecode:(double)timecode screenshot:(id)screenshot fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view withCompletion:(id /* block */)completion;
- (void)twitterCameraLiveComposeDirectMessageForBroadcast:(id)broadcast atTimecode:(double)timecode initialTimecode:(double)timecode fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view withCompletion:(id /* block */)completion;
- (void)twitterCameraLiveShareURLOfBroadcast:(id)broadcast atTimecode:(double)timecode initialTimecode:(double)timecode fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inView:(id)view withCompletion:(id /* block */)completion;
- (void)twitterCameraLiveReportBroadcast:(id)broadcast;
- (_Bool)twitterCameraLiveCanRetweetBroadcast:(id)broadcast;
- (_Bool)twitterCameraLiveShouldSaveToCameraRoll;
- (void)twitterCameraLiveRetweetBroadcast:(id)broadcast withCompletion:(id /* block */)completion;
- (void)twitterCameraLiveDidBlockUser:(id)user;
- (void)twitterCameraLiveDidUnblockUser:(id)user;
- (id)twitterCameraLiveBlockedTwitterIDs;
- (void)twitterCameraLiveDidStartBroadcast:(id)broadcast;
- (void)twitterCameraLiveDidStopBroadcast:(id)broadcast;
- (void)twitterCameraLiveDidSendChatMessage:(id)message;
- (void)twitterCameraLiveDidFailToStartBroadcastWithError:(id)error;
- (void)twitterCameraLiveDidUpdateTotalViewerCount:(long long)count;
- (void)twitterCameraLiveDeleteBroadcast:(id)broadcast;
- (id)twitterCameraLiveViewControllerForProfileFollow:(id)follow;
- (void)twitterCameraLiveDidDetectCopyrightViolation;
- (void)twitterCameraLiveDidObserveAuthErrorWithInfo:(id)info;
- (void)twitterCameraLiveDidDismissCopyrightViewController;
- (double)twitterCameraLiveGuestViewsTopMargin;
- (_Bool)twitterCameraLiveIsGuestBroadcastingCreationEnabled;
- (_Bool)twitterCameraLiveShouldUseModalSheetForUserProfile;
- (void)twitterCameraLiveLogAction:(id)action element:(id)element;
- (long long)twitterCameraLiveClient;

@end

#endif /* PTVTwitterCameraLiveDelegate_Protocol_h */
