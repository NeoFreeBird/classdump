//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterAccountServiceProvider_Protocol_h
#define TFNTwitterAccountServiceProvider_Protocol_h
@import Foundation;

@protocol TFNTwitterAccountServiceProvider

@required

/* required instance methods */
- (id)accountServiceWithAccounts:(id)accounts accountStore:(id)store;

@optional

@end

#endif /* TFNTwitterAccountServiceProvider_Protocol_h */
