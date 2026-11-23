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
