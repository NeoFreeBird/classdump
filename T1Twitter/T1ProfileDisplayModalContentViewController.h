//
#ifndef T1ProfileDisplayModalContentViewController_h
#define T1ProfileDisplayModalContentViewController_h
@import Foundation;

#include "T1ProfileViewModel-Protocol.h"

@class TFNButton, TFNItemsDataViewController;

@interface T1ProfileDisplayModalContentViewController : TFNItemsDataViewController {
    /* instance variables */
    id <T1ProfileViewModel> _viewModel;
    TFNButton *_footerButton;
}

/* instance methods */
- (id)initWithAccount:(id)account viewModel:(id)model;
- (void)update:(_Bool)update;
- (void)profileViewModelDidInvalidateWithReason:(long long)reason;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)private_tweetSectionsForViewModel:(id)model;
- (id)private_dividerDataItem;
- (id)private_activityIndicatorDataItem;
- (id)private_footerButtonDataItem;
- (void)private_footerButtonTapped;

@end

#endif /* T1ProfileDisplayModalContentViewController_h */
