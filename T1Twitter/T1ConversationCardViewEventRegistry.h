//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ConversationCardViewEventRegistry_h
#define T1ConversationCardViewEventRegistry_h
@import Foundation;

#include "T1ConversationCardViewModel.h"
#include "T1PlayerCardPlayerContainerView.h"
#include "TUICardViewDelegate-Protocol.h"

@class NSObject, TUICardView;

@interface T1ConversationCardViewEventRegistry : NSObject

@property (readonly, weak, nonatomic) TUICardView *view;
@property (weak, nonatomic) id <TUICardViewDelegate> delegate;
@property (retain, nonatomic) T1ConversationCardViewModel *viewModel;
@property (weak, nonatomic) T1PlayerCardPlayerContainerView *playerContainerView;

/* instance methods */
- (id)init;
- (id)initWithView:(id)view;
- (void)registerImageHighlightView:(id)view;
- (void)performTapActionForButton:(id)button atIndex:(unsigned long long)index withEvent:(id)event;
- (void)performTapActionForImageHighlightView:(id)view withEvent:(id)event;
- (void)registerDetailsViewHighlightView:(id)view;
- (void)didTapImage:(id)image;
- (void)_didTapImage:(id)image;
- (void)_didTapLockedImage:(id)image;
- (void)didTapDetailsHighlightView:(id)view;
- (void)didTapThankYouURL:(id)url;
- (void)_didTapThankYouURL:(id)url;
- (void)didTakeVoidAction;
- (void)_didTapSingleChoiceCardHighlightView:(id)view;
- (void)_fireChoiceSelectionViewEvent:(id)event buttonIndex:(unsigned long long)index view:(id)view;

@end

#endif /* T1ConversationCardViewEventRegistry_h */
