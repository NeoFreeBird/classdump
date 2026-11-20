//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP20TwitterSubscriptions16WebViewPresenter__Protocol_h
#define _TtP20TwitterSubscriptions16WebViewPresenter__Protocol_h
@import Foundation;

@protocol TwitterSubscriptions.WebViewPresenter

@required

/* required instance methods */
- (void)openWebViewWithUrl:(id)url completion:(id /* block */)completion;

@optional

@end

#endif /* _TtP20TwitterSubscriptions16WebViewPresenter__Protocol_h */
