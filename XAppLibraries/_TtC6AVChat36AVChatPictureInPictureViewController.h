//
#ifndef _TtC6AVChat36AVChatPictureInPictureViewController_h
#define _TtC6AVChat36AVChatPictureInPictureViewController_h
@import Foundation;

@class AVPictureInPictureVideoCallViewController, Chat.AVChatVideosContainerView;

@interface AVChat.AVChatPictureInPictureViewController : AVPictureInPictureVideoCallViewController { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.AVChatVideosContainerView videosContainerView;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC6AVChat36AVChatPictureInPictureViewController_h */
