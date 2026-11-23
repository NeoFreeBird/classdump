//
#ifndef TFSStateMachineDelegate_Protocol_h
#define TFSStateMachineDelegate_Protocol_h
@import Foundation;

@protocol TFSStateMachineDelegate

@required

/* required instance methods */
- (void)stateMachineRestarted:(id)restarted;
- (void)stateMachine:(id)machine completedTransition:(id)transition;
- (void)stateMachine:(id)machine failedTraversingEdge:(id)edge fromNode:(id)node;

@optional

@end

#endif /* TFSStateMachineDelegate_Protocol_h */
