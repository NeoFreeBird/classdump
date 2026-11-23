//
#ifndef T1ProfileModulesContainerViewController_h
#define T1ProfileModulesContainerViewController_h
@import Foundation;

#include "T1ResizableHeaderSubheader-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class TFNViewController;

@interface T1ProfileModulesContainerViewController : TFNViewController <TFNLayoutMetricsEnvironment, T1ResizableHeaderSubheader> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *profileModulesContext;
    NSNumber"16@0:8 *modules;
    NSNumber"16@0:8 *moduleViewController;
}

@property (nonatomic, copy) id /* block */ preferredHeightCheckBlock;
@property (nonatomic, copy) id subheaderInfo;

/* instance methods */
- (id)initWithAccount:(id)account profileViewModel:(id)model;
- (id)initWithCoder:(id)coder;
- (void)reloadData;
- (void)loadView;
- (void)viewDidLoad;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (id)scribeParameters;
- (id)scribeImpressionParameters;
- (double)preferredHeight;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1ProfileModulesContainerViewController_h */
