//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ProfileNFLScheduleCarouselViewController_h
#define T1ProfileNFLScheduleCarouselViewController_h
@import Foundation;

#include "T1ResizableHeaderSubheader-Protocol.h"

@class TFNViewController;

@interface T1ProfileNFLScheduleCarouselViewController : TFNViewController <T1ResizableHeaderSubheader> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *scheduleStore;
    NSNumber"16@0:8 *carouselView;
    NSNumber"16@0:8 *scribe;
    NSNumber"16@0:8 *scribeElement;
}

@property (nonatomic, copy) id subheaderInfo;
@property (nonatomic, copy) id /* block */ preferredHeightCheckBlock;

/* instance methods */
- (id)initWithAccount:(id)account nflManager:(id)manager;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (double)preferredHeight;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1ProfileNFLScheduleCarouselViewController_h */
