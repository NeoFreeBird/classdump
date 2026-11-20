//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterMutableDismissibleItem_Protocol_h
#define TFNTwitterMutableDismissibleItem_Protocol_h
@import Foundation;

#include "TFNTwitterDismissibleItem-Protocol.h"

@class TFNTwitterFeedbackModule;

@protocol TFNTwitterMutableDismissibleItem <TFNTwitterDismissibleItem>

@required

@property (nonatomic) _Bool dismissing;
@property (retain, nonatomic) TFNTwitterFeedbackModule *feedbackModule;

/* required instance methods */
- (_Bool)isDismissing;

@optional

@end

#endif /* TFNTwitterMutableDismissibleItem_Protocol_h */
