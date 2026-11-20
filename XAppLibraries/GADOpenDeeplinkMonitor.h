//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOpenDeeplinkMonitor_h
#define GADOpenDeeplinkMonitor_h
@import Foundation;

#include "GADAdContent.h"
#include "GADClickProtection.h"
#include "GADJavascriptEvaluating-Protocol.h"
#include "GADObserverCollection.h"
#include "GADWebAdView.h"

@class NSObject;

@interface GADOpenDeeplinkMonitor : NSObject {
    /* instance variables */
    GADObserverCollection *_observers;
    GADAdContent *_ad;
    GADClickProtection *_clickProtection;
    id <GADJavascriptEvaluating> _messageSource;
    GADWebAdView *_adView;
    _Bool _shouldCallNativeClickDelegate;
}

/* instance methods */
- (id)initWithAd:(id)ad webAdView:(id)view messageSource:(id)source clickProtection:(id)protection shouldCallNativeClickDelegate:(_Bool)delegate;
- (id)actionParametersWithNotification:(id)notification;
- (void)handleOpenDeeplinkAction:(id)action;
- (void)handleDeeplinkPlusAction:(id)action;
- (void)handleOpenInAppUniversalLinkAction:(id)action;

@end

#endif /* GADOpenDeeplinkMonitor_h */
