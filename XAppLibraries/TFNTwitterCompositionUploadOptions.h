//
#ifndef TFNTwitterCompositionUploadOptions_h
#define TFNTwitterCompositionUploadOptions_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "TFNTwitterNudgeExperimentModel.h"

@class NSObject;

@interface TFNTwitterCompositionUploadOptions : NSObject <NSCopying>

@property (nonatomic) _Bool preferToCancelOnBackgroundTaskExpiration;
@property (retain, nonatomic) TFNTwitterNudgeExperimentModel *nudgeExperimentModel;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* TFNTwitterCompositionUploadOptions_h */
