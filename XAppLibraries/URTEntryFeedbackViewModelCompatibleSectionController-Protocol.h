//
#ifndef URTEntryFeedbackViewModelCompatibleSectionController_Protocol_h
#define URTEntryFeedbackViewModelCompatibleSectionController_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol URTEntryFeedbackViewModelCompatibleSectionController <NSObject>

@required

/* required instance methods */
- (_Bool)isDisplayingFeedbackActionViewModel;
- (id)displayingFeedbackActionViewModels;

@optional

@end

#endif /* URTEntryFeedbackViewModelCompatibleSectionController_Protocol_h */
