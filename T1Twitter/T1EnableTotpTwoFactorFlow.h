//
#ifndef T1EnableTotpTwoFactorFlow_h
#define T1EnableTotpTwoFactorFlow_h
@import Foundation;

@class NSObject;

@interface T1EnableTotpTwoFactorFlow : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *presentingViewController;
    NSNumber"16@0:8 *completion;
    NSNumber"16@0:8 *lastHandedOffComponent;
    NSNumber"16@0:8 *tray;
    NSNumber"16@0:8 *hostTray;
    NSNumber"16@0:8 *onLoadingChanged;
    NSNumber"16@0:8 *codeEntryScreen;
}

/* instance methods */
- (id)initWithAccount:(id)account presentingViewController:(id)controller completion:(id /* block */)completion;
- (void)start;
- (id)init;

@end

#endif /* T1EnableTotpTwoFactorFlow_h */
