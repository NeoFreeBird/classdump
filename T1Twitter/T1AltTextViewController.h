//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1AltTextViewController_h
#define T1AltTextViewController_h
@import Foundation;

#include "T1AltTextInputView.h"
#include "T1AltTextInputViewDelegate-Protocol.h"
#include "T1AltTextViewControllerDelegate-Protocol.h"
#include "T1MediaAttachmentView.h"
#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "XNAVConfigurationProviding-Protocol.h"

@class NSArray, NSString, TFNAttributedTextView, TFNLegacyFormFieldCounterView, TFNTwitterAccount, TFNViewController, TTMAsset, UIScrollView, XNAVConfiguration;

@interface T1AltTextViewController : TFNViewController <XNAVConfigurationProviding, T1AltTextInputViewDelegate, TFNAttributedTextViewDelegate>

@property (readonly, nonatomic) XNAVConfiguration *xnav_navigationConfiguration;
@property (readonly, nonatomic) UIScrollView *xnav_contentScrollView;
@property (readonly, nonatomic) _Bool xnav_isScrollContentExhausted;
@property (readonly, copy, nonatomic) NSArray *xnav_navigationBarAccessoryViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) T1AltTextInputView *textView;
@property (retain, nonatomic) TFNLegacyFormFieldCounterView *counterView;
@property (retain, nonatomic) TFNAttributedTextView *educationTextView;
@property (retain, nonatomic) T1MediaAttachmentView *attachmentView;
@property (nonatomic) _Bool shouldShowErrorView;
@property (retain, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) NSString *initialAltText;
@property (weak, nonatomic) id <T1AltTextViewControllerDelegate> delegate;
@property (readonly, nonatomic) TTMAsset *mediaAsset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account mediaAsset:(id)asset;
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (id)initWithCoder:(id)coder;
- (void)_t1_altTextViewController_initializeWithAccount:(id)account;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (void)viewDidLayoutSubviews;
- (void)altTextInputViewDidChange:(id)change;
- (void)_t1_initializeSubviews;
- (void)_t1_scrollTextViewToVisible;
- (void)_t1_didTapCancel:(id)cancel;
- (void)_t1_didTapApply:(id)apply;
- (void)_t1_didTapImage:(id)image;
- (void)_t1_keyboardDidChange:(id)change;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

@end

#endif /* T1AltTextViewController_h */
