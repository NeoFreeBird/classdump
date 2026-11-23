//
#ifndef TCRComposeUndoManagerDelegate_Protocol_h
#define TCRComposeUndoManagerDelegate_Protocol_h
@import Foundation;

@protocol TCRComposeUndoManagerDelegate

@required

/* required instance methods */
- (void)composeUndoManagerDidChangeState:(id)state;

@optional

@end

#endif /* TCRComposeUndoManagerDelegate_Protocol_h */
