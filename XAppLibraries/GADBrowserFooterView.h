//
#ifndef GADBrowserFooterView_h
#define GADBrowserFooterView_h
@import Foundation;

@class UIBarButtonItem, UIView;

@interface GADBrowserFooterView : UIView {
    /* instance variables */
    UIBarButtonItem *_backButton;
    UIBarButtonItem *_forwardButton;
    id /* block */ _backButtonHandler;
    id /* block */ _forwardButtonHandler;
    id /* block */ _shareButtonHandler;
}

@property (readonly, nonatomic) UIBarButtonItem *shareButton;

/* instance methods */
- (id)init;
- (id)buttonWithImage:(id)image name:(id)name width:(double)width enabled:(_Bool)enabled action:(SEL)action;
- (void)setBackButtonEnabled:(_Bool)enabled;
- (void)setBackButtonHandler:(id /* block */)handler;
- (void)backButtonPressed:(id)pressed;
- (void)setForwardButtonEnabled:(_Bool)enabled;
- (void)setForwardButtonHandler:(id /* block */)handler;
- (void)forwardButtonPressed:(id)pressed;
- (void)setShareButtonHandler:(id /* block */)handler;
- (void)shareButtonPressed:(id)pressed;

@end

#endif /* GADBrowserFooterView_h */
