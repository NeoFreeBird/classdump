//
#ifndef TFSTwitterNotificationSettingsEntryFeatureSwitchConfig_h
#define TFSTwitterNotificationSettingsEntryFeatureSwitchConfig_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface TFSTwitterNotificationSettingsEntryFeatureSwitchConfig : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSArray *featureSwitches;
@property (readonly, copy, nonatomic) NSString *experiment;
@property (readonly, copy, nonatomic) NSArray *treatmentBuckets;

/* class methods */
+ (id)configWithFeatureSwitches:(id)switches;
+ (id)configWithExperiment:(id)experiment treatmentBuckets:(id)buckets;
+ (id)defaultConfig;

/* instance methods */
- (id)initWithType:(long long)type featureSwitches:(id)switches experiment:(id)experiment treatmentBuckets:(id)buckets;
- (id)init;

@end

#endif /* TFSTwitterNotificationSettingsEntryFeatureSwitchConfig_h */
