//
#ifndef PTVUserModelControllerDelegate_Protocol_h
#define PTVUserModelControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVUserModelControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)userModelController:(id)controller didLoadUser:(id)user withError:(id)error;

@optional

@end

#endif /* PTVUserModelControllerDelegate_Protocol_h */
