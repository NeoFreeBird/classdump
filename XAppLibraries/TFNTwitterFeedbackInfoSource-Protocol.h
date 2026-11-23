//
#ifndef TFNTwitterFeedbackInfoSource_Protocol_h
#define TFNTwitterFeedbackInfoSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNTwitterFeedbackInfo.h"

@protocol TFNTwitterFeedbackInfoSource <NSObject>

@required

@property (readonly, nonatomic) TFNTwitterFeedbackInfo *feedbackInfo;

@optional

@end

#endif /* TFNTwitterFeedbackInfoSource_Protocol_h */
