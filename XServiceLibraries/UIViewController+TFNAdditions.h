//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIViewController_TFNAdditions_h
#define UIViewController_TFNAdditions_h
@import Foundation;

@interface UIViewController (TFNAdditions)

/* class methods */
+ (void)tfn_startRecordingViewControllerInitialization;
+ (id)tfn_allViewControllers;

/* instance methods */
- (id)initAndRecordWithNibName:(id)name bundle:(id)bundle;
- (id)tfn_ownedViewControllers;
- (id)tfn_callStackSymbolsAtInitialization;
- (id)tfn_owningView;
- (void)tfn_setOwningView:(id)view;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)_tfn_addChildAndPresentedViewControllersToMutableArray:(id)array;

@end

#endif /* UIViewController_TFNAdditions_h */
