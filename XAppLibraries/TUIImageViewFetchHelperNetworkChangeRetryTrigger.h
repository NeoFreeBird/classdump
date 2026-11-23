//
#ifndef TUIImageViewFetchHelperNetworkChangeRetryTrigger_h
#define TUIImageViewFetchHelperNetworkChangeRetryTrigger_h
@import Foundation;

#include "TNLCommunicationAgentObserver-Protocol.h"

@class NSObject, NSString;

@interface TUIImageViewFetchHelperNetworkChangeRetryTrigger : NSObject <TNLCommunicationAgentObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;

@end

#endif /* TUIImageViewFetchHelperNetworkChangeRetryTrigger_h */
