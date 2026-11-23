//
#ifndef XPhotoEditorMediaContentSettingsViewController_h
#define XPhotoEditorMediaContentSettingsViewController_h
@import Foundation;

@class UIViewController;

@interface XPhotoEditorMediaContentSettingsViewController : UIViewController { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 onChange;
    B24@0:8@"NSString"16 settingsView;
}

@property (nonatomic, copy) id /* block */ onSettingsChange;

/* instance methods */
- (void)doneTapped;
- (id)initWithShowsAIGeneratedFlag:(_Bool)flag showsAllowDownload:(_Bool)download showsAllowGrokModifications:(_Bool)modifications isVideo:(_Bool)video previewImage:(id)image sensitiveWarnings:(id)warnings allowDownload:(_Bool)download blockGrokModifications:(_Bool)modifications isAIGenerated:(_Bool)aigenerated;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* XPhotoEditorMediaContentSettingsViewController_h */
