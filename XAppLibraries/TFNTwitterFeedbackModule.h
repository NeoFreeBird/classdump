//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterFeedbackModule_h
#define TFNTwitterFeedbackModule_h
@import Foundation;

#include "TFNTwitterDismiss.h"

@class NSArray, NSObject;

@interface TFNTwitterFeedbackModule : NSObject

@property (readonly, nonatomic) NSArray *feedbackInfos;
@property (readonly, nonatomic) TFNTwitterDismiss *dismissInfo;
@property (retain, nonatomic) TFNTwitterDismiss *currentDismiss;

/* instance methods */
- (id)init;
- (id)initWithDismiss:(id)dismiss confirmationFeedbacks:(id)feedbacks;

@end

#endif /* TFNTwitterFeedbackModule_h */
