//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1HiddenRepliesEducationTakeoverViewController_h
#define T1HiddenRepliesEducationTakeoverViewController_h
@import Foundation;

#include "TFNPromptDataSource-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"

@class NSArray, NSString, TFNPromptContentViewSpec, TFNPromptImageSpec, TFNPromptTextSpec, TFNPromptViewController, TFNTwitterAccount, TFNTwitterStatus, UIImage, UIScrollView, XNAVConfiguration;
@protocol T1HiddenRepliesEducationTakeoverViewControllerDelegate;

@interface T1HiddenRepliesEducationTakeoverViewController : TFNPromptViewController <XNAVConfigurationProviding, TFNPromptDataSource>

@property (readonly, nonatomic) XNAVConfiguration *xnav_navigationConfiguration;
@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly, copy, nonatomic) NSArray *xnav_navigationBarAccessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) TFNTwitterStatus *status;
@property (weak, nonatomic) id <T1HiddenRepliesEducationTakeoverViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) TFNPromptImageSpec *imageSpec;
@property (readonly, nonatomic) long long promptLayout;
@property (readonly, nonatomic) TFNPromptTextSpec *primaryTextSpec;
@property (readonly, nonatomic) TFNPromptTextSpec *secondaryTextSpec;
@property (readonly, nonatomic) TFNPromptContentViewSpec *contentViewSpec;
@property (readonly, nonatomic) TFNPromptTextSpec *detailTextSpec;
@property (readonly, nonatomic) TFNPromptTextSpec *footerTextSpec;
@property (readonly, nonatomic) NSArray *buttonSpecs;
@property (readonly, nonatomic) _Bool showDismissOption;
@property (readonly, nonatomic) id /* block */ dismissOptionAction;
@property (readonly, nonatomic) _Bool showLogo;
@property (readonly, nonatomic) Class promptViewClass;
@property (readonly, nonatomic) id /* block */ promptViewProvider;
@property (readonly, nonatomic) id /* block */ impressionAction;
@property (readonly, nonatomic) _Bool excludeFromVDLLeftAlign;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account status:(id)status;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidLoad;

@end

#endif /* T1HiddenRepliesEducationTakeoverViewController_h */
