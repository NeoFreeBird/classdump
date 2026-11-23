//
#ifndef _TtC14T1TwitterSwift21VoiceTabHeaderAdapter_h
#define _TtC14T1TwitterSwift21VoiceTabHeaderAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, _$sSo16TIPImagePipelineCSg;

@interface T1TwitterSwift.VoiceTabHeaderAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift21VoiceTabHeaderAdapter_h */
