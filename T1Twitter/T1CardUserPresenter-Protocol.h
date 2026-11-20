//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1CardUserPresenter_Protocol_h
#define T1CardUserPresenter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CardUserPresenter <NSObject>

@required

/* required instance methods */
- (void)presentViewControllerForUserReference:(id)reference context:(id)context;

@optional

@end

#endif /* T1CardUserPresenter_Protocol_h */
