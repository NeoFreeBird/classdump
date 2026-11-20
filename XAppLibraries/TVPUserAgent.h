//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TVPUserAgent_h
#define TVPUserAgent_h
@import Foundation;

@class NSObject;

@interface TVPUserAgent : NSObject

/* class methods */
+ (void)setUserAgentProvider:(id)provider;
+ (id)userAgentProvider;
+ (id)VMAPDownloadUserAgentString;

@end

#endif /* TVPUserAgent_h */
