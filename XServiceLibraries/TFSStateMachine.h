//
#ifndef TFSStateMachine_h
#define TFSStateMachine_h
@import Foundation;

#include "TFSStateMachineNode.h"

@class NSArray, NSObject;

@interface TFSStateMachine : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 delegate;
    B24@0:8@"NSString"16 graph;
    B24@0:8@"NSString"16 timestamper;
}

@property (nonatomic, readonly) TFSStateMachineNode *initialNode;
@property (nonatomic, readonly) TFSStateMachineNode *currentNode;
@property (nonatomic, readonly) _Bool isFinished;
@property (nonatomic, copy) NSArray *transitions;

/* instance methods */
- (id)initWithGraph:(id)graph initialNode:(id)node timestamper:(id /* block */)timestamper delegate:(id)delegate;
- (_Bool)isTerminalNode:(id)node;
- (_Bool)traverseEdge:(id)edge;
- (void)finishByMovingToTerminalNode:(id)node;
- (void)restart;
- (id)init;

@end

#endif /* TFSStateMachine_h */
