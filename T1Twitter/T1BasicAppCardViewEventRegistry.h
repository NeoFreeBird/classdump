//
#ifndef T1BasicAppCardViewEventRegistry_h
#define T1BasicAppCardViewEventRegistry_h
@import Foundation;

#include "T1AppCardViewEventRegistry-Protocol.h"
#include "T1BasicAppCardViewModel.h"
#include "TUICardViewDelegate-Protocol.h"

@class NSObject, TUICardView;

@interface T1BasicAppCardViewEventRegistry : NSObject <T1AppCardViewEventRegistry>

@property (nonatomic) SEL didTapContainerSEL;
@property (nonatomic) SEL didTapDescriptionSEL;
@property (nonatomic) SEL didTapTitleSEL;
@property (nonatomic) SEL didTapUserSEL;
@property (nonatomic) SEL didTapAvatarSEL;
@property (nonatomic) SEL didTapCallToActionSEL;
@property (nonatomic) SEL didTapImageSEL;
@property (nonatomic) SEL didTakeVoidActionSEL;
@property (readonly, weak, nonatomic) TUICardView *view;
@property (weak, nonatomic) id <TUICardViewDelegate> delegate;
@property (retain, nonatomic) T1BasicAppCardViewModel *viewModel;

/* instance methods */
- (id)init;
- (id)initWithView:(id)view;
- (void)registerDescriptionHighlightView:(id)view;
- (void)registerTitleHighlightView:(id)view;
- (void)registerUserHighlightView:(id)view;
- (void)registerAvatarView:(id)view;
- (void)registerAvatarTextHighlightView:(id)view;
- (void)registerCallToActionButton:(id)button;
- (void)registerImageHighlightView:(id)view;
- (void)registerContainerHighlightView:(id)view;
- (void)didTapDescription:(id)description;
- (void)didTapTitle:(id)title;
- (void)didTapUser:(id)user;
- (void)didTapAvatar:(id)avatar;
- (void)didTapCallToAction:(id)action event:(id)event;
- (void)didTapImage:(id)image;
- (void)didTapContainer:(id)container;
- (void)didTakeVoidAction;

@end

#endif /* T1BasicAppCardViewEventRegistry_h */
