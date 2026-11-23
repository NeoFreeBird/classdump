//
#ifndef _TtC14T1TwitterSwift22T1PremiumHubNavigation_h
#define _TtC14T1TwitterSwift22T1PremiumHubNavigation_h
@import Foundation;

#include "_TtP10PremiumHub20PremiumHubNavigation_-Protocol.h"

@class NSObject, T1TwitterSwift.PremiumHubLinkOpening, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.T1PremiumHubNavigation : NSObject <PremiumHub.PremiumHubNavigation> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    T1TwitterSwift.PremiumHubLinkOpening opener;
}

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)handleUrlWithUrlString:(id)string completion:(id /* block */)completion;
- (void)handleLinkWithUrlString:(id)string section:(id)section key:(id)key completion:(id /* block */)completion;
- (void)navigateToSettings;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift22T1PremiumHubNavigation_h */
