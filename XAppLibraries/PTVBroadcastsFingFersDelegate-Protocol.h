//
#ifndef PTVBroadcastsFingFersDelegate_Protocol_h
#define PTVBroadcastsFingFersDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVBroadcastsFingFersDelegate <NSObject>

@required

/* required instance methods */
- (void)didSelectBroadcastToLaunch:(id)launch withWatchContext:(id)context inCollection:(id)collection;
- (void)didSelectUserProfileWithUserID:(id)id;

@optional

/* optional instance methods */
- (void)setWatchLiveBannerVisibile:(_Bool)visibile;

@end

#endif /* PTVBroadcastsFingFersDelegate_Protocol_h */
