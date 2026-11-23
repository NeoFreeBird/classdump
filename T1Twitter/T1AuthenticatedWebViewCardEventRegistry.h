//
#ifndef T1AuthenticatedWebViewCardEventRegistry_h
#define T1AuthenticatedWebViewCardEventRegistry_h
@import Foundation;

#include "T1AuthenticatedWebViewCardModel.h"
#include "TUICardViewDelegate-Protocol.h"

@class NSObject, TUICardView;

@interface T1AuthenticatedWebViewCardEventRegistry : NSObject

@property (nonatomic) SEL didTapTitleSEL;
@property (nonatomic) SEL didTapCallToActionSEL;
@property (nonatomic) SEL didTapImageSEL;
@property (nonatomic) SEL didTapContainerSEL;
@property (readonly, weak, nonatomic) TUICardView *view;
@property (weak, nonatomic) id <TUICardViewDelegate> delegate;
@property (retain, nonatomic) T1AuthenticatedWebViewCardModel *viewModel;

/* instance methods */
- (id)init;
- (id)initWithView:(id)view;
- (void)registerTitleHighlightView:(id)view;
- (void)registerContainerHighlightView:(id)view;
- (void)registerCallToActionButton:(id)button;
- (void)registerImageHighlightView:(id)view;
- (void)_didTap:(id)tap eventType:(id)type;
- (void)didTapContainer:(id)container;
- (void)didTapTitle:(id)title;
- (void)didTapCallToAction:(id)action event:(id)event;
- (void)didTapImage:(id)image;
- (void)_registerEventHandlers;

@end

#endif /* T1AuthenticatedWebViewCardEventRegistry_h */
