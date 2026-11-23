//
#ifndef _TtC20TwitterSubscriptions37AnnouncementTrayContentViewController_h
#define _TtC20TwitterSubscriptions37AnnouncementTrayContentViewController_h
@import Foundation;

@class TwitterSubscriptions.AnnouncementTrayHeroView ?, TwitterSubscriptions.AnnouncementTrayPayload.Content, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$syycSg;

@interface TwitterSubscriptions.AnnouncementTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    TwitterSubscriptions.AnnouncementTrayPayload.Content content;
    TwitterSubscriptions.AnnouncementTrayHeroView ? heroView;
    (() -> ())? onDidFinishPresenting;
    (() -> ())? onPrimaryAction;
    (() -> ())? onClose;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC20TwitterSubscriptions37AnnouncementTrayContentViewController_h */
