//
#ifndef UMPConsentViewController_h
#define UMPConsentViewController_h
@import Foundation;

@class UIView, UIViewController;

@interface UMPConsentViewController : UIViewController {
    /* instance variables */
    UIView *_view;
}

/* instance methods */
- (id)initWithConsentView:(id)view;
- (void)viewDidLoad;

@end

#endif /* UMPConsentViewController_h */
