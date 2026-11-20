//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
