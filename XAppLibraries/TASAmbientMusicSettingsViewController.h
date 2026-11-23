//
#ifndef TASAmbientMusicSettingsViewController_h
#define TASAmbientMusicSettingsViewController_h
@import Foundation;

#include "TASAmbientMusicSettingsViewControllerDelegate-Protocol.h"
#include "TASItemsDataViewController.h"

@interface TASAmbientMusicSettingsViewController : TASItemsDataViewController { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 trackSection;
}

@property (nonatomic, weak) id <TASAmbientMusicSettingsViewControllerDelegate> ambientMusicSettingsViewControllerDelegate;

/* instance methods */
- (id)initWithSpaceModel:(id)model;
- (void)update:(_Bool)update;
- (id)scribeSection;

@end

#endif /* TASAmbientMusicSettingsViewController_h */
