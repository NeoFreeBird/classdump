//
#ifndef TFNTwitterMutableDismissibleItem_Protocol_h
#define TFNTwitterMutableDismissibleItem_Protocol_h
@import Foundation;

#include "TFNTwitterDismissibleItem-Protocol.h"
#include "TFNTwitterFeedbackModule.h"

@protocol TFNTwitterMutableDismissibleItem <TFNTwitterDismissibleItem>

@required

@property (nonatomic) _Bool dismissing;
@property (retain, nonatomic) TFNTwitterFeedbackModule *feedbackModule;

/* required instance methods */
- (_Bool)isDismissing;

@optional

@end

#endif /* TFNTwitterMutableDismissibleItem_Protocol_h */
