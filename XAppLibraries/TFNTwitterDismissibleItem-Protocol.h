//
#ifndef TFNTwitterDismissibleItem_Protocol_h
#define TFNTwitterDismissibleItem_Protocol_h
@import Foundation;

#include "TFNTwitterFeedbackModule.h"
#include "TFNTwitterSuggestedItem-Protocol.h"

@protocol TFNTwitterDismissibleItem <TFNTwitterSuggestedItem>

@required

@property (nonatomic, readonly) _Bool dismissible;
@property (nonatomic, readonly) _Bool dismissible;
@property (nonatomic, readonly) unsigned long long dismissibleContentType;
@property (nonatomic, readonly) _Bool dismissing;
@property (nonatomic, readonly) _Bool dismissing;
@property (nonatomic, readonly) TFNTwitterFeedbackModule *feedbackModule;

/* required instance methods */
- (_Bool)isDismissible;
- (_Bool)isDismissible;
- (_Bool)isDismissing;
- (_Bool)isDismissing;

@optional

@end

#endif /* TFNTwitterDismissibleItem_Protocol_h */
