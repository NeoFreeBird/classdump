//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVLoggedInUserCookieProtocol_Protocol_h
#define PTVLoggedInUserCookieProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol PTVLoggedInUserCookieProtocol <NSObject>

@required

@property (nonatomic, readonly) NSString *cookie;
@property (nonatomic, readonly) _Bool doesCookieRequireTwitterPathForAPICalls;
@property (nonatomic, copy) NSString *remoteID;

@optional

@end

#endif /* PTVLoggedInUserCookieProtocol_Protocol_h */
