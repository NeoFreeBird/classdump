//
#ifndef ONBEnterDateViewController_h
#define ONBEnterDateViewController_h
@import Foundation;

#include "ONBEnterDateViewControllerDelegate-Protocol.h"
#include "ONBItemsDataViewController.h"

@class NSDate, NSDateFormatter, NSString;

@interface ONBEnterDateViewController : ONBItemsDataViewController {
    /* instance variables */
    id <ONBEnterDateViewControllerDelegate> _delegate;
    NSDate *_maximumDate;
    NSDate *_maximumSelectableDate;
    NSDate *_minimumDate;
    NSDate *_minimumSelectableDate;
    NSDateFormatter *_dateFormatter;
    NSString *_hintText;
    NSString *_maximumDateErrorMessage;
    NSString *_minimumDateErrorMessage;
}

/* instance methods */
- (id)initWithAccount:(id)account componentsViewModel:(id)model initialDate:(id)date minimumSelectableDate:(id)date maximumSelectableDate:(id)date minimumDate:(id)date maximumDate:(id)date minimumDateErrorMessage:(id)message maximumDateErrorMessage:(id)message hintText:(id)text delegate:(id)delegate;
- (void)abandon;
- (void)submit;
- (id)private_dateItemWithInitialDate:(id)date;
- (void)private_dateDidChange:(id)change;

@end

#endif /* ONBEnterDateViewController_h */
