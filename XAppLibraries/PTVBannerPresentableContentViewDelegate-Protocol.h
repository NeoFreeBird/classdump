//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVBannerPresentableContentViewDelegate_Protocol_h
#define PTVBannerPresentableContentViewDelegate_Protocol_h
@import Foundation;

@protocol PTVBannerPresentableContentViewDelegate

@required

/* required instance methods */
- (void)contentViewDidRequestDismiss:(id)dismiss;

@optional

@end

#endif /* PTVBannerPresentableContentViewDelegate_Protocol_h */
