//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ActivityHistoryPlaybackObserver_h
#define ActivityHistoryPlaybackObserver_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"

@class NSObject;

@interface ActivityHistoryPlaybackObserver : NSObject <TAVPlaybackObserver> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 account;
    @40@0:8:16@24@32 mediaKey;
    @40@0:8:16@24@32 statusID;
    @40@0:8:16@24@32 minimumDurationSeconds;
    @40@0:8:16@24@32 minimumProgressSeconds;
}

/* instance methods */
- (void)player:(id)player didUpdatePlaybackState:(id)state;
- (id)init;

@end

#endif /* ActivityHistoryPlaybackObserver_h */
