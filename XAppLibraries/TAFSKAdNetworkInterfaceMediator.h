//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFSKAdNetworkInterfaceMediator_h
#define TAFSKAdNetworkInterfaceMediator_h
@import Foundation;

#include "TAFSKAdNetworkInterface-Protocol.h"

@class NSObject;

@interface TAFSKAdNetworkInterfaceMediator : NSObject <TAFSKAdNetworkInterface> // (Swift)

/* instance methods */
- (void)startSKAdImpression:(id)impression completion:(id /* block */)completion;
- (void)endSKAdImpression:(id)impression completion:(id /* block */)completion;
- (id)init;

@end

#endif /* TAFSKAdNetworkInterfaceMediator_h */
