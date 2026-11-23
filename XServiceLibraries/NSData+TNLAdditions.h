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
