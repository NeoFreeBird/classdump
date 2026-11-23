//
#ifndef _TtC4Grok45GrokAccountLinkEntryHostContextViewController_h
#define _TtC4Grok45GrokAccountLinkEntryHostContextViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, _$syyScMYccSg;

@interface Grok.GrokAccountLinkEntryHostContextViewController : UIViewController { // (Swift)
    /* instance variables */
    (@Swift.MainActor () -> ())? onHostLeave;
    (@Swift.MainActor () -> ())? onHostCovered;
    Swift.Bool isDetaching;
}

/* instance methods */
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC4Grok45GrokAccountLinkEntryHostContextViewController_h */
