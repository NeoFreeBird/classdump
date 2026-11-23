//
#ifndef T1LiveEventMediaViewModel_h
#define T1LiveEventMediaViewModel_h
@import Foundation;

#include "T1BroadcastContainerViewModel.h"
#include "T1LiveEvent.h"
#include "T1LiveEventAudiospaceContainerViewModel.h"
#include "T1LiveEventVideoContainerViewModel.h"

@class NSObject, TFNTwitterAccount;

@interface T1LiveEventMediaViewModel : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (readonly, nonatomic) T1LiveEvent *liveEvent;
@property (readonly, nonatomic) T1BroadcastContainerViewModel *broadcastContainerViewModel;
@property (readonly, nonatomic) T1LiveEventVideoContainerViewModel *videoContainerViewModel;
@property (readonly, nonatomic) T1LiveEventAudiospaceContainerViewModel *audiospaceContainerViewModel;

/* instance methods */
- (id)init;
- (id)initWithBroadcastContainerViewModel:(id)model account:(id)account liveEvent:(id)event;
- (id)initWithVideoContainerViewModel:(id)model account:(id)account liveEvent:(id)event;
- (id)initWithAudiospaceContainerViewModel:(id)model account:(id)account liveEvent:(id)event;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (_Bool)isEqualToViewModel:(id)model;

@end

#endif /* T1LiveEventMediaViewModel_h */
