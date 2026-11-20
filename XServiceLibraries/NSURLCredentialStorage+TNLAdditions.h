//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSURLCredentialStorage_TNLAdditions_h
#define NSURLCredentialStorage_TNLAdditions_h
@import Foundation;

@interface NSURLCredentialStorage (TNLAdditions)

/* class methods */
+ (id)tnl_sharedCredentialStorageProxy;

@end

#endif /* NSURLCredentialStorage_TNLAdditions_h */
