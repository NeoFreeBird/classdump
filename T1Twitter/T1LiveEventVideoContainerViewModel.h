//
#ifndef T1LiveEventVideoContainerViewModel_h
#define T1LiveEventVideoContainerViewModel_h
@import Foundation;

#include "T1LiveEvent.h"

@class NSObject, TFNTwitterAccount, TFNTwitterStatus;

@interface T1LiveEventVideoContainerViewModel : NSObject

@property (readonly, nonatomic) TFNTwitterStatus *status;
@property (readonly, nonatomic) T1LiveEvent *liveEvent;
@property (readonly, nonatomic) TFNTwitterAccount *account;

/* instance methods */
- (id)playerWithInitialScribeContext:(id)context;
- (_Bool)shouldBeRenderedSixteenByNine;
- (_Bool)shouldObservePlayerForBlurring;
- (id)playerSessionProducer;
- (_Bool)isDockable;
- (id)initWithStatus:(id)status liveEvent:(id)event account:(id)account;
- (_Bool)isEqualToViewModel:(id)model;

@end

#endif /* T1LiveEventVideoContainerViewModel_h */
