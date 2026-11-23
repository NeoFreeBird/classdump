//
#ifndef OIDURLSessionProvider_h
#define OIDURLSessionProvider_h
@import Foundation;

@class NSObject;

@interface OIDURLSessionProvider : NSObject

/* class methods */
+ (id)session;
+ (void)setSession:(id)session;

@end

#endif /* OIDURLSessionProvider_h */
