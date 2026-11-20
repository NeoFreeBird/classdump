//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1LiveVideoBadgeViewModel_Protocol_h
#define T1LiveVideoBadgeViewModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol T1LiveVideoBadgeViewModel <NSObject>

@required

@property (nonatomic, readonly) NSString *badgeText;
@property (nonatomic, readonly) _Bool isEventCurrentlyLive;

@optional

@end

#endif /* T1LiveVideoBadgeViewModel_Protocol_h */
