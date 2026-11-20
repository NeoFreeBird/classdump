//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1MediaAppCardViewEventRegistry_h
#define T1MediaAppCardViewEventRegistry_h
@import Foundation;

#include "T1AppCardViewEventRegistry-Protocol.h"
#include "T1MediaAppCardView.h"
#include "T1MediaAppCardViewModel.h"
#include "TUICardViewDelegate-Protocol.h"

@class NSObject;

@interface T1MediaAppCardViewEventRegistry : NSObject <T1AppCardViewEventRegistry>

@property (nonatomic) SEL didTapAvatarImageSEL;
@property (nonatomic) SEL didTapAvatarTextSEL;
@property (nonatomic) SEL didTapImageSEL;
@property (nonatomic) SEL didTapDescriptionSEL;
@property (nonatomic) SEL didTapCallToActionSEL;
@property (nonatomic) SEL didTapVideoSEL;
@property (nonatomic) SEL didTapBackgroundSEL;
@property (nonatomic) SEL didTakeVoidActionSEL;
@property (readonly, weak, nonatomic) T1MediaAppCardView *view;
@property (weak, nonatomic) id <TUICardViewDelegate> delegate;
@property (retain, nonatomic) T1MediaAppCardViewModel *viewModel;

/* instance methods */
- (id)init;
- (id)initWithView:(id)view;
- (void)registerAvatarView:(id)view;
- (void)registerAvatarTextHighlightView:(id)view;
- (void)registerImageHighlightView:(id)view;
- (void)performTapActionForImageHighlightView:(id)view withEvent:(id)event;
- (void)performTapActionForVideoView:(id)view withEvent:(id)event;
- (void)registerDescriptionHighlightView:(id)view;
- (void)registerCallToActionButton:(id)button;
- (void)registerCardBackgroundHighlightView:(id)view;
- (void)didTapAvatarImage:(id)image;
- (void)didTapAvatarText:(id)text;
- (void)didTapImage:(id)image;
- (void)_t1_didTapImage:(id)image eventPoint:(struct CGPoint { double x0; double x1; })point;
- (void)didTapDescription:(id)description;
- (void)didTapCallToAction:(id)action event:(id)event;
- (void)didTapVideo:(id)video event:(id)event;
- (void)didTapBackground:(id)background;
- (void)didTakeVoidAction;

@end

#endif /* T1MediaAppCardViewEventRegistry_h */
