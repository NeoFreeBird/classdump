//
#ifndef GADOMIDAdViewCache_h
#define GADOMIDAdViewCache_h
@import Foundation;

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSString;

@interface GADOMIDAdViewCache : NSObject {
    /* instance variables */
    NSMutableDictionary *_notVisibleAdViews;
    NSMutableDictionary *_notVisibleReasons;
    NSMutableDictionary *_outputDeviceStatuses;
    _Bool _isAdViewProcessed;
}

@property (readonly, nonatomic) NSDictionary *visibleAdViews;
@property (readonly, nonatomic) NSDictionary *friendlyObstructionInfo;
@property (readonly, nonatomic) NSSet *rootViews;
@property (readonly, nonatomic) NSSet *visibleSessionIds;
@property (readonly, nonatomic) NSSet *notVisibleSessionIds;
@property (readonly, nonatomic) NSString *pipActiveSessionId;

/* class methods */
+ (id)adViewCacheWithAdSessions:(id)sessions;

/* instance methods */
- (id)initWithAdSessions:(id)sessions;
- (void)prepareWithAdSessions:(id)sessions;
- (unsigned long long)buildRootViewsFromAdView:(id)view;
- (unsigned long long)getViewHiddenReason:(id)reason;
- (void)prepareFriendlyObstructionsForAdSession:(id)session;
- (void)addFriendlyObstruction:(id)obstruction forAdSession:(id)session;
- (void)onAdViewProcessed;
- (id)sessionIdForView:(id)view;
- (id)notVisibleAdView:(id)view;
- (id)obstructionInfoForView:(id)view;
- (unsigned long long)typeForView:(id)view;

@end

#endif /* GADOMIDAdViewCache_h */
