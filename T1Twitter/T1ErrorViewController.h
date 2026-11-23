//
#ifndef T1ErrorViewController_h
#define T1ErrorViewController_h
@import Foundation;

@class NSString, TFNItemsDataViewController;

@interface T1ErrorViewController : TFNItemsDataViewController

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *messageSubtext;
@property (retain, nonatomic) id inputItem;

/* instance methods */
- (void)updateSections;
- (void)viewDidLoad;
- (unsigned long long)tfn_supportedInterfaceOrientations;

@end

#endif /* T1ErrorViewController_h */
