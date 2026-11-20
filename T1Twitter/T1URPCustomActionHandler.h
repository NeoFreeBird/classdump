//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
