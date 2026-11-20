//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNLCommunicationAgentObserver_Protocol_h
#define TNLCommunicationAgentObserver_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TNLCommunicationAgentObserver <NSObject>

@required

@optional

/* optional instance methods */
- (void)tnl_communicationAgent:(id)agent didRegisterObserverWithInitialReachabilityFlags:(unsigned int)flags status:(long long)status carrierInfo:(id)info WWANRadioAccessTechnology:(id)technology captivePortalStatus:(long long)status;
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (void)tnl_communicationAgent:(id)agent didUpdateCarrierFromPreviousInfo:(id)info toCurrentInfo:(id)info;
- (void)tnl_communicationAgent:(id)agent didUpdateWWANRadioAccessTechnologyFromPreviousTech:(id)tech toCurrentTech:(id)tech;
- (void)tnl_communicationAgent:(id)agent didUpdateCaptivePortalStatusFromPreviousStatus:(long long)status toCurrentStatus:(long long)status;

@end

#endif /* TNLCommunicationAgentObserver_Protocol_h */
