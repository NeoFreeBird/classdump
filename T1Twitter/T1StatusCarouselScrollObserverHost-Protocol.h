//
#ifndef T1StatusCarouselScrollObserverHost_Protocol_h
#define T1StatusCarouselScrollObserverHost_Protocol_h
@import Foundation;

@protocol T1StatusCarouselScrollObserverHost

@required

/* required instance methods */
- (id)visibleAvatarView;
- (id)visibleAuthorView;
- (id)carouselAvatarViews;
- (id)carouselAttachmentView;
- (_Bool)carouselIndicatorSlotIsFreeForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame excluding:(id)excluding;
- (id)carouselLayoutMetrics;

@optional

@end

#endif /* T1StatusCarouselScrollObserverHost_Protocol_h */
