//
#ifndef _TtC10TwitterURT24URTRemoteReactionContext_h
#define _TtC10TwitterURT24URTRemoteReactionContext_h
@import Foundation;

#include "_TtC10TwitterURT24URTTimelineUpdateContext.h"

@class TwitterURT.URTReactionTriggerPosition, URTModels.URTReactionTriggerPath ?, _$sSDyS2SG, _$sSo23TFSTwitterScribeContextCSg, _$ss5Int64VMn ?;

@interface TwitterURT.URTRemoteReactionContext : TwitterURT.URTTimelineUpdateContext { // (Swift)
    /* instance variables */
    [Swift.String : Swift.String] requestParams;
    nominal type descriptor for Swift.Int64 ? timeoutInSeconds;
    __C.TFSTwitterScribeContext? scribeContext;
    URTModels.URTReactionTriggerPath ? reactionTriggerPath;
    TwitterURT.URTReactionTriggerPosition triggerPosition;
}

@end

#endif /* _TtC10TwitterURT24URTRemoteReactionContext_h */
