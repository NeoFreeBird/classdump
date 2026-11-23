//
#ifndef PTVChangeExpirationActionSheetControllerDelegate_Protocol_h
#define PTVChangeExpirationActionSheetControllerDelegate_Protocol_h
@import Foundation;

#include "PTVActionSheetDelegate-Protocol.h"

@protocol PTVChangeExpirationActionSheetControllerDelegate <PTVActionSheetDelegate>

@required

/* required instance methods */
- (void)changeExpirationActionSheetControllerDidSelectDeleteBroadcast:(id)broadcast;
- (void)changeExpirationActionSheetControllerDidSelectDontAutoDelete:(id)_delete;

@optional

@end

#endif /* PTVChangeExpirationActionSheetControllerDelegate_Protocol_h */
