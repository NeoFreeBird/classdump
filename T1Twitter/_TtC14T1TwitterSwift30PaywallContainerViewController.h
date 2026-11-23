//
#ifndef _TtC14T1TwitterSwift30PaywallContainerViewController_h
#define _TtC14T1TwitterSwift30PaywallContainerViewController_h
@import Foundation;

#include "TFNPresented-Protocol.h"

@class Swift.Bool, T1TwitterSwift.PaywallControllerParams, TFNViewController, _$sSo6TFNHUDCSg;

@interface T1TwitterSwift.PaywallContainerViewController : TFNViewController <TFNPresented> { // (Swift)
    /* instance variables */
    T1TwitterSwift.PaywallControllerParams params;
    Swift.Bool didAppear;
    __C.TFNHUD? $__lazy_storage_$_HUD;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)viewDidAppear:(_Bool)appear;
- (void)tfnPresentedCustomPresentFromViewController:(id)controller animated:(_Bool)animated completion:(id /* block */)completion;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift30PaywallContainerViewController_h */
