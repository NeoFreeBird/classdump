//
#ifndef T1WebCardViewEventRegistry_h
#define T1WebCardViewEventRegistry_h
@import Foundation;

#include "T1WebCardViewModel.h"
#include "TUICardViewDelegate-Protocol.h"

@class NSObject, TUICardView;

@interface T1WebCardViewEventRegistry : NSObject

@property (nonatomic) SEL didTapImageSEL;
@property (nonatomic) SEL didLongPressImageSEL;
@property (nonatomic) SEL didTapTitleSEL;
@property (nonatomic) SEL didLongPressTitleSEL;
@property (nonatomic) SEL didTapDescriptionSEL;
@property (nonatomic) SEL didLongPressDescriptionSEL;
@property (nonatomic) SEL didTapLinkSEL;
@property (nonatomic) SEL didLongPressLinkSEL;
@property (nonatomic) SEL didTapBackgroundSEL;
@property (nonatomic) SEL didLongPressBackgroundSEL;
@property (nonatomic) SEL didTapCTAButton;
@property (readonly, weak, nonatomic) TUICardView *view;
@property (weak, nonatomic) id <TUICardViewDelegate> delegate;
@property (retain, nonatomic) T1WebCardViewModel *viewModel;

/* instance methods */
- (id)init;
- (id)initWithView:(id)view;
- (void)registerMediaHighlightView:(id)view;
- (void)registerTitleHighlightView:(id)view;
- (void)registerDescriptionHighlightView:(id)view;
- (void)registerLinkHighlightView:(id)view;
- (void)registerCardBackgroundHighlightView:(id)view;
- (_Bool)shouldOmitLongPress;
- (void)_didTap:(id)tap eventType:(id)type;
- (void)_didLongPress:(id)press;
- (void)didTapImage:(id)image;
- (void)didLongPressImage:(id)image;
- (void)didTapTitle:(id)title;
- (void)didLongPressTitle:(id)title;
- (void)didTapDescription:(id)description;
- (void)didLongPressDescription:(id)description;
- (void)didTapLink:(id)link;
- (void)didLongPressLink:(id)link;
- (void)didTapBackground:(id)background;
- (void)didLongPressBackground:(id)background;

@end

#endif /* T1WebCardViewEventRegistry_h */
