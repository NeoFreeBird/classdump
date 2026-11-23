//
#ifndef TDTPerformanceTest_h
#define TDTPerformanceTest_h
@import Foundation;

@class NSDictionary, NSObject, NSString, TFSTimer;

@interface TDTPerformanceTest : NSObject {
    /* instance variables */
    TFSTimer *_timeoutTimer;
    _Bool _restarting;
}

@property (readonly, nonatomic) NSDictionary *parameters;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) double timeoutDuration;
@property (readonly, nonatomic) _Bool timedOut;
@property (readonly, nonatomic) _Bool cancelled;
@property (readonly, nonatomic) _Bool running;
@property (readonly, nonatomic) _Bool sendResults;
@property (readonly, nonatomic) _Bool exitOnCompletion;

/* instance methods */
- (id)init;
- (id)initWithParameters:(id)parameters;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)run;
- (void)cancel;
- (void)finishWithResults:(id)results error:(id)error;
- (void)restartWithParameters:(id)parameters;
- (void)_applicationDidResignActive:(id)active;
- (void)_applicationDidEnterBackground:(id)background;
- (void)_applicationDidCompleteBackgroundFetch:(id)fetch;
- (void)_exit;
- (void)_timeout;
- (void)_reportResults:(id)results error:(id)error;
- (void)_sendReport:(id)report completion:(id /* block */)completion;
- (void)_didCompleteWithReport:(id)report;

@end

#endif /* TDTPerformanceTest_h */
