//
#ifndef _TtC4Grok29GrokDirectFlowTabBadgeManager_h
#define _TtC4Grok29GrokDirectFlowTabBadgeManager_h
@import Foundation;

@class Grok.GrokDeeplinkOpener ?, Grok.GrokFeatureAccess ?, NSDate, NSObject, _$sSS;

@interface Grok.GrokDirectFlowTabBadgeManager : NSObject { // (Swift)
    /* instance variables */
    Swift.String accountID;
    Grok.GrokFeatureAccess ? grokFeatureAccess;
    Grok.GrokDeeplinkOpener ? deeplinkOpener;
}

@property (nonatomic, readonly) _Bool shouldShowBadge;
@property (nonatomic, readonly) _Bool shouldInterceptTabTap;
@property (nonatomic, readonly) _Bool isInCooldown;
@property (nonatomic, copy) NSDate *lastShownDate;
@property (nonatomic) long long showCount;
@property (nonatomic, readonly) double cooldownInterval;

/* class methods */
+ (double)defaultCooldownInterval;

/* instance methods */
- (id)initWithAccountID:(id)id grokFeatureAccess:(id)access;
- (_Bool)presentAppStoreIfNeededFrom:(id)from completion:(id /* block */)completion;
- (id)init;

@end

#endif /* _TtC4Grok29GrokDirectFlowTabBadgeManager_h */
