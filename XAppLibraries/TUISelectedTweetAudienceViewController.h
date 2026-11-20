//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUISelectedTweetAudienceViewController_h
#define TUISelectedTweetAudienceViewController_h
@import Foundation;

#include "TUITweetAudienceSelectionModelObserver-Protocol.h"

@class TFNViewController, TIPImagePipeline, UIButton;

@interface TUISelectedTweetAudienceViewController : TFNViewController <TUITweetAudienceSelectionModelObserver> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 selectionModel;
    @40@0:8:16@24@32 selectionModelObserver;
    @40@0:8:16@24@32 $__lazy_storage_$_selectedAudienceView;
}

@property (nonatomic, retain) TIPImagePipeline *imagePipeline;
@property (nonatomic) long long presentationMode;
@property (nonatomic, readonly) UIButton *selectedAudienceButtonView;

/* instance methods */
- (void)tweetAudienceSelectionModelDidChangeSelection:(id)selection;
- (void)tweetAudienceSelectionModelDidUpdate:(id)update;
- (void)tweetAudienceSelectionModel:(id)model didCreateNewAudienceReference:(id)reference;
- (id)initWithSelectionModel:(id)model imagePipeline:(id)pipeline presentationMode:(long long)mode;
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* TUISelectedTweetAudienceViewController_h */
