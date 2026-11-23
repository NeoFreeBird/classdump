//
#ifndef _TtC14T1TwitterSwift19VoiceTabItemAdapter_h
#define _TtC14T1TwitterSwift19VoiceTabItemAdapter_h
@import Foundation;

@class T1TwitterSwift.VoiceTabItemAdapter.Event _$s_ -> T1TwitterSwift.VoiceTabItemViewModel _$sSo6UIViewCtc, TFNItemsDataViewAdapter, _$s14TwitterUISwift13TUIUserBadgerCMn, _$sSo16TIPImagePipelineCSg;

@interface T1TwitterSwift.VoiceTabItemAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
    nominal type descriptor for TwitterUISwift.TUIUserBadger userBadger;
    T1TwitterSwift.VoiceTabItemAdapter.Event  first-element-marker  -> T1TwitterSwift.VoiceTabItemViewModel _$sSo6UIViewCtc eventBlock;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller willDisplayCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didEndDisplayingCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift19VoiceTabItemAdapter_h */
