//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVReadOnlyModalViewDelegate_Protocol_h
#define PTVReadOnlyModalViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVReadOnlyModalViewDelegate <NSObject>

@required

/* required instance methods */
- (void)readOnlyModalViewDidSelectDismiss:(id)dismiss;

@optional

@end

#endif /* PTVReadOnlyModalViewDelegate_Protocol_h */
