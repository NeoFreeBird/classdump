//
#ifndef _TtC4Grok18GrokDeeplinkOpener_h
#define _TtC4Grok18GrokDeeplinkOpener_h
@import Foundation;

@class Grok.GrokAppStorePresenter, NSObject, NSString, _$sSS;

@interface Grok.GrokDeeplinkOpener : NSObject { // (Swift)
    /* instance variables */
    Swift.String accountID;
    Grok.GrokAppStorePresenter appStorePresenter;
}

/* class methods */
+ (void)debugSaveExamplePendingDeeplinkWithAccountID:(NSString *)id completionHandler:(id /* block */)handler;

/* instance methods */
- (id)initWithGrokFeatureAccess:(id)access accountID:(id)id;
- (void)open:(id)open appStoreURL:(id)url from:(id)from entryPoint:(long long)point;
- (void)open:(id)open appStoreURL:(id)url from:(id)from entryPoint:(long long)point onDismiss:(id /* block */)dismiss;
- (id)init;

@end

#endif /* _TtC4Grok18GrokDeeplinkOpener_h */
