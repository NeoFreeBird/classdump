//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMPersistentStringConvertible_Protocol_h
#define TTMPersistentStringConvertible_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TTMPersistentStringConvertible <NSObject>

@required

@property (nonatomic, readonly) NSString *persistentString;

@optional

@end

#endif /* TTMPersistentStringConvertible_Protocol_h */
