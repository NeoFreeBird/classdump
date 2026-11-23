//
#ifndef T1SecurityTOTPCodeUtil_h
#define T1SecurityTOTPCodeUtil_h
@import Foundation;

@class NSObject;

@interface T1SecurityTOTPCodeUtil : NSObject

/* class methods */
+ (id)TOTPForKey:(id)key;
+ (id)TOTPForKey:(id)key withTimeWindow:(id)window;
+ (id)systemTimeWindowHexString;
+ (unsigned long long)systemTimeInSeconds;
+ (double)spinnerProgress;

@end

#endif /* T1SecurityTOTPCodeUtil_h */
