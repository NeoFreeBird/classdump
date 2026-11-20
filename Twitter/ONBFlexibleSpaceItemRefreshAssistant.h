//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBFlexibleSpaceItemRefreshAssistant_h
#define ONBFlexibleSpaceItemRefreshAssistant_h
@import Foundation;

@class NSObject, TFNItemsDataViewController;

@interface ONBFlexibleSpaceItemRefreshAssistant : NSObject {
    /* instance variables */
    TFNItemsDataViewController *_viewController;
    _Bool _isSizeTransitioning;
    id /* block */ _action;
}

/* instance methods */
- (id)initWithItemsDataViewController:(id)controller refreshAction:(id /* block */)action;
- (void)dealloc;
- (void)private_availableHeightDidChange:(id)change;
- (void)handleViewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;

@end

#endif /* ONBFlexibleSpaceItemRefreshAssistant_h */
