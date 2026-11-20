//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceRoomPlaySpaceViewController_h
#define T1VoiceRoomPlaySpaceViewController_h
@import Foundation;

#include "T1VoiceRoomVoiceTransformerControllerDelegate-Protocol.h"

@class TFNViewController;

@interface T1VoiceRoomPlaySpaceViewController : TFNViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewHeight;
    NSNumber"16@0:8 *currentViewController;
    NSNumber"16@0:8 *spaceModel;
    NSNumber"16@0:8 *segmentedScrollView;
    NSNumber"16@0:8 *segmentedStackView;
}

@property (nonatomic, weak) id <T1VoiceRoomVoiceTransformerControllerDelegate> delegate;

/* instance methods */
- (id)initWithSpaceModel:(id)model;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)selectButtonWithSender:(id)sender;
- (void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)array;
- (void)presentFromBelowView:(id)view roomView:(id)view;
- (void)dismissWithAnimated:(_Bool)animated roomView:(id)view completion:(id /* block */)completion;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1VoiceRoomPlaySpaceViewController_h */
