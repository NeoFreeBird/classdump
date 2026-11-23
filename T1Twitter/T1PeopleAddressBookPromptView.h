//
#ifndef T1PeopleAddressBookPromptView_h
#define T1PeopleAddressBookPromptView_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class NSLayoutConstraint, NSString, TFNAttributedTextView, UIButton, UILabel, UIStackView, UIView;

@interface T1PeopleAddressBookPromptView : UIView <TFNLayoutMetricsEnvironment>

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) NSLayoutConstraint *topContentEdgeInsetConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *rightContentEdgeInsetConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *bottomContentEdgeInsetConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *leftContentEdgeInsetConstraint;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UIButton *okButton;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (readonly, nonatomic) TFNAttributedTextView *disclaimerTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateConstraints;
- (void)layoutMetricsDidChange:(id)change to:(id)to;

@end

#endif /* T1PeopleAddressBookPromptView_h */
