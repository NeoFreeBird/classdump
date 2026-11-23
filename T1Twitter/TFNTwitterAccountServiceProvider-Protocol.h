//
#ifndef TFNTwitterAccountServiceProvider_Protocol_h
#define TFNTwitterAccountServiceProvider_Protocol_h
@import Foundation;

@protocol TFNTwitterAccountServiceProvider

@required

/* required instance methods */
- (id)accountServiceWithAccounts:(id)accounts accountStore:(id)store;
- (id)accountServiceWithAccounts:(id)accounts accountStore:(id)store;

@optional

@end

#endif /* TFNTwitterAccountServiceProvider_Protocol_h */
