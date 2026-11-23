//
#ifndef CESClientEvent_Protocol_h
#define CESClientEvent_Protocol_h
@import Foundation;

#include "_TtP26TwitterClientEventServices18ThriftObjCProtocol_-Protocol.h"

@protocol CESClientEvent

@required

@property (nonatomic, readonly) id <TwitterClientEventServices.ThriftObjCProtocol> model;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) int priority;

/* required instance methods */
- (id)debugName;

@optional

@end

#endif /* CESClientEvent_Protocol_h */
