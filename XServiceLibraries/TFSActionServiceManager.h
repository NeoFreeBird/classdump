//
#ifndef TFSActionServiceManager_h
#define TFSActionServiceManager_h
@import Foundation;

#include "TASActionObserver-Protocol.h"
#include "TFSTwitterAPICommandLoader-Protocol.h"

@class NSObject;

@interface TFSActionServiceManager : NSObject <TFSTwitterAPICommandLoader, TASActionObserver> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 queue;
    B24@0:8@"NSString"16 actionServices;
}

/* instance methods */
- (id)loadCommand:(id)command;
- (id)startCommand:(id)command;
- (id)actionServiceForAccountID:(id)id;
- (void)deactivateActionServiceForAccountID:(id)id;
- (void)reset;
- (void)actionService:(id)service didExceedBeginExecutionTimeout:(double)timeout forActionExecution:(id)execution;
- (id)init;

@end

#endif /* TFSActionServiceManager_h */
