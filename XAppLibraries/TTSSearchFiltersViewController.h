//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSSearchFiltersViewController_h
#define TTSSearchFiltersViewController_h
@import Foundation;

#include "TFNMenuSheetActionAdapterDelegate-Protocol.h"
#include "TTSSearchFiltersViewControllerContext-Protocol.h"

@class NSDictionary, NSString, TFNBooleanItem, TFNItemsDataViewController;
@protocol TTSSearchFiltersViewControllerDelegate;

@interface TTSSearchFiltersViewController : TFNItemsDataViewController <TFNMenuSheetActionAdapterDelegate>

@property (retain, nonatomic) id <TTSSearchFiltersViewControllerContext> context;
@property (retain, nonatomic) TFNBooleanItem *socialFilterNoneItem;
@property (retain, nonatomic) TFNBooleanItem *socialFilterSearcherFollowsItem;
@property (retain, nonatomic) TFNBooleanItem *socialFilterLocationNoneItem;
@property (retain, nonatomic) TFNBooleanItem *socialFilterLocationNearMeItem;
@property (weak, nonatomic) id <TTSSearchFiltersViewControllerDelegate> delegate;
@property (retain, nonatomic) NSDictionary *scribeParameters;
@property (nonatomic) _Bool locationFilterEnabled;
@property (nonatomic) _Bool followingFilterEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContext:(id)context;
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (unsigned long long)tfn_supportedInterfaceOrientations;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (void)menuActionSheetAdapter:(id)adapter didSelectActionItem:(id)item atIndexPath:(id)path;

@end

#endif /* TTSSearchFiltersViewController_h */
