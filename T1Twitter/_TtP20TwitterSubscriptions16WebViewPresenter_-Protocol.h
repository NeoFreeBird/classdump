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
