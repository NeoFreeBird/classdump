//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSData_Base32Addition_h
#define NSData_Base32Addition_h
@import Foundation;

@interface NSData (Base32Addition)

/* class methods */
+ (id)dataWithBase32String:(id)string;

/* instance methods */
- (id)base32String;

@end

#endif /* NSData_Base32Addition_h */
