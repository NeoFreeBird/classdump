//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSHTTPCookieStorage_TNLAdditions_h
#define NSHTTPCookieStorage_TNLAdditions_h
@import Foundation;

@interface NSHTTPCookieStorage (TNLAdditions)

/* class methods */
+ (id)tnl_sharedHTTPCookieStorageProxy;

@end

#endif /* NSHTTPCookieStorage_TNLAdditions_h */
