//
#ifndef T1PaymentsStartupOperation_h
#define T1PaymentsStartupOperation_h
@import Foundation;

@class NSOperation;

@interface T1PaymentsStartupOperation : NSOperation { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *isInitializingPaymentsQueue;
    NSNumber"16@0:8 *resultError;
}

@property (nonatomic, readonly) _Bool executing;
@property (nonatomic, readonly) _Bool finished;

/* instance methods */
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void)start;
- (id)init;

@end

#endif /* T1PaymentsStartupOperation_h */
