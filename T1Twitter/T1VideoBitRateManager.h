//
#ifndef T1VideoBitRateManager_h
#define T1VideoBitRateManager_h
@import Foundation;

#include "T1VideoQualitySettings.h"
#include "TNLCommunicationAgentObserver-Protocol.h"

@class NSObject, NSString, TNUCommunicationAgent;

@interface T1VideoBitRateManager : NSObject <TNLCommunicationAgentObserver>

@property (retain, nonatomic) TNUCommunicationAgent *commAgent;
@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) T1VideoQualitySettings *qualitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)managerForAccountID:(id)id;

/* instance methods */
- (id)initWithAccountID:(id)id communicationAgent:(id)agent qualitySettings:(id)settings;
- (void)dealloc;
- (void)tnl_communicationAgent:(id)agent didUpdateReachabilityFromPreviousFlags:(unsigned int)flags previousStatus:(long long)status toCurrentFlags:(unsigned int)flags currentStatus:(long long)status;
- (void)tnl_communicationAgent:(id)agent didUpdateWWANRadioAccessTechnologyFromPreviousTech:(id)tech toCurrentTech:(id)tech;
- (double)currentPreferredPeakBitRateWithAutoplaying:(_Bool)autoplaying;
- (double)_t1_autoplayBitRateForHighQualityForAccountID:(id)id;
- (double)_t1_autoplayBitRateForHighQualityWiFiForAccountID:(id)id;
- (double)currentBitrateForMp4VariantSelectionWithAutoplaying:(_Bool)autoplaying;
- (double)_t1_networkBandwidthFractionForMp4VariantSelectionForAccountID:(id)id;
- (void)_videoQualityDidChange;
- (_Bool)_isHighQualityEnabledForVideoQuality:(long long)quality wifiOn:(_Bool)on;

@end

#endif /* T1VideoBitRateManager_h */
