//
#ifndef T1ProfileUpsellViewController_h
#define T1ProfileUpsellViewController_h
@import Foundation;

#include "T1ResizableHeaderSubheader-Protocol.h"
#include "TFNLayoutMetricsEnvironment-Protocol.h"

@class TFNViewController;

@interface T1ProfileUpsellViewController : TFNViewController <T1ResizableHeaderSubheader, TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *upsellViewModel;
    NSNumber"16@0:8 *upsellType;
    NSNumber"16@0:8 *upsellView;
    NSNumber"16@0:8 *visitorUpsellCardView;
    NSNumber"16@0:8 *upgradeUpsellCardView;
}

@property (nonatomic, copy) id subheaderInfo;
@property (nonatomic, copy) id /* block */ preferredHeightCheckBlock;

/* instance methods */
- (id)initWithAccount:(id)account profileViewModel:(id)model upsellType:(long long)type helper:(id)helper;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)layoutMetricsDidChange:(id)change to:(id)to;
- (void)tfn_fontSizeChanged;
- (double)preferredHeight;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* T1ProfileUpsellViewController_h */
