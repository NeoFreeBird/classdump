//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVActionSheetContainerViewDelegate_Protocol_h
#define PTVActionSheetContainerViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVActionSheetContainerViewDelegate <NSObject>

@required

/* required instance methods */
- (void)dismissActionSheetContainerView;

@optional

@end

#endif /* PTVActionSheetContainerViewDelegate_Protocol_h */
