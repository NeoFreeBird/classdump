//
#ifndef TCRComposeUndoViewDelegate_Protocol_h
#define TCRComposeUndoViewDelegate_Protocol_h
@import Foundation;

@protocol TCRComposeUndoViewDelegate

@required

/* required instance methods */
- (void)composeUndoViewDidTapUndo:(id)undo;
- (void)composeUndoViewDidTapRedo:(id)redo;

@optional

@end

#endif /* TCRComposeUndoViewDelegate_Protocol_h */
