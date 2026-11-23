//
#ifndef TFSStateMachineNode_h
#define TFSStateMachineNode_h
@import Foundation;

@class NSObject, NSString;

@interface TFSStateMachineNode : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 stateName;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSStateMachineNode_h */
