//
#ifndef ONBEnterPhoneViewController_h
#define ONBEnterPhoneViewController_h
@import Foundation;

#include "ONBEnterPhoneViewControllerDelegate-Protocol.h"
#include "ONBItemsDataViewController.h"

@interface ONBEnterPhoneViewController : ONBItemsDataViewController {
    /* instance variables */
    id <ONBEnterPhoneViewControllerDelegate> _delegate;
}

/* instance methods */
- (id)initWithAccount:(id)account componentsViewModel:(id)model hintText:(id)text countryCodes:(id)codes defaultCountryCode:(id)code discoverabilitySetting:(id)setting activeRanges:(id)ranges delegate:(id)delegate;
- (void)abandon;
- (void)submit;
- (void)private_updateSectionsWithAdditionalSections:(id)sections;

@end

#endif /* ONBEnterPhoneViewController_h */
