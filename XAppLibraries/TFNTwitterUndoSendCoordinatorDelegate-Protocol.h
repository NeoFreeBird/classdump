//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
