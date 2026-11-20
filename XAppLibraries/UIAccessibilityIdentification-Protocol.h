//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIAccessibilityIdentification_Protocol_h
#define UIAccessibilityIdentification_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol UIAccessibilityIdentification <NSObject>

@required

@property (copy, nonatomic) NSString *accessibilityIdentifier;

@optional

@end

#endif /* UIAccessibilityIdentification_Protocol_h */
