//
#ifndef T1SubscriptionsHomeNavigationBarTitleViewPlugin_h
#define T1SubscriptionsHomeNavigationBarTitleViewPlugin_h
@import Foundation;

#include "T1SubscriptionsBlueNavigationTitleAccessoryHelperDelegate-Protocol.h"
#include "_TtP11TwitterHome29HomeNavigationBarPluginSource_-Protocol.h"
#include "_TtP11TwitterHome32HomeNavigationBarTitleViewPlugin_-Protocol.h"

@class NSObject, UIView;

@interface T1SubscriptionsHomeNavigationBarTitleViewPlugin : NSObject <T1SubscriptionsBlueNavigationTitleAccessoryHelperDelegate, TwitterHome.HomeNavigationBarTitleViewPlugin> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *logoHelper;
}

@property (nonatomic, readonly) UIView *titleView;
@property (nonatomic, weak) id <TwitterHome.HomeNavigationBarPluginSource> pluginSource;

/* instance methods */
- (void)subscriptionsBlueNavigationTitleAccessoryHelper:(id)helper didChangeTitleViewBlueIconAccessoryAvailabilityTo:(_Bool)to;
- (id)initWithAccount:(id)account;
- (id)init;

@end

#endif /* T1SubscriptionsHomeNavigationBarTitleViewPlugin_h */
