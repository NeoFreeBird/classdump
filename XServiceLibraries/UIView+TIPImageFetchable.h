//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIView_TIPImageFetchable_h
#define UIView_TIPImageFetchable_h
@import Foundation;

@interface UIView (TIPImageFetchable)

/* instance methods */
- (void)setTip_fetchHelper:(id)helper;
- (id)tip_fetchHelper;
- (void)tip_withDisappearanceBehaviorNone:(id /* block */)none;
- (id)tip_imageViewObserver;
- (void)_tip_clearImageViewObserver:(id)observer;

@end

#endif /* UIView_TIPImageFetchable_h */
