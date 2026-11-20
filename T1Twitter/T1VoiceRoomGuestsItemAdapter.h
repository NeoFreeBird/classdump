//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomGuestsItemAdapter_h
#define T1VoiceRoomGuestsItemAdapter_h
@import Foundation;

@class TFNItemsTableRowAdapter;

@interface T1VoiceRoomGuestsItemAdapter : TFNItemsTableRowAdapter { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *context;
    NSNumber"16@0:8 *actionControlProvider;
}

/* instance methods */
- (id)initWithContext:(id)context actionControlProvider:(id)provider;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* T1VoiceRoomGuestsItemAdapter_h */
