//
#ifndef T1LiveEventControlBarViewModel_h
#define T1LiveEventControlBarViewModel_h
@import Foundation;

#include "T1LiveEventControlBarViewModelPerspective-Protocol.h"

@class NSObject, NSString, TFNTwitterAccount, TFSTwitterBroadcast;

@interface T1LiveEventControlBarViewModel : NSObject

@property (readonly, nonatomic) TFSTwitterBroadcast *broadcast;
@property (readonly, nonatomic) _Bool isLiveEvent;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, copy, nonatomic) NSString *viewerCount;
@property (readonly, nonatomic) unsigned long long videoViewCount;
@property (readonly, nonatomic) double videoDuration;
@property (readonly, nonatomic) unsigned long long broadcastPillViewType;
@property (readonly, nonatomic) unsigned long long contentType;
@property (readonly, nonatomic) id <T1LiveEventControlBarViewModelPerspective> status;

/* instance methods */
- (id)initWithBroadcast:(id)broadcast account:(id)account isLiveEvent:(_Bool)event;
- (id)initWithContentType:(unsigned long long)type account:(id)account isLiveEvent:(_Bool)event status:(id)status;
- (_Bool)isEqualToViewModel:(id)model;
- (_Bool)shouldDisplayAndFadeContentOwnerNameForDisplayMode:(unsigned long long)mode;
- (id)contentOwnerNameForDisplayMode:(unsigned long long)mode;
- (struct { _Bool x0; _Bool x1; _Bool x2; _Bool x3; _Bool x4; _Bool x5; _Bool x6; })elementVisibilityWithPlayer:(id)player;
- (id)attributionText;

@end

#endif /* T1LiveEventControlBarViewModel_h */
