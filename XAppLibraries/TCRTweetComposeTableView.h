//
#ifndef TCRTweetComposeTableView_h
#define TCRTweetComposeTableView_h
@import Foundation;

@class UITableView;

@interface TCRTweetComposeTableView : UITableView

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame style:(long long)style;
- (id)initWithCoder:(id)coder;
- (void)_tcr_tweetComposeTableView_initialize;
- (void)_tcr_notification_accessibilityVoiceOverStatusDidChange:(id)change;
- (void)_tcr_main_updateScrollEnabled;
- (_Bool)accessibilityScroll:(long long)scroll;
- (id)keyCommands;

@end

#endif /* TCRTweetComposeTableView_h */
