//
#ifndef T1CardImmersivePresenter_h
#define T1CardImmersivePresenter_h
@import Foundation;

@class NSObject;

@interface T1CardImmersivePresenter : NSObject

/* instance methods */
- (void)presentImmersivePhotosWithPreviewImages:(id)images imageViews:(id)views imageSpecs:(id)specs selectedIndex:(long long)index context:(id)context;
- (void)presentImmersiveVideoWithContext:(id)context;

@end

#endif /* T1CardImmersivePresenter_h */
