//
#ifndef ONBCarouselMenuViewDelegate_Protocol_h
#define ONBCarouselMenuViewDelegate_Protocol_h
@import Foundation;

@protocol ONBCarouselMenuViewDelegate

@required

/* required instance methods */
- (id)itemForCarouselMenuView:(id)view withIdentifier:(id)identifier atIndex:(long long)index;
- (long long)numberOfItemsInCarouselMenuView:(id)view withIdentifier:(id)identifier;
- (void)carouselMenuView:(id)view withIdentifier:(id)identifier didSelectItemAtIndex:(long long)index;
- (id)customHighlightViewInCarouselMenu:(id)menu withIdentifier:(id)identifier atIndex:(long long)index;
- (void)carouselMenuViewDidFinishScrolling:(id)scrolling withIdentifier:(id)identifier;

@optional

@end

#endif /* ONBCarouselMenuViewDelegate_Protocol_h */
