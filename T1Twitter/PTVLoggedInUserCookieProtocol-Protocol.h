//
#ifndef PTVLoggedInUserCookieProtocol_Protocol_h
#define PTVLoggedInUserCookieProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol PTVLoggedInUserCookieProtocol <NSObject>

@required

@property (readonly, nonatomic) NSString *cookie;
@property (readonly, nonatomic) _Bool doesCookieRequireTwitterPathForAPICalls;
@property (retain, nonatomic) NSString *remoteID;

@optional

@end

#endif /* PTVLoggedInUserCookieProtocol_Protocol_h */
