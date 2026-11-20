//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift35LaunchMetricsReporterNetworkMonitor_h
#define _TtC14T1TwitterSwift35LaunchMetricsReporterNetworkMonitor_h
@import Foundation;

#include "TNLCommunicationAgentObserver-Protocol.h"

@class NSObject, Swift.Bool, _$sSo21TNUCommunicationAgentC;

@interface T1TwitterSwift.LaunchMetricsReporterNetworkMonitor : NSObject <TNLCommunicationAgentObserver> { // (Swift)
    /* instance variables */
    __C.TNUCommunicationAgent communicationAgent;
    Swift.Bool hasNetworkRemainedReachable;
}

/* instance methods */
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (void)tnl_communicationAgent:(id)agent didRegisterObserverWithInitialReachabilityFlags:(unsigned int)flags status:(long long)status carrierInfo:(id)info WWANRadioAccessTechnology:(id)technology captivePortalStatus:(long long)status;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift35LaunchMetricsReporterNetworkMonitor_h */
