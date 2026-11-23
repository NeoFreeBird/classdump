//
#ifndef _TtC7XSports28SportsGameChatViewController_h
#define _TtC7XSports28SportsGameChatViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, XSports.SportsGameChatContent, XSports.SportsLiveViewersPillView, XSports.SportsLiveViewersPillView.Content, _$sSS;

@interface XSports.SportsGameChatViewController : UIViewController { // (Swift)
    /* instance variables */
    XSports.SportsGameChatContent content;
    Swift.String gameID;
    Swift.String broadcastID;
    XSports.SportsLiveViewersPillView audiencePill;
    XSports.SportsLiveViewersPillView.Content audience;
    XSports.SportsLiveViewersPillView.Content latestAudience;
    Swift.Bool revealsUnpickedResults;
    Swift.Bool showsAudience;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports28SportsGameChatViewController_h */
