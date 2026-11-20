//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ContactsProfileImageCacheReader_h
#define T1ContactsProfileImageCacheReader_h
@import Foundation;

@class NSObject;

@interface T1ContactsProfileImageCacheReader : NSObject

/* class methods */
+ (void)readProfileImageCacheWithAccountID:(id)id userID:(long long)id profileImageURL:(id)url completion:(id /* block */)completion;

@end

#endif /* T1ContactsProfileImageCacheReader_h */
