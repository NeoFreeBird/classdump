//
#ifndef ONBEnterEmailViewController_h
#define ONBEnterEmailViewController_h
@import Foundation;

#include "ONBEnterEmailViewControllerDelegate-Protocol.h"
#include "ONBItemsDataViewController.h"

@interface ONBEnterEmailViewController : ONBItemsDataViewController {
    /* instance variables */
    id <ONBEnterEmailViewControllerDelegate> _delegate;
}

/* instance methods */
- (id)initWithAccount:(id)account componentsViewModel:(id)model hintText:(id)text discoverabilitySetting:(id)setting activeRanges:(id)ranges delegate:(id)delegate;
- (void)abandon;
- (void)submit;
- (void)private_updateSectionsWithAdditionalSections:(id)sections;

@end

#endif /* ONBEnterEmailViewController_h */
