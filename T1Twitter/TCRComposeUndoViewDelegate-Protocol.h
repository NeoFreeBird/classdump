//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
