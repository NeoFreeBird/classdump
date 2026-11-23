//
#ifndef ProfileActionButtonsController_h
#define ProfileActionButtonsController_h
@import Foundation;

#include "ProfileActionButtonsControllerDelegate-Protocol.h"

@class NSArray, NSObject, XDSButtonRow;

@interface ProfileActionButtonsController : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 location;
    @40@0:8:16@24@32 context;
    @40@0:8:16@24@32 viewModels;
    @40@0:8:16@24@32 viewModelsByType;
    @40@0:8:16@24@32 buttonsByIdentity;
    @40@0:8:16@24@32 navigationBarPlacedTypes;
    @40@0:8:16@24@32 placing;
    @40@0:8:16@24@32 reloadScheduled;
}

@property (nonatomic, weak) id <ProfileActionButtonsControllerDelegate> delegate;
@property (nonatomic, readonly) XDSButtonRow *rowView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } occupiedContentRect;
@property (nonatomic, readonly) NSArray *visibleButtons;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInsets;
@property (nonatomic) _Bool placesButtonsInNavigationBar;

/* instance methods */
- (id)visibleButtonOfType:(long long)type;
- (void)updateContextScrolledPastCollapse:(_Bool)collapse showingNormalMainContent:(_Bool)content animated:(_Bool)animated;
- (void)flushPendingReload;
- (void)viewWillAppear;
- (id)navigationBarButtonItemsWithPresenter:(id /* block */)presenter;
- (void)reloadWithAnimated:(_Bool)animated;
- (id)init;

@end

#endif /* ProfileActionButtonsController_h */
