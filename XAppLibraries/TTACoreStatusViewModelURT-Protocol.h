//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTACoreStatusViewModelURT_Protocol_h
#define TTACoreStatusViewModelURT_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TTACoreStatusViewModel-Protocol.h"

@class NSArray, TFSTwitterAppealable, TFSTwitterForwardPivot, TFSTwitterImageInterstitial, TFSURTRichText;

@protocol TTACoreStatusViewModelURT <NSObject>

@required

@property (nonatomic, readonly) TFSTwitterForwardPivot *forwardPivot;
@property (nonatomic, readonly) TFSTwitterAppealable *appealable;
@property (nonatomic, readonly) TFSTwitterImageInterstitial *imageInterstitial;
@property (nonatomic, readonly) TFSTwitterImageInterstitial *innerImageInterstitial;
@property (nonatomic, readonly) TFSTwitterForwardPivot *innerForwardPivot;
@property (nonatomic, readonly) id <TTACoreStatusViewModel> quotedStatusViewModel;
@property (nonatomic, readonly) NSArray *engagementNudges;
@property (nonatomic, readonly) TFSURTRichText *innerTombstoneRichText;
@property (nonatomic, readonly) TFSURTRichText *innerTombstoneRichRevealText;
@property (nonatomic, readonly) _Bool innerTombstoneDismissed;
@property (nonatomic, readonly) _Bool innerTombstoneDismissed;
@property (nonatomic, readonly) _Bool outerTombstoneDismissed;
@property (nonatomic, readonly) _Bool outerTombstoneDismissed;
@property (nonatomic, readonly) TFSURTRichText *outerTombstoneRichText;
@property (nonatomic, readonly) TFSURTRichText *outerTombstoneRichRevealText;

/* required instance methods */
- (_Bool)isInnerTombstoneDismissed;
- (_Bool)isInnerTombstoneDismissed;
- (_Bool)isOuterTombstoneDismissed;
- (_Bool)isOuterTombstoneDismissed;

@optional

@end

#endif /* TTACoreStatusViewModelURT_Protocol_h */
