//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BroadcastContainerViewModel_h
#define T1BroadcastContainerViewModel_h
@import Foundation;

#include "T1BroadcastContainerViewModelDelegate-Protocol.h"
#include "T1BroadcastGeoblockingController.h"
#include "T1BroadcastingFeatures.h"
#include "T1LiveEvent.h"
#include "T1LiveEventControlBarViewModel.h"
#include "TFCCardDataSource-Protocol.h"

@class NSObject, TAVPlayerSessionProducer, TFNTwitterAccount, TFSTwitterBroadcast;

@interface T1BroadcastContainerViewModel : NSObject

@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) T1BroadcastGeoblockingController *geoblockingController;
@property (retain, nonatomic) T1LiveEvent *liveEvent;
@property (nonatomic) _Bool requestingLocationUpdate;
@property (readonly, nonatomic) TFSTwitterBroadcast *broadcast;
@property (readonly, nonatomic) T1BroadcastingFeatures *broadcastingFeatures;
@property (readonly, nonatomic) _Bool userViewingOwnBroadcast;
@property (readonly, nonatomic) id <TFCCardDataSource> cardDataSource;
@property (readonly, nonatomic) TAVPlayerSessionProducer *playerSessionProducer;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) T1LiveEventControlBarViewModel *liveEventControlBarViewModel;
@property (weak, nonatomic) id <T1BroadcastContainerViewModelDelegate> delegate;
@property (nonatomic) _Bool displayedAsGuestView;

/* instance methods */
- (id)init;
- (id)initWithBroadcast:(id)broadcast account:(id)account cardDataSource:(id)source liveEvent:(id)event;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isUserViewingOwnBroadcast;
- (_Bool)isEqualToBroadcastContainerViewModel:(id)model;
- (id)ptvBroadcast;
- (id)playerWithInitialScribeContext:(id)context;
- (void)requestLocationUpdate;
- (double)shareTimecodeForPlaybackState:(id)state;
- (id)imageTemplateURL;
- (struct CGSize { double x0; double x1; })imageOriginalDimensions;
- (void)_t1_configureSSLPinningDelegate;
- (void)_t1_postUpdate;
- (_Bool)isDisplayedAsGuestView;

@end

#endif /* T1BroadcastContainerViewModel_h */
