//
#ifndef _TtC4Grok21GrokAppStorePresenter_h
#define _TtC4Grok21GrokAppStorePresenter_h
@import Foundation;

@class Grok.AppStoreProductPresenter, NSObject, _$sSSSg;

@interface Grok.GrokAppStorePresenter : NSObject { // (Swift)
    /* instance variables */
    Grok.AppStoreProductPresenter productPresenter;
    Swift.String? accountID;
}

/* instance methods */
- (id)initWithAccountID:(id)id;
- (void)present:(id)present fromViewController:(id)controller entryPoint:(long long)point;
- (void)present:(id)present entryPoint:(long long)point usingPresenterBlock:(id /* block */)block;
- (void)present:(id)present fromViewController:(id)controller entryPoint:(long long)point onDismiss:(id /* block */)dismiss;
- (id)init;

@end

#endif /* _TtC4Grok21GrokAppStorePresenter_h */
