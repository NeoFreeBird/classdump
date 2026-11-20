//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTSRecentSearchTypeaheadViewController_h
#define TTSRecentSearchTypeaheadViewController_h
@import Foundation;

#include "TTSRecentSearchCollectionItemAdapter.h"
#include "TTSRecentSearchCollectionItemAdapterDelegate-Protocol.h"
#include "TTSRecentSearchTypeaheadViewControllerDelegate-Protocol.h"

@class NSArray, NSString, TFNItemsDataViewController, UICollectionViewFlowLayout;

@interface TTSRecentSearchTypeaheadViewController : TFNItemsDataViewController <TTSRecentSearchCollectionItemAdapterDelegate>

@property (retain, nonatomic) TTSRecentSearchCollectionItemAdapter *recentSearchAdapter;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (nonatomic) _Bool viewDidLoadFired;
@property (copy, nonatomic) NSArray *results;
@property (weak, nonatomic) id <TTSRecentSearchTypeaheadViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithImagePipeline:(id)pipeline cellContext:(id)context externalViewContext:(id)context itemAdapterContext:(id)context;
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)tfn_fontSizeChanged;
- (void)recentSearchCollectionItemAdapter:(id)adapter didSelectItem:(id)item;

@end

#endif /* TTSRecentSearchTypeaheadViewController_h */
