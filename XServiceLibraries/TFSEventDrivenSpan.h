//
#ifndef TFSEventDrivenSpan_h
#define TFSEventDrivenSpan_h
@import Foundation;

@class NSObject;

@interface TFSEventDrivenSpan : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 descriptor;
}

/* class methods */
+ (id)groupSpanWithSpanName:(id)name cancelEvent:(id)event spans:(id)spans;
+ (id)taskSpanWithSpanName:(id)name startEvent:(id)event stopEvent:(id)event cancelEvent:(id)event;

/* instance methods */
- (id)init;

@end

#endif /* TFSEventDrivenSpan_h */
