//
#ifndef _TtC4Grok30GrokReadAloudBarViewController_h
#define _TtC4Grok30GrokReadAloudBarViewController_h
@import Foundation;

@class Grok.GrokNowPlayingBar.ViewController, Grok.GrokReadAloudVoiceSelection, Grok.TextToSpeechPlayer, Swift.Bool, UIViewController, _$s12CoreGraphics7CGFloatVMn _$scSg ->;

@interface Grok.GrokReadAloudBarViewController : UIViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for CoreGraphics.CGFloat _$scSg -> onDisplayedHeightChange;
    Grok.GrokReadAloudVoiceSelection voiceSelection;
    Grok.GrokNowPlayingBar.ViewController bar;
    Grok.TextToSpeechPlayer player;
    Swift.Bool isExpanded;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC4Grok30GrokReadAloudBarViewController_h */
