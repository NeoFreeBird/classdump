//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBItemsDataViewController_h
#define ONBItemsDataViewController_h
@import Foundation;

#include "OCFAnnounceable-Protocol.h"
#include "OCFReportableComponentsContainer-Protocol.h"
#include "OCFWaitable-Protocol.h"
#include "ONBComponentCollectionViewProvider.h"
#include "ONBComponentCollectionViewProviderObserver-Protocol.h"
#include "ONBEntryNavigationDeclaring-Protocol.h"
#include "ONBFlexibleSpaceItemRefreshAssistant.h"
#include "XNAVConfigurationProviding-Protocol.h"

@class NSArray, NSString, TFNFormFieldHelper, TFNItemsDataViewController, TFNLegacyForm, UIScrollView, XNAVConfiguration;

@interface ONBItemsDataViewController : TFNItemsDataViewController <XNAVConfigurationProviding, ONBComponentCollectionViewProviderObserver, OCFAnnounceable, OCFReportableComponentsContainer, OCFWaitable, ONBEntryNavigationDeclaring> {
    /* instance variables */
    id /* block */ _submitAction;
    id /* block */ _abandonAction;
    NSArray *_contentSections;
    ONBFlexibleSpaceItemRefreshAssistant *_refreshAssistant;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _baseContentInset;
}

@property (readonly, nonatomic) XNAVConfiguration *xnav_navigationConfiguration;
@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly, copy, nonatomic) NSArray *xnav_navigationBarAccessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) ONBComponentCollectionViewProvider *viewProvider;
@property (readonly, nonatomic) TFNFormFieldHelper *formFieldHelper;
@property (readonly, nonatomic) TFNLegacyForm *form;
@property (nonatomic) _Bool headerHidden;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } additionalContentInset;
@property (copy, nonatomic) NSArray *hostedActionButtons;
@property (copy, nonatomic) id /* block */ hostedActionButtonHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long entryNavigation;

/* instance methods */
- (id)initWithCollectionViewLayout:(id)layout viewProvider:(id)provider form:(id)form;
- (id)initWithAccount:(id)account componentsViewModel:(id)model submitAction:(id /* block */)action abandonAction:(id /* block */)action;
- (void)abandon;
- (void)submit;
- (long long)submittability;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;
- (id)updatedSections:(id)sections;
- (void)updateFooterButtons;
- (void)updateFooterButtonsForSubmittability:(long long)submittability;
- (void)setSections:(id)sections;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)appear;
- (_Bool)t1_prefersTransparentNavigationBar;
- (long long)preferredStatusBarStyle;
- (_Bool)tfn_logoTitleViewShown;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })size withTransitionCoordinator:(id)coordinator;
- (long long)t1_preferredOnboardingPresenterCancelButtonStyle;
- (id)ocf_voiceoverPresentationAnnouncement;
- (id)reportableComponents;
- (_Bool)canWaitWithMessage:(id)message;
- (void)waitWithMessage:(id)message;
- (void)stopWaiting;
- (void)componentsViewProviderDidUpdate:(id)update;
- (void)private_nextTapped:(id)tapped;
- (void)private_skipTapped:(id)tapped;
- (void)private_updateFooterViewFrame;
- (void)private_updateSections:(id)sections byAddingItems:(id)items atEnd:(_Bool)end;
- (_Bool)isHeaderHidden;

@end

#endif /* ONBItemsDataViewController_h */
