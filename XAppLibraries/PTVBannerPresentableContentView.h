//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBannerPresentableContentView_h
#define PTVBannerPresentableContentView_h
@import Foundation;

#include "PTVBannerPresentableContentViewDelegate-Protocol.h"
#include "YOView.h"

@interface PTVBannerPresentableContentView : YOView

@property (weak, nonatomic) id <PTVBannerPresentableContentViewDelegate> delegate;

/* instance methods */
- (void)startAnimations;
- (double)presentationDuration;
- (void)selectView;
- (void)deselectView;

@end

#endif /* PTVBannerPresentableContentView_h */
