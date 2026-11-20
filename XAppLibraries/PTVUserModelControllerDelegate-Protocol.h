//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
