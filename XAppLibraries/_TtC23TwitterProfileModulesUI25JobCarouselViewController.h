//
#ifndef _TtC23TwitterProfileModulesUI25JobCarouselViewController_h
#define _TtC23TwitterProfileModulesUI25JobCarouselViewController_h
@import Foundation;

#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class TFNItemsDataViewController, TwitterProfileModulesUI.JobCarouselViewControllerDelegate ?, _$sSa -> TwitterProfileModules.JobViewModel ?, _$sSa -> _$s10Foundation9IndexPathVMn ?, _$sSi, _$sSo27TFNCollectionViewFlowLayoutC;

@interface TwitterProfileModulesUI.JobCarouselViewController : TFNItemsDataViewController <UICollectionViewDelegateFlowLayout> { // (Swift)
    /* instance variables */
    TwitterProfileModulesUI.JobCarouselViewControllerDelegate ? carouselDelegate;
    Swift.Array -> nominal type descriptor for Foundation.IndexPath ? previouslyVisibleIndexPaths;
    __C.TFNCollectionViewFlowLayout layout;
    Swift.Array -> TwitterProfileModules.JobViewModel ? jobViewModels;
    Swift.Int maxJobItemCount;
}

/* class methods */
+ (Class)collectionViewClass;

/* instance methods */
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (void)dataViewDidDisplay;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC23TwitterProfileModulesUI25JobCarouselViewController_h */
