//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOpenActionMonitor_h
#define GADOpenActionMonitor_h
@import Foundation;

#include "GADAdContent.h"
#include "GADClickProtection.h"
#include "GADEventContextSource-Protocol.h"
#include "GADObserverCollection.h"

@class NSArray, NSObject, UIView;

@interface GADOpenActionMonitor : NSObject {
    /* instance variables */
    GADAdContent *_ad;
    GADObserverCollection *_observers;
    GADClickProtection *_clickProtection;
    id <GADEventContextSource> _messageSource;
    NSArray *_appStoreURLPatterns;
    _Bool _matchURLRedirects;
    _Bool _URLRedirectInProgress;
    UIView *_adView;
    _Bool _shouldCallNativeClickDelegate;
}

/* instance methods */
- (id)initWithAd:(id)ad messageSource:(id)source adView:(id)view clickProtection:(id)protection storeKitParameters:(id)parameters shouldCallNativeClickDelegate:(_Bool)delegate;
- (id)actionParametersWithNotification:(id)notification;
- (void)handlePingClickURLAction:(id)urlaction;
- (void)handleOpenApplicationWithURL:(id)url navigationURL:(id)url notification:(id)notification;
- (void)handleOpenApplicationAction:(id)action;
- (void)handleOpenBrowserAction:(id)action;
- (void)handleOpenSafariAction:(id)action;
- (void)openSafariViewControllerToURL:(id)url parameters:(id)parameters;
- (void)handleSMSAction:(id)smsaction;
- (void)handleMailAction:(id)action;

@end

#endif /* GADOpenActionMonitor_h */
