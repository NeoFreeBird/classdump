//
#ifndef XGoLiveBroadcasterCoordinatorDelegate_Protocol_h
#define XGoLiveBroadcasterCoordinatorDelegate_Protocol_h
@import Foundation;

@protocol XGoLiveBroadcasterCoordinatorDelegate

@required

/* required instance methods */
- (void)broadcasterCoordinator:(id)coordinator setChromeHidden:(_Bool)hidden;
- (void)broadcasterCoordinatorDidRequestFlipCamera:(id)camera;
- (void)broadcasterCoordinatorDidConfirmDeleteBroadcast:(id)broadcast;
- (void)broadcasterCoordinator:(id)coordinator didRequestReplayOfBroadcastWithID:(id)id;

@optional

@end

#endif /* XGoLiveBroadcasterCoordinatorDelegate_Protocol_h */
