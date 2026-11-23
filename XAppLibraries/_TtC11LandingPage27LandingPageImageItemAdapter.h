//
#ifndef _TtC11LandingPage27LandingPageImageItemAdapter_h
#define _TtC11LandingPage27LandingPageImageItemAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, _$sSo16TIPImagePipelineCSg;

@interface LandingPage.LandingPageImageItemAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    __C.TIPImagePipeline? imagePipeline;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC11LandingPage27LandingPageImageItemAdapter_h */
