//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TwitterRewards22EmailSharingRowAdapter_h
#define _TtC14TwitterRewards22EmailSharingRowAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, TwitterRewards.EmailSharingRowAdapterDelegate ?;

@interface TwitterRewards.EmailSharingRowAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    TwitterRewards.EmailSharingRowAdapterDelegate ? delegate;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14TwitterRewards22EmailSharingRowAdapter_h */
