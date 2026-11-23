//
#ifndef T1URPCustomActionHandler_h
#define T1URPCustomActionHandler_h
@import Foundation;

@class NSObject;

@interface T1URPCustomActionHandler : NSObject // (Swift)

/* class methods */
+ (void)handleWithHttpRequestAction:(id)action accountID:(id)id completion:(id /* block */)completion;
+ (void)handleWithTextInputAction:(id)action textInputText:(id)text accountID:(id)id completion:(id /* block */)completion;
+ (void)handleWithDeepLinkAction:(id)action completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* T1URPCustomActionHandler_h */
