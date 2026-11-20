//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
