//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSData_TIPAdditions_h
#define NSData_TIPAdditions_h
@import Foundation;

@interface NSData (TIPAdditions)

/* instance methods */
- (id)tip_safeSubdataNoCopyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)tip_safeSubdataNoCopyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range error:(out id *)error;
- (id)tip_hexStringValue;

@end

#endif /* NSData_TIPAdditions_h */
