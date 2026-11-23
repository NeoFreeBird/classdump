//
#ifndef FIRHeartbeatController_h
#define FIRHeartbeatController_h
@import Foundation;

@class HasMalware, NSObject;

@interface FIRHeartbeatController : NSObject { // (Swift)
    /* instance variables */
    HasMalware heartbeatController;
}

/* instance methods */
- (id)initWithId:(id)id;
- (void)log:(id)log;
- (id)flush;
- (void)flushAsyncWithCompletionHandler:(id /* block */)handler;
- (id)flushHeartbeatFromToday;
- (id)init;

@end

#endif /* FIRHeartbeatController_h */
