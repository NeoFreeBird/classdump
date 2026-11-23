//
#ifndef TASSpaceViewController_Protocol_h
#define TASSpaceViewController_Protocol_h
@import Foundation;

#include "TASSharing.h"
#include "TASSpaceModel-Protocol.h"
#include "TUIVoiceDockableViewController-Protocol.h"

@protocol TASSpaceViewController <TUIVoiceDockableViewController>

@required

@property (nonatomic, readonly) id <TASSpaceModel> spaceModel;
@property (nonatomic, readonly) TASSharing *sharing;

/* required instance methods */
- (void)leaveWithReason:(long long)reason scribeSection:(id)section scribeComponent:(id)component;
- (void)leave;
- (void)updateSpaceModel:(id)model isPreview:(_Bool)preview isReplay:(_Bool)replay;
- (void)refreshSpaceView;

@optional

@end

#endif /* TASSpaceViewController_Protocol_h */
