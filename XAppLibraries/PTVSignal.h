//
#ifndef PTVSignal_h
#define PTVSignal_h
@import Foundation;

@class NSMutableArray, NSObject;

@interface PTVSignal : NSObject {
    /* instance variables */
    _Bool _fired;
    NSMutableArray *_then;
}

/* class methods */
+ (id)signal;

/* instance methods */
- (id)init;
- (void)then:(id)then;
- (void)fire;
- (void)clearAll;

@end

#endif /* PTVSignal_h */
