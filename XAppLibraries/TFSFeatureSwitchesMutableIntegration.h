//
#ifndef TFSFeatureSwitchesMutableIntegration_h
#define TFSFeatureSwitchesMutableIntegration_h
@import Foundation;

#include "TFSFeatureSwitchesIntegration.h"

@class NSURL;

@interface TFSFeatureSwitchesMutableIntegration : TFSFeatureSwitchesIntegration

@property (copy, nonatomic) NSURL *manifestFileURL;
@property (copy, nonatomic) NSURL *overridesURL;
@property (copy, nonatomic) NSURL *archiveDirectoryURL;
@property (nonatomic) _Bool instrumentationEnabled;
@property (nonatomic) unsigned long long deviceGuestID;
@property (nonatomic) _Bool isVoiceOverRunning;
@property (nonatomic) double refreshInterval;
@property (nonatomic) double archiveStalenessThresholdInterval;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFSFeatureSwitchesMutableIntegration_h */
