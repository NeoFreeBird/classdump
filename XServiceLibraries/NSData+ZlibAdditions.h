//
#ifndef NSData_ZlibAdditions_h
#define NSData_ZlibAdditions_h
@import Foundation;

@interface NSData (ZlibAdditions)

/* instance methods */
- (id)tfs_gzipCompress:(int)compress;
- (id)tfs_gzipDecompress;

@end

#endif /* NSData_ZlibAdditions_h */
