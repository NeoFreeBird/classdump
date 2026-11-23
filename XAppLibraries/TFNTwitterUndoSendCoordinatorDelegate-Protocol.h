//
#ifndef TFNTwitterUndoSendCoordinatorDelegate_Protocol_h
#define TFNTwitterUndoSendCoordinatorDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterUndoSendCoordinatorDelegate <NSObject>

@required

/* required instance methods */
- (void)undoPeriodElapsedForCompositions:(id)compositions;
- (void)undoBackgroundTaskExpired;

@optional

@end

#endif /* TFNTwitterUndoSendCoordinatorDelegate_Protocol_h */
