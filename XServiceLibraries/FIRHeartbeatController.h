//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
