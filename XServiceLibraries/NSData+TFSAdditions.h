//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSData_TFSAdditions_h
#define NSData_TFSAdditions_h
@import Foundation;

@interface NSData (TFSAdditions)

/* class methods */
+ (id)tfs_dataWithHexString:(id)string;

/* instance methods */
- (id)tfs_UTF8String;
- (id)tfs_hexStringValue;
- (id)tfs_prettyPrintedJSONData;
- (id)tfs_prettyPrintedJSONString;
- (id)tfs_safeSubdataNoCopyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)tfs_safeSubdataNoCopyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range error:(out id *)error;

@end

#endif /* NSData_TFSAdditions_h */
