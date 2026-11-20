//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1MuteKeywordDurationViewController_h
#define T1MuteKeywordDurationViewController_h
@import Foundation;

#include "T1MuteKeywordDurationViewControllerDelegate-Protocol.h"

@class TFNItemsDataViewController;

@interface T1MuteKeywordDurationViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *foreverItem;
    NSNumber"16@0:8 *dayItem;
    NSNumber"16@0:8 *weekItem;
    NSNumber"16@0:8 *monthItem;
}

@property (nonatomic) double duration;
@property (nonatomic, weak) id <T1MuteKeywordDurationViewControllerDelegate> delegate;

/* instance methods */
- (id)initWithInitiallySelectedDuration:(double)duration title:(id)title;
- (void)viewWillDisappear:(_Bool)disappear;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1MuteKeywordDurationViewController_h */
