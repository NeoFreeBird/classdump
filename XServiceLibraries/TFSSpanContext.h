//
#ifndef TFSSpanContext_h
#define TFSSpanContext_h
@import Foundation;

@class NSObject, NSString;

@interface TFSSpanContext : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 spanQueue;
    B24@0:8@"NSString"16 span;
}

@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool isCancelled;
@property (nonatomic, readonly) _Bool isComplete;

/* instance methods */
- (id)init;

@end

#endif /* TFSSpanContext_h */
