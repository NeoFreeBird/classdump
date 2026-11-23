//
#ifndef T1AddressBookContainerViewController_h
#define T1AddressBookContainerViewController_h
@import Foundation;

@class TFNViewController;

@interface T1AddressBookContainerViewController : TFNViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *currentChildViewController;
    NSNumber"16@0:8 *permissionObserver;
}

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1AddressBookContainerViewController_h */
