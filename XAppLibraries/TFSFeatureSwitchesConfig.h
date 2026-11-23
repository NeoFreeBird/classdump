//
#ifndef TFSFeatureSwitchesConfig_h
#define TFSFeatureSwitchesConfig_h
@import Foundation;

@class NSDate, NSDictionary, NSObject, NSSet, NSString;

@interface TFSFeatureSwitchesConfig : NSObject {
    /* instance variables */
    NSDictionary *_values;
    NSSet *_embeddedDarkmoded;
}

@property (readonly, nonatomic) NSDate *createdOn;
@property (readonly, nonatomic) NSString *featureSwitchesVersion;
@property (readonly, nonatomic) NSString *experimentsVersion;
@property (readonly, nonatomic) NSString *settingsVersion;
@property (readonly, nonatomic) NSString *featureSetToken;
@property (readonly, nonatomic) NSString *ceolAllowlist;

/* class methods */
+ (id)overrideConfigWithConfig:(id)config withValue:(id)value forKey:(id)key;
+ (id)overrideConfigWithConfig:(id)config removeOverriddenValueForKey:(id)key;
+ (id)overrideConfigWithConfig:(id)config disablingValuesForKeys:(id)keys;
+ (id)configWithDictionary:(id)dictionary;
+ (id)configWithContentsOfFile:(id)file error:(id *)error;
+ (id)parseImpressionPointers:(id)pointers withImpressions:(id)impressions;
+ (id)parseImpressions:(id)impressions;
+ (id)parseEmbeddedDarkmoded:(id)darkmoded;
+ (id)timeStamp;

/* instance methods */
- (id)configByOverridingValuesWithKeys:(id)keys fromConfig:(id)config;
- (id)description;
- (id)init;
- (id)initWithValues:(id)values embeddedDarkmoded:(id)darkmoded featureSwitchesVersion:(id)version experimentsVersion:(id)version settingsVersion:(id)version featureSetToken:(id)token ceolAllowlist:(id)allowlist;
- (id)allKeys;
- (id)valueForKey:(id)key;
- (id)keysDifferentFromConfig:(id)config;
- (_Bool)isEmbeddedExperimentDarkmodedForKey:(id)key;
- (void)logVersionsWithLogger:(id)logger;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFSFeatureSwitchesConfig_h */
