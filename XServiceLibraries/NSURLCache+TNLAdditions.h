//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSURLCache_TNLAdditions_h
#define NSURLCache_TNLAdditions_h
@import Foundation;

@interface NSURLCache (TNLAdditions)

/* class methods */
+ (id)twa_animationJSONCache;
+ (id)tnl_impotentURLCache;
+ (id)tnl_sharedURLCacheProxy;

@end

#endif /* NSURLCache_TNLAdditions_h */
