//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSData_UnownedSubData_h
#define NSData_UnownedSubData_h
@import Foundation;

@interface NSData (UnownedSubData)

/* instance methods */
- (id)apm_MD5Data;
- (long long)apm_64LSBMD5;
- (long long)apm_64LeastSignificantBits;
- (id)tlp_safeSubDataNoCopyWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (_Bool)tlp_startsWithData:(id)data;

@end

#endif /* NSData_UnownedSubData_h */
