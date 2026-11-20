//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
