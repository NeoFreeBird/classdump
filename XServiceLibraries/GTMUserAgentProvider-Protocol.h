//
#ifndef GTMUserAgentProvider_Protocol_h
#define GTMUserAgentProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol GTMUserAgentProvider <NSObject>

@required

@property (readonly, copy) NSString *cachedUserAgent;
@property (readonly, copy) NSString *userAgent;

@optional

@end

#endif /* GTMUserAgentProvider_Protocol_h */
