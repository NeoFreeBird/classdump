//
#ifndef T1MessageMeCardEventRegistry_h
#define T1MessageMeCardEventRegistry_h
@import Foundation;

#include "TUICardViewDelegate-Protocol.h"

@class NSObject, TUICardView;

@interface T1MessageMeCardEventRegistry : NSObject

@property (nonatomic) SEL didTapDMButtonSEL;
@property (readonly, weak, nonatomic) TUICardView *view;
@property (weak, nonatomic) id <TUICardViewDelegate> delegate;

/* instance methods */
- (id)initWithView:(id)view;
- (void)registerDMPromptButton:(id)button;
- (void)didTapDMPromptButton:(id)button event:(id)event;
- (void)_registerEventHandlers;

@end

#endif /* T1MessageMeCardEventRegistry_h */
