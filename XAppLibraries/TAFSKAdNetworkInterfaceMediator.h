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
