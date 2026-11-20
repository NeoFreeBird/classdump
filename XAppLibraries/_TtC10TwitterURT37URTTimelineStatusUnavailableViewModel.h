//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TwitterURT37URTTimelineStatusUnavailableViewModel_h
#define _TtC10TwitterURT37URTTimelineStatusUnavailableViewModel_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSObject, Swift.Bool, _$sSi;

@interface TwitterURT.URTTimelineStatusUnavailableViewModel : NSObject <NSObject> { // (Swift)
    /* instance variables */
    Swift.Int numberOfUnavailableTweets;
    Swift.Bool isConversationAncestor;
}

@property (nonatomic) _Bool isConversationPrecededByAncestor;

/* instance methods */
- (id)init;

@end

#endif /* _TtC10TwitterURT37URTTimelineStatusUnavailableViewModel_h */
