//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC33TwitterListsFeatureImplementation24ListSearchViewController_h
#define _TtC33TwitterListsFeatureImplementation24ListSearchViewController_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"
#include "UITextFieldDelegate-Protocol.h"

@class TFNViewController, TwitterListsFeatureImplementation.ListTypeaheadViewController, _$sSo17TFNTwitterAccountC, _$sSo26TFNNavigationBarSearchViewC;

@interface TwitterListsFeatureImplementation.ListSearchViewController : TFNViewController <UIScrollViewDelegate, UITextFieldDelegate> { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFNNavigationBarSearchView searchTitleView;
    TwitterListsFeatureImplementation.ListTypeaheadViewController typeaheadViewController;
}

/* instance methods */
- (void)scrollViewWillBeginDragging:(id)dragging;
- (_Bool)textFieldShouldReturn:(id)_return;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (id)scribePage;
- (id)scribeSection;
- (void)searchTextFieldDidChange:(id)change;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC33TwitterListsFeatureImplementation24ListSearchViewController_h */
