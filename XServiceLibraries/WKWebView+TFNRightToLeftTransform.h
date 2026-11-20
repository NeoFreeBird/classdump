//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef WKWebView_TFNRightToLeftTransform_h
#define WKWebView_TFNRightToLeftTransform_h
@import Foundation;

@interface WKWebView (TFNRightToLeftTransform)

/* class methods */
+ (_Bool)tfn_defaultShouldFlipForRightToLeftTransform;

@end

#endif /* WKWebView_TFNRightToLeftTransform_h */
