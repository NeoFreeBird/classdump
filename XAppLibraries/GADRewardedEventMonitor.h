//
#ifndef GADRewardedEventMonitor_h
#define GADRewardedEventMonitor_h
@import Foundation;

#include "GADAdReward.h"
#include "GADFullScreenAdContent.h"
#include "GADObserverCollection.h"

@class NSObject;

@interface GADRewardedEventMonitor : NSObject {
    /* instance variables */
    GADFullScreenAdContent *_ad;
    GADObserverCollection *_observers;
    GADAdReward *_reward;
}

/* class methods */
+ (void)addMonitorToAd:(id)ad adConfiguration:(id)configuration view:(id)view;

/* instance methods */
- (id)initWithAd:(id)ad reward:(id)reward view:(id)view;
- (void)handleRewardAction:(id)action;
- (void)handleRewardGrantedWithBackUpParameters:(id)parameters;
- (void)handleVideoStarted;
- (void)handleVideoCompleted;

@end

#endif /* GADRewardedEventMonitor_h */
