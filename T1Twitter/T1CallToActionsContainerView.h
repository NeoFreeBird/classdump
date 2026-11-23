//
#ifndef T1CallToActionsContainerView_h
#define T1CallToActionsContainerView_h
@import Foundation;

#include "T1CallToActionsContainerViewDelegate-Protocol.h"

@class NSArray, TFCCardData, TFNTwitterAccount, UIView;

@interface T1CallToActionsContainerView : UIView { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *pendingHashflagDownloads;
    NSNumber"16@0:8 *isCTAHashflagsEnabled;
    NSNumber"16@0:8 *cardContext;
}

@property (nonatomic, weak) id <T1CallToActionsContainerViewDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic, retain) TFCCardData *cardData;
@property (nonatomic, retain) TFNTwitterAccount *account;
@property (nonatomic, copy) NSArray *viewsArray;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)didTapButton:(id)button event:(id)event;
- (void)hashflagImageDidDownload:(id)download;

@end

#endif /* T1CallToActionsContainerView_h */
