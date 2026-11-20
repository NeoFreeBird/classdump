//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
