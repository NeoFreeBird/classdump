//
#ifndef _TtC18TwitterAudiospaces27SurveyOptionsViewController_h
#define _TtC18TwitterAudiospaces27SurveyOptionsViewController_h
@import Foundation;

#include "TASSpacesTrayContent-Protocol.h"

@class NSString, TwitterAudiospaces.SurveyOptionsViewControllerDelegate ?, UIViewController, _$sSa -> TwitterAudiospaces.SurveyOption, _$sSh -> TwitterAudiospaces.SurveyOption, _$sSo26TFNItemsDataViewControllerCSg, _$sSo7UILabelC;

@interface TwitterAudiospaces.SurveyOptionsViewController : UIViewController <TASSpacesTrayContent> { // (Swift)
    /* instance variables */
    Swift.Array -> TwitterAudiospaces.SurveyOption options;
    Swift.Set -> TwitterAudiospaces.SurveyOption selectedOptions;
    __C.UILabel subtitleLabel;
    __C.TFNItemsDataViewController? $__lazy_storage_$_optionsDataViewController;
    TwitterAudiospaces.SurveyOptionsViewControllerDelegate ? delegate;
}

@property (nonatomic, readonly) NSString *spacesTrayPrimaryActionTitle;
@property (nonatomic, readonly) _Bool spacesTrayPrimaryActionEnabled;
@property (nonatomic, readonly) NSString *spacesTraySecondaryActionTitle;

/* instance methods */
- (void)spacesTrayDidPressPrimaryAction;
- (void)spacesTrayDidPressSecondaryAction;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)handleTapOnSkip;
- (void)handleTapOnSubmit;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC18TwitterAudiospaces27SurveyOptionsViewController_h */
