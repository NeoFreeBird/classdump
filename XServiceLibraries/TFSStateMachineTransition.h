//
#ifndef TFSStateMachineTransition_h
#define TFSStateMachineTransition_h
@import Foundation;

@class NSObject;

@interface TFSStateMachineTransition : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 timestamp;
    B24@0:8@"NSString"16 fromNode;
    B24@0:8@"NSString"16 toNode;
    B24@0:8@"NSString"16 edge;
}

@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSStateMachineTransition_h */
