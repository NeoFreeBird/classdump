//
#ifndef TFSTwitterAPIMutesAdvancedFiltersCommand_h
#define TFSTwitterAPIMutesAdvancedFiltersCommand_h
@import Foundation;

#include "TFSTwitterAPICommandWithResponseModelBuilder.h"

@interface TFSTwitterAPIMutesAdvancedFiltersCommand : TFSTwitterAPICommandWithResponseModelBuilder

/* instance methods */
- (id)initWithContext:(id)context accountID:(id)id responseModelBuilder:(id)builder completionBlock:(id /* block */)block;
- (id)request;

@end

#endif /* TFSTwitterAPIMutesAdvancedFiltersCommand_h */
