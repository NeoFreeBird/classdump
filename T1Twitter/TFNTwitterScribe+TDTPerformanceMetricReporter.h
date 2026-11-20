//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterScribe_TDTPerformanceMetricReporter_h
#define TFNTwitterScribe_TDTPerformanceMetricReporter_h
@import Foundation;

@interface TFNTwitterScribe (TDTPerformanceMetricReporter) <TDTPerformanceMetricReporter>

/* instance methods */
- (void)logApplicationShortcutLaunch:(id)launch isAppShuttingDown:(_Bool)down;
- (void)logImageAttachmentWithSource:(id)source section:(id)section;
- (void)logImageAttachmentWithPage:(id)page source:(id)source section:(id)section;
- (void)logLivePhotoAttachmentWithSource:(id)source section:(id)section;
- (void)logLivePhotoAttachmentWithPage:(id)page source:(id)source section:(id)section;
- (void)logMovieAttachmentWithSource:(id)source section:(id)section;
- (void)logMovieAttachmentWithPage:(id)page source:(id)source section:(id)section;
- (void)logCompositionAutocompleteFullScreenForType:(long long)type page:(id)page section:(id)section withPrefix:(id)prefix;
- (void)logCompositionAutocompleteCloseForType:(long long)type page:(id)page section:(id)section withPrefix:(id)prefix;
- (void)_logCompositionAutocompleteForType:(long long)type action:(id)action page:(id)page section:(id)section withPrefix:(id)prefix;
- (id)_scribeElementForAutocompleteType:(long long)type;
- (void)logAccountSwitch;
- (void)logApplicationDidEnterBackgroundScribeAction:(id)action scribeParameters:(id)parameters;
- (void)logApplicationDidEnterForegroundFromPush:(_Bool)push withBadgeCount:(unsigned long long)count;
- (void)logApplicationDidLaunchFromPush:(_Bool)push withBadgeCount:(unsigned long long)count;
- (void)_logAccessibilityFeatureUsageWithSection:(id)section;
- (void)_logColorSettingsWithSection:(id)section;
- (void)_tfn_logBadgeStateWithSection:(id)section withCount:(unsigned long long)count fromPush:(_Bool)push;
- (void)_tfn_logAppOpenBadgeStateWithSection:(id)section fromPush:(_Bool)push appBadgeAction:(id)action;
- (void)_tfn_logNoAppIconBadgeStateWithSection:(id)section;
- (id)_advertisingInformationScribeDictionary;
- (id)_simCardInformationScribeDictionary;
- (void)logMemoryWarning;
- (void)logMemoryPressureChangedFrom:(unsigned long long)from to:(unsigned long long)to;
- (void)logCrash;
- (void)logWatchdogCrash;
- (void)reportCurrentValue:(double)value forMetric:(id)metric;

@end

#endif /* TFNTwitterScribe_TDTPerformanceMetricReporter_h */
