//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPagedActionSheetController_h
#define PTVPagedActionSheetController_h
@import Foundation;

#include "PTVActionSheetPage.h"
#include "PTVAnchoredModalContainerViewDelegate-Protocol.h"
#include "PTVPagedActionSheetControllerDelegate-Protocol.h"
#include "PTVPagedActionSheetView.h"
#include "PTVPagedActionSheetViewDelegate-Protocol.h"

@class UIViewController;

@interface PTVPagedActionSheetController : UIViewController <PTVPagedActionSheetViewDelegate, PTVAnchoredModalContainerViewDelegate> {
    /* instance variables */
    PTVActionSheetPage *_startingPage;
    id <PTVPagedActionSheetControllerDelegate> _delegate;
}

@property (readonly, nonatomic) PTVPagedActionSheetView *actionSheetView;

/* instance methods */
- (void)loadView;
- (id)initWithPage:(id)page delegate:(id)delegate;
- (void)pushPage:(id)page;
- (void)popPage;
- (void)dismiss;
- (void)pagedActionSheetViewButtonPressedForAction:(id)action;
- (void)dismissAnchoredModalContainerView;

@end

#endif /* PTVPagedActionSheetController_h */
