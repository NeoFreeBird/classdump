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
