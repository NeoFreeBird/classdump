//
#ifndef _TtC14T1TwitterSwift34URTFeedbackActionSectionController_h
#define _TtC14T1TwitterSwift34URTFeedbackActionSectionController_h
@import Foundation;

#include "URTEntryFeedbackViewModelCompatibleSectionController-Protocol.h"

@class TFNItemsDataViewSectionController, _$sSo25URTEntryFeedbackViewModel_p;

@interface T1TwitterSwift.URTFeedbackActionSectionController : TFNItemsDataViewSectionController <URTEntryFeedbackViewModelCompatibleSectionController> { // (Swift)
    /* instance variables */
    __C.URTEntryFeedbackViewModel feedbackViewModel;
}

/* instance methods */
- (unsigned long long)sectionBreaksForItem:(id)item atIndexPath:(id)path;
- (_Bool)isDisplayingFeedbackActionViewModel;
- (id)displayingFeedbackActionViewModels;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift34URTFeedbackActionSectionController_h */
