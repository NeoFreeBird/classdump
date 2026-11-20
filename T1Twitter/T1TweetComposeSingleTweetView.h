//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1TweetComposeSingleTweetView_h
#define T1TweetComposeSingleTweetView_h
@import Foundation;

@class NSArray, UIView;

@interface T1TweetComposeSingleTweetView : UIView

@property (copy, nonatomic) NSArray *visibleAccessibilityViews;
@property (copy, nonatomic) NSArray *accessibilityViews;

/* instance methods */
- (void)updateAccessibilityViewsVisibility;
- (_Bool)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)accessibilityElementAtIndex:(long long)index;
- (long long)indexOfAccessibilityElement:(id)element;
- (id)accessibilityElements;

@end

#endif /* T1TweetComposeSingleTweetView_h */
