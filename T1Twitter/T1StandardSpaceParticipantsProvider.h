//
#ifndef T1StandardSpaceParticipantsProvider_h
#define T1StandardSpaceParticipantsProvider_h
@import Foundation;

#include "PTVGuestRoomParticipantsProvider-Protocol.h"
#include "T1StandardSpaceParticipantsProviderDelegate-Protocol.h"
#include "TASSpacesContext-Protocol.h"

@class NSObject, TFSTwitterAudiospace;

@interface T1StandardSpaceParticipantsProvider : NSObject <PTVGuestRoomParticipantsProvider>

@property (weak, nonatomic) id <T1StandardSpaceParticipantsProviderDelegate> delegate;
@property (readonly, nonatomic) id <TASSpacesContext> context;
@property (retain, nonatomic) TFSTwitterAudiospace *lastAudiospaceResult;

/* instance methods */
- (void)fetchParticipantsWithProviderContext:(id)context completion:(id /* block */)completion;
- (void)handleAudioSpaceResult:(id)result providerContext:(id)context completion:(id /* block */)completion;
- (id)initWithContext:(id)context;

@end

#endif /* T1StandardSpaceParticipantsProvider_h */
