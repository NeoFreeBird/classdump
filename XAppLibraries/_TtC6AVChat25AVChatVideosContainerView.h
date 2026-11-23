//
#ifndef _TtC6AVChat25AVChatVideosContainerView_h
#define _TtC6AVChat25AVChatVideosContainerView_h
@import Foundation;

@class Chat.AVChatCoordinator, Chat.AVChatVideosContainerViewDelegate ?, Swift.Bool, TwitterUISwift.UserBadger ?, UIView, _$s10Foundation4DateVMn ?, _$sSSSg, _$sSo28TFNTwitterMediaImagePipelineCSg, _$sSo7NSTimerCSg;

@interface AVChat.AVChatVideosContainerView : UIView { // (Swift)
    /* instance variables */
    __C.TFNTwitterMediaImagePipeline? $__lazy_storage_$_imagePipeline;
    TwitterUISwift.UserBadger ? $__lazy_storage_$_userBadger;
    oneway _Atomic Chat.AVChatVideosContainerViewDelegate ? delegate;
    oneway _Atomic Chat.AVChatCoordinator coordinator;
    Swift.Bool shouldHideChrome;
    Swift.Bool shouldUseVideoViewsFromCoordinator;
    nominal type descriptor for Foundation.Date ? startDate;
    __C.NSTimer? durationTimer;
    Swift.String? durationText;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC6AVChat25AVChatVideosContainerView_h */
