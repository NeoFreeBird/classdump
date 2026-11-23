//
#ifndef _TtC39TwitterClientEventServicesNetworkEvents37ClientNetworkOperationEventCESAdapter_h
#define _TtC39TwitterClientEventServicesNetworkEvents37ClientNetworkOperationEventCESAdapter_h
@import Foundation;

#include "CESClientEvent-Protocol.h"
#include "_TtP26TwitterClientEventServices18ThriftObjCProtocol_-Protocol.h"

@class NSObject, _$sSo42TFSScribeThriftClientNetworkOperationEventC;

@interface TwitterClientEventServicesNetworkEvents.ClientNetworkOperationEventCESAdapter : NSObject <CESClientEvent> { // (Swift)
    /* instance variables */
    __C.TFSScribeThriftClientNetworkOperationEvent event;
}

@property (nonatomic, readonly) id <TwitterClientEventServices.ThriftObjCProtocol> model;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) int priority;

/* instance methods */
- (id)debugName;
- (id)init;

@end

#endif /* _TtC39TwitterClientEventServicesNetworkEvents37ClientNetworkOperationEventCESAdapter_h */
