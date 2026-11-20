//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1FeedbackActionProvider_Protocol_h
#define T1FeedbackActionProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1FeedbackActionProvider <NSObject>

@required

/* required instance methods */
- (id)negativeFeedbackActionsForStatus:(id)status;
- (id)negativeFeedbackActionsForStatus:(id)status;
- (id /* block */)didProvideShowLessOftenFeedbackForStatus:(id)status;
- (id /* block */)didProvideShowLessOftenFeedbackForStatus:(id)status;

@optional

@end

#endif /* T1FeedbackActionProvider_Protocol_h */
