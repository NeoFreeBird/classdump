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
