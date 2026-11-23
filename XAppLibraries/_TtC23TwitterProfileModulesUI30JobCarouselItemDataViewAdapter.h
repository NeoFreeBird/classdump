//
#ifndef _TtC23TwitterProfileModulesUI30JobCarouselItemDataViewAdapter_h
#define _TtC23TwitterProfileModulesUI30JobCarouselItemDataViewAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, TwitterProfileModulesUI.JobCarouselItemDataViewAdapterDelegate ?;

@interface TwitterProfileModulesUI.JobCarouselItemDataViewAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    TwitterProfileModulesUI.JobCarouselItemDataViewAdapterDelegate ? delegate;
}

/* instance methods */
- (_Bool)dataViewController:(id)controller shouldSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC23TwitterProfileModulesUI30JobCarouselItemDataViewAdapter_h */
