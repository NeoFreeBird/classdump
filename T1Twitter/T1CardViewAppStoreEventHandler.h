//
#ifndef T1CardViewAppStoreEventHandler_h
#define T1CardViewAppStoreEventHandler_h
@import Foundation;

#include "T1CardAppStorePresenter.h"
#include "TUICardViewEventHandler-Protocol.h"

@class NSString, TUICardViewBaseEventHandler;

@interface T1CardViewAppStoreEventHandler : TUICardViewBaseEventHandler <TUICardViewEventHandler>

@property (retain, nonatomic) T1CardAppStorePresenter *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)handleViewEvent:(id)event context:(id)context;
- (void)_handleAppOpenOrAppStoreEvent:(id)event context:(id)context;
- (id)_t1_imageAppStoreViewControllerForEvent:(id)event context:(id)context;
- (id)_t1_videoAppStoreViewControllerForEvent:(id)event context:(id)context;
- (id)_t1_itemUniquelyIdentifyingPlayerForContext:(id)context;
- (void)_handleAppPreviewEvent:(id)event context:(id)context;
- (void)_logAppOpenResult:(unsigned long long)result presentable:(id)presentable duration:(double)duration;

@end

#endif /* T1CardViewAppStoreEventHandler_h */
