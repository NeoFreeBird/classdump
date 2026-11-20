//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UMPConsentViewController_h
#define UMPConsentViewController_h
@import Foundation;

@class UIView, UIViewController;

@interface UMPConsentViewController : UIViewController {
    /* instance variables */
    UIView *_view;
}

/* instance methods */
- (id)initWithConsentView:(id)view;
- (void)viewDidLoad;

@end

#endif /* UMPConsentViewController_h */
