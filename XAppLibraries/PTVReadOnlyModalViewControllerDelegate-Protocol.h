//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVReadOnlyModalViewControllerDelegate_Protocol_h
#define PTVReadOnlyModalViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVReadOnlyModalViewControllerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)readOnlyModalViewControllerDidSelectDismiss:(id)dismiss;

@end

#endif /* PTVReadOnlyModalViewControllerDelegate_Protocol_h */
