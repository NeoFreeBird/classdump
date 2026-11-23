//
#ifndef TFNTwitterNudgeExperimentModel_h
#define TFNTwitterNudgeExperimentModel_h
@import Foundation;

#include "TFNTwitterComposition.h"
#include "TFNTwitterNudgeRequirementsProvider.h"
#include "TPSFeatureSwitchesAccess-Protocol.h"

@class NSObject;
@protocol TFNTwitterNudgeAccountModel;

@interface TFNTwitterNudgeExperimentModel : NSObject

@property (readonly, nonatomic) id <TFNTwitterNudgeAccountModel> account;
@property (readonly, nonatomic) TFNTwitterComposition *composition;
@property (readonly, nonatomic) id <TPSFeatureSwitchesAccess> featureSwitches;
@property (nonatomic) _Bool didIncludeCreateNudgeOperation;
@property (readonly, nonatomic) long long tweetType;
@property (readonly, nonatomic) TFNTwitterNudgeRequirementsProvider *nudgeRequirementsProvider;
@property (readonly, nonatomic) unsigned long long nudgeFlags;

/* instance methods */
- (id)initWithAccount:(id)account composition:(id)composition featureSwitches:(id)switches;
- (void)didIncludeCreateNudgeOperationInCompositionUpload;
- (void)didExcludeCreateNudgeOperationFromCompositionUpload;
- (void)didReceiveNudgeDuringCompositionUpload;
- (_Bool)shouldSimulateDelayedCompositionUpload;

@end

#endif /* TFNTwitterNudgeExperimentModel_h */
