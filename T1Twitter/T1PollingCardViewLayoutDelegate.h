//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PollingCardViewLayoutDelegate_h
#define T1PollingCardViewLayoutDelegate_h
@import Foundation;

@class TUICardViewLayoutDelegate;

@interface T1PollingCardViewLayoutDelegate : TUICardViewLayoutDelegate

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)viewModelWithCardContext:(id)context;

/* instance methods */
- (struct CGSize { double x0; double x1; })targetImageSizeForViewModel:(id)model layoutMetrics:(id)metrics;
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)layoutSubviewsForCardView:(id)view withState:(id)state;

@end

#endif /* T1PollingCardViewLayoutDelegate_h */
