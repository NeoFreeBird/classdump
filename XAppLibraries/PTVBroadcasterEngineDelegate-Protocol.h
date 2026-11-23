//
#ifndef PTVBroadcasterEngineDelegate_Protocol_h
#define PTVBroadcasterEngineDelegate_Protocol_h
@import Foundation;

#include "PTVTwitterCameraBroadcastStateDelegate-Protocol.h"

@protocol PTVBroadcasterEngineDelegate <PTVTwitterCameraBroadcastStateDelegate>

@required

/* required instance methods */
- (void)broadcasterEngine:(id)engine didReceiveBroadcastViewersAndStats:(id)stats;
- (void)broadcasterEngine:(id)engine didReceiveBroadcastViewersAndStats:(id)stats;
- (void)broadcasterEngine:(id)engine didFailToStartBroadcastWithError:(id)error;

@optional

@end

#endif /* PTVBroadcasterEngineDelegate_Protocol_h */
