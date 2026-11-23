//
#ifndef T1VoiceRoomGuestsActionControlProvider_h
#define T1VoiceRoomGuestsActionControlProvider_h
@import Foundation;

#include "T1UserViewActionControlProvider-Protocol.h"
#include "T1VoiceRoomGuestsActionControlProviderDelegate-Protocol.h"
#include "TASSpaceModel-Protocol.h"

@class NSObject, NSString;

@interface T1VoiceRoomGuestsActionControlProvider : NSObject <T1UserViewActionControlProvider>

@property (retain, nonatomic) id <TASSpaceModel> spaceModel;
@property (nonatomic) unsigned long long filters;
@property (weak, nonatomic) id <T1VoiceRoomGuestsActionControlProviderDelegate> delegate;
@property (copy, nonatomic) id /* block */ needsLayoutBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSpaceModel:(id)model filters:(unsigned long long)filters;
- (id)actionControlForUserView:(id)view withUpdateBlock:(id /* block */)block;
- (struct CGSize { double x0; double x1; })sizeForActionControlWithUser:(id)user;
- (_Bool)shouldHideActionControl:(id)control;
- (void)updateActionControl:(id)control viewModel:(id)model;
- (void)cleanupActionControl:(id)control;
- (id)_t1_actionsWithUserReference:(id)reference;
- (void)_t1_handleTapEventOnActionControl:(id)control withAction:(long long)action;

@end

#endif /* T1VoiceRoomGuestsActionControlProvider_h */
