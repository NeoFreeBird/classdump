//
#ifndef T1CardViewPhotoEventHandler_h
#define T1CardViewPhotoEventHandler_h
@import Foundation;

#include "T1CardImmersivePresenter.h"
#include "TUICardViewEventHandler-Protocol.h"

@class NSString, TUICardViewBaseEventHandler;

@interface T1CardViewPhotoEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler>

@property (retain, nonatomic) T1CardImmersivePresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)handleViewEvent:(id)event context:(id)context;

@end

#endif /* T1CardViewPhotoEventHandler_h */
