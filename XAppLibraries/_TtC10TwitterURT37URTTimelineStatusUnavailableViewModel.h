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
