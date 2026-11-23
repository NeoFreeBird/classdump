//
#ifndef T1PushActionHandler_h
#define T1PushActionHandler_h
@import Foundation;

#include "T1PushActionHandlerProtocol-Protocol.h"

@class NSObject, NSString;

@interface T1PushActionHandler : NSObject <T1PushActionHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)handleActionWithAccount:(id)account withPushPayload:(id)payload withResponse:(id)response withCompletion:(id /* block */)completion;
- (void)_postLocalNotificationError:(id)error;

@end

#endif /* T1PushActionHandler_h */
