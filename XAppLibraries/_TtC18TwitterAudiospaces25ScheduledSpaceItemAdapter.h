//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC18TwitterAudiospaces25ScheduledSpaceItemAdapter_h
#define _TtC18TwitterAudiospaces25ScheduledSpaceItemAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, TwitterAudiospaces.ScheduledSpaceItemViewModel _$s_So8UIButtonCtc;

@interface TwitterAudiospaces.ScheduledSpaceItemAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    TwitterAudiospaces.ScheduledSpaceItemViewModel function type (escaping) eventBlock;
    TwitterAudiospaces.ScheduledSpaceItemViewModel _$s_So8UIButtonCtc optionsBlock;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC18TwitterAudiospaces25ScheduledSpaceItemAdapter_h */
