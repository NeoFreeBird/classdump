//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVWatchViewDelegate_Protocol_h
#define PTVWatchViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVWatchViewDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)canLoadFromNetwork;
- (void)didSelectHashtag:(id)hashtag;
- (void)socialProofHeightDidChange;

@end

#endif /* PTVWatchViewDelegate_Protocol_h */
