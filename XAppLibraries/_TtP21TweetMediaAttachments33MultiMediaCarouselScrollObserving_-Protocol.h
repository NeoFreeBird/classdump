//
#ifndef _TtP21TweetMediaAttachments33MultiMediaCarouselScrollObserving__Protocol_h
#define _TtP21TweetMediaAttachments33MultiMediaCarouselScrollObserving__Protocol_h
@import Foundation;

@protocol TweetMediaAttachments.MultiMediaCarouselScrollObserving

@required

/* required instance methods */
- (void)carouselDidUpdateLeadingEncroachment:(double)encroachment;
- (void)carouselDidUpdatePageIndicatorProgress:(double)progress pageCount:(long long)count;

@optional

@end

#endif /* _TtP21TweetMediaAttachments33MultiMediaCarouselScrollObserving__Protocol_h */
