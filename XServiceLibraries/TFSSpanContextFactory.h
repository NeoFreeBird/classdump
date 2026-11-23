//
#ifndef TFSSpanContextFactory_h
#define TFSSpanContextFactory_h
@import Foundation;

@class NSObject;

@interface TFSSpanContextFactory : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 spanName;
    B24@0:8@"NSString"16 parentSpanContext;
    B24@0:8@"NSString"16 tracer;
}

/* instance methods */
- (id)makeSpanContextWithChildSpanNames:(id)names;
- (id)makeSpanContext;
- (id)init;

@end

#endif /* TFSSpanContextFactory_h */
