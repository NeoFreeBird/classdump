//
#ifndef T1ProfileBirthdayDisplayFormViewController_h
#define T1ProfileBirthdayDisplayFormViewController_h
@import Foundation;

#include "T1ProfileBirthdayDisplayFormViewControllerDelegate-Protocol.h"

@class TFNLegacyFormViewController;

@interface T1ProfileBirthdayDisplayFormViewController : TFNLegacyFormViewController

@property (weak, nonatomic) id <T1ProfileBirthdayDisplayFormViewControllerDelegate> delegate;

/* instance methods */
- (id)initWithDisplayText:(id)text delegate:(id)delegate;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (_Bool)private_updateViewSize;
- (void)formFieldDidBeginEditingUserInput:(id)input withStopEditingAction:(id /* block */)action;

@end

#endif /* T1ProfileBirthdayDisplayFormViewController_h */
