//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift28SettingsChromeViewController_h
#define _TtC14T1TwitterSwift28SettingsChromeViewController_h
@import Foundation;

@class T1TwitterSwift.URTGenericViewControllerFactoryConfiguration, T1TwitterSwift.URTViewController, TFNViewController, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.SettingsChromeViewController : TFNViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    T1TwitterSwift.URTGenericViewControllerFactoryConfiguration configuration;
    T1TwitterSwift.URTViewController urtViewController;
}

/* instance methods */
- (id)scribePage;
- (id)scribeSection;
- (void)showSettings;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC14T1TwitterSwift28SettingsChromeViewController_h */
