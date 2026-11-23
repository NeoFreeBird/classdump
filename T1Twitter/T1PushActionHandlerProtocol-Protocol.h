//
#ifndef T1PushActionHandlerProtocol_Protocol_h
#define T1PushActionHandlerProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1PushActionHandlerProtocol <NSObject>

@required

/* required instance methods */
- (void)handleActionWithAccount:(id)account withPushPayload:(id)payload withResponse:(id)response withCompletion:(id /* block */)completion;

@optional

@end

#endif /* T1PushActionHandlerProtocol_Protocol_h */
