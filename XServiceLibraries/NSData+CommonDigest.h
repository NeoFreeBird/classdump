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
