//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BroadcastCardViewModel_h
#define T1BroadcastCardViewModel_h
@import Foundation;

#include "T1BroadcastCardViewModelDelegate-Protocol.h"
#include "T1BroadcastContainerViewModel.h"

@class NSObject, NSString, NSURL, TFNTwitterCardContext, TFSTwitterBroadcast, UIColor;

@interface T1BroadcastCardViewModel : NSObject

@property (retain, nonatomic) TFSTwitterBroadcast *broadcast;
@property (retain, nonatomic) T1BroadcastContainerViewModel *broadcastContainerViewModel;
@property (retain, nonatomic) NSString *ubsRefreshIdentifier;
@property (nonatomic) _Bool broadcastUnavailable;
@property (readonly, nonatomic) TFNTwitterCardContext *cardContext;
@property (weak, nonatomic) id <T1BroadcastCardViewModelDelegate> delegate;
@property (readonly, nonatomic) _Bool inErrorState;
@property (readonly, nonatomic) NSString *scheduledBroadcastText;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } imageSize;
@property (readonly, nonatomic) _Bool scheduledBroadcastCountdownEnabled;
@property (readonly, nonatomic) NSURL *scheduledBroadcastPlaceholderImageURL;

/* instance methods */
- (id)initWithCardContext:(id)context;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToCardViewModel:(id)model;
- (void)startPeriodicUpdates;
- (void)stopPeriodicUpdates;
- (id)imageSpec;
- (_Bool)isInErrorState;
- (id)detailText;
- (_Bool)isInvitation;
- (void)_t1_processGetBroadcastResponse:(id)response;
- (void)_t1_processBroadcastAvailable:(id)available;
- (void)_t1_updateBroadcastContainerViewModel;
- (void)_t1_processBroadcastUnavailable;
- (_Bool)isBroadcastUnavailable;

@end

#endif /* T1BroadcastCardViewModel_h */
