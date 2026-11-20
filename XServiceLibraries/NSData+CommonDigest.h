//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSData_CommonDigest_h
#define NSData_CommonDigest_h
@import Foundation;

@interface NSData (CommonDigest)

/* instance methods */
- (id)tfs_MD5Hash;
- (id)tfs_SHA1Hash;
- (id)tfs_SHA256Hash;
- (id)tfs_SHA512Hash;

@end

#endif /* NSData_CommonDigest_h */
