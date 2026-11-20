//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
