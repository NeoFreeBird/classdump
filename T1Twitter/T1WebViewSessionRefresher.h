//
#ifndef T1WebViewSessionRefresher_h
#define T1WebViewSessionRefresher_h
@import Foundation;

@class NSObject;

@interface T1WebViewSessionRefresher : NSObject // (Swift)

/* class methods */
+ (void)refreshStaleSessionsForAccount:(id)account inDataStore:(id)store completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* T1WebViewSessionRefresher_h */
