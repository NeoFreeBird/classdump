//
#ifndef ONBShowCodeViewController_h
#define ONBShowCodeViewController_h
@import Foundation;

#include "ONBItemsDataViewController.h"
#include "ONBShowCodeViewControllerDelegate-Protocol.h"

@interface ONBShowCodeViewController : ONBItemsDataViewController {
    /* instance variables */
    id <ONBShowCodeViewControllerDelegate> _delegate;
}

/* instance methods */
- (id)initWithAccount:(id)account componentsViewModel:(id)model style:(long long)style code:(id)code delegate:(id)delegate;
- (id)calculatedLayoutMetrics;
- (id)private_itemWithStyle:(long long)style code:(id)code;
- (void)submit;
- (void)abandon;

@end

#endif /* ONBShowCodeViewController_h */
