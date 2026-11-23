//
#ifndef GADAdConfigurationRenderStatistics_h
#define GADAdConfigurationRenderStatistics_h
@import Foundation;

#include "GADAdNetworkResponseInfo.h"
#include "GADEventContext.h"
#include "GADEventContextSource-Protocol.h"

@class NSArray, NSError, NSObject, NSString;

@interface GADAdConfigurationRenderStatistics : NSObject <GADEventContextSource> {
    /* instance variables */
    struct atomic_flag { _Atomic _Bool _Value; } _hasEndedRenderTiming;
    NSString *_ruleLineExternalID;
    long long _startTimestampMilliseconds;
    NSArray *_nofillURLs;
    NSArray *_lateLoadURLs;
    GADEventContext *_adapterContext;
    long long _exitStatus;
    NSError *_error;
}

@property (readonly, nonatomic) NSString *allocationIdentifier;
@property (readonly, nonatomic) NSString *fillURLStatisticsString;
@property (readonly, nonatomic) GADAdNetworkResponseInfo *networkResponseInfo;
@property (readonly, nonatomic) NSString *adapterVersion;
@property (readonly, nonatomic) GADEventContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAdConfiguration:(id)configuration parentContext:(id)context;
- (void)updateAdNetworkClassName:(id)name;
- (void)startTiming;
- (void)updateFillURLStatisticsStringWithExitStatus:(long long)status;
- (void)updateExitStatusToLoadedButLostIfNecessary;
- (void)endTimingWithExitStatus:(long long)status error:(id)error;
- (void)pingNoFillConversionURLsWithPreviousAdNetworks:(id)networks;
- (void)pingLateLoadConversionURLs;

@end

#endif /* GADAdConfigurationRenderStatistics_h */
