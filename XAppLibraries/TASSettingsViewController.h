//
#ifndef TASSettingsViewController_h
#define TASSettingsViewController_h
@import Foundation;

#include "TASItemsDataViewController.h"

@interface TASSettingsViewController : TASItemsDataViewController // (Swift)

/* instance methods */
- (id)initWithSpaceModel:(id)model;
- (void)update:(_Bool)update;
- (id)scribeSection;

@end

#endif /* TASSettingsViewController_h */
