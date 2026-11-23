//
#ifndef TFSStateMachineEdge_h
#define TFSStateMachineEdge_h
@import Foundation;

@class NSObject, NSString;

@interface TFSStateMachineEdge : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 stateChangeName;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSStateMachineEdge_h */
