//
#ifndef Subsystem_ios_iosArm64_mainFeatureSwitchesRepository_Protocol_h
#define Subsystem_ios_iosArm64_mainFeatureSwitchesRepository_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainFeatureSwitchesRepository

@required

/* required instance methods */
- (void)awaitWarmupWithCompletionHandler:(id /* block */)handler;
- (void)awaitWarmupWithCompletionHandler:(id /* block */)handler;
- (_Bool)getBooleanKey:(id)key defaultValue:(_Bool)value;
- (_Bool)getBooleanKey:(id)key defaultValue:(_Bool)value;
- (double)getDoubleKey:(id)key defaultValue:(double)value;
- (double)getDoubleKey:(id)key defaultValue:(double)value;
- (id)getExperimentBucketKey:(id)key;
- (id)getExperimentBucketKey:(id)key;
- (id)getFeatureSwitches;
- (float)getFloatKey:(id)key defaultValue:(float)value;
- (float)getFloatKey:(id)key defaultValue:(float)value;
- (int)getIntKey:(id)key defaultValue:(int)value;
- (int)getIntKey:(id)key defaultValue:(int)value;
- (id)getListKey:(id)key;
- (id)getListKey:(id)key;
- (long long)getLongKey:(id)key defaultValue:(long long)value;
- (long long)getLongKey:(id)key defaultValue:(long long)value;
- (id)getStringKey:(id)key defaultValue:(id)value;
- (id)getStringKey:(id)key defaultValue:(id)value;
- (_Bool)isInAnyTreatmentOrControlExperiment:(id)experiment;
- (_Bool)isInAnyTreatmentOrControlExperiment:(id)experiment;
- (_Bool)isInExperimentBucketExperiment:(id)experiment buckets:(id)buckets;
- (_Bool)isInExperimentBucketExperiment:(id)experiment buckets:(id)buckets;
- (_Bool)isInExperimentBucketExperiment:(id)experiment bucket:(id)bucket;
- (_Bool)isInExperimentBucketExperiment:(id)experiment bucket:(id)bucket;
- (_Bool)isInTreatmentBucketExperiment:(id)experiment;
- (_Bool)isInTreatmentBucketExperiment:(id)experiment;
- (_Bool)isRemote;
- (id)observeChanges;
- (_Bool)peekBooleanKey:(id)key defaultValue:(_Bool)value;
- (_Bool)peekBooleanKey:(id)key defaultValue:(_Bool)value;
- (double)peekDoubleKey:(id)key defaultValue:(double)value;
- (double)peekDoubleKey:(id)key defaultValue:(double)value;
- (id)peekExperimentBucketExperiment:(id)experiment;
- (id)peekExperimentBucketExperiment:(id)experiment;
- (float)peekFloatKey:(id)key defaultValue:(float)value;
- (float)peekFloatKey:(id)key defaultValue:(float)value;
- (int)peekIntKey:(id)key defaultValue:(int)value;
- (int)peekIntKey:(id)key defaultValue:(int)value;
- (_Bool)peekIsInExperimentBucketExperiment:(id)experiment buckets:(id)buckets;
- (_Bool)peekIsInExperimentBucketExperiment:(id)experiment buckets:(id)buckets;
- (_Bool)peekIsInTreatmentBucketExperiment:(id)experiment;
- (_Bool)peekIsInTreatmentBucketExperiment:(id)experiment;
- (id)peekListKey:(id)key;
- (id)peekListKey:(id)key;
- (long long)peekLongKey:(id)key defaultValue:(long long)value;
- (long long)peekLongKey:(id)key defaultValue:(long long)value;
- (id)peekStringKey:(id)key defaultValue:(id)value;
- (id)peekStringKey:(id)key defaultValue:(id)value;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainFeatureSwitchesRepository_Protocol_h */
