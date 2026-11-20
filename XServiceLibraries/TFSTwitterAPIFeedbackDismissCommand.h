//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAPIFeedbackDismissCommand_h
#define TFSTwitterAPIFeedbackDismissCommand_h
@import Foundation;

#include "TFSTwitterAPICommand.h"

@class NSString;

@interface TFSTwitterAPIFeedbackDismissCommand : TFSTwitterAPICommand

@property (retain, nonatomic) NSString *feedbackID;

/* instance methods */
- (id)initWithAccountID:(id)id feedbackID:(id)id context:(id)context source:(unsigned long long)source completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIFeedbackDismissCommand_h */
