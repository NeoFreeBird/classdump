//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TwitterURT37URTHalfCoverTrayContentViewController_h
#define _TtC10TwitterURT37URTHalfCoverTrayContentViewController_h
@import Foundation;

@class TwitterURT.URTHalfCoverTrayContentViewController.Media, _$s10TFSURTCore12URTHalfCoverVMn, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$syyc;

@interface TwitterURT.URTHalfCoverTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSURTCore.URTHalfCover halfCover;
    TwitterURT.URTHalfCoverTrayContentViewController.Media media;
    () -> () onImpression;
    nominal type descriptor for TFSURTCore.URTCoverCTA function type (escaping) onPrimaryAction;
    nominal type descriptor for TFSURTCore.URTCoverCTA function type (escaping) onSecondaryAction;
    () -> () onUserDismiss;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC10TwitterURT37URTHalfCoverTrayContentViewController_h */
