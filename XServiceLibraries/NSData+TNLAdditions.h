//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSData_TNLAdditions_h
#define NSData_TNLAdditions_h
@import Foundation;

@interface NSData (TNLAdditions)

/* instance methods */
- (id)tnl_safeSubdataNoCopyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)tnl_safeSubdataNoCopyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range error:(out id *)error;
- (id)tnl_hexStringValue;

@end

#endif /* NSData_TNLAdditions_h */
