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
