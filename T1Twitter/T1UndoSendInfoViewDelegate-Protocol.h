//
#ifndef T1UndoSendInfoViewDelegate_Protocol_h
#define T1UndoSendInfoViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1UndoSendInfoViewDelegate <NSObject>

@required

/* required instance methods */
- (void)undoSendViewDidTapUndo:(id)undo;
- (void)undoSendViewDidTapSendNow:(id)now;

@optional

@end

#endif /* T1UndoSendInfoViewDelegate_Protocol_h */
