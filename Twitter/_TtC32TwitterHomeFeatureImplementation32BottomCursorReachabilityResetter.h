//
#ifndef _TtC32TwitterHomeFeatureImplementation32BottomCursorReachabilityResetter_h
#define _TtC32TwitterHomeFeatureImplementation32BottomCursorReachabilityResetter_h
@import Foundation;

#include "TNLCommunicationAgentObserver-Protocol.h"

@class NSObject, _$s10TwitterURT29URTBottomCursorBackoffManagerCMn ?;

@interface TwitterHomeFeatureImplementation.BottomCursorReachabilityResetter : NSObject <TNLCommunicationAgentObserver> { // (Swift)
    /* instance variables */
    nominal type descriptor for TwitterURT.URTBottomCursorBackoffManager ? backoffManager;
}

/* instance methods */
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (id)init;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation32BottomCursorReachabilityResetter_h */
