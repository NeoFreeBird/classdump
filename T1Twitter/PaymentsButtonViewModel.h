//
#ifndef PaymentsButtonViewModel_h
#define PaymentsButtonViewModel_h
@import Foundation;

@class NSObject;

@interface PaymentsButtonViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *isAvailable;
    NSNumber"16@0:8 *onNeedsReload;
    NSNumber"16@0:8 *location;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *balanceModel;
    NSNumber"16@0:8 *waitingBalanceModel;
    NSNumber"16@0:8 *button;
    NSNumber"16@0:8 *displayCancellable;
    NSNumber"16@0:8 *revealHaptic;
    NSNumber"16@0:8 *display;
    NSNumber"16@0:8 *reveal;
    NSNumber"16@0:8 *hasStarted;
    NSNumber"16@0:8 *needsWidgetImpression;
    NSNumber"16@0:8 *providesOverflowAction;
}

/* instance methods */
- (id)initWithLocation:(long long)location account:(id)account profileViewModel:(id)model;
- (void)didTap:(id)tap;
- (id)init;

@end

#endif /* PaymentsButtonViewModel_h */
