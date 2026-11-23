//
#ifndef T1TabCustomizationPanelPresentationHandler_h
#define T1TabCustomizationPanelPresentationHandler_h
@import Foundation;

@class NSObject;

@interface T1TabCustomizationPanelPresentationHandler : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *interactionsTimelineBridge;
    NSNumber"16@0:8 *currentPanelNavigationControllerProvider;
    NSNumber"16@0:8 *$__lazy_storage_$_navigationSettings;
}

/* instance methods */
- (id)initWithAccount:(id)account interactionsTimelineBridge:(id)bridge currentPanelNavigationControllerProvider:(id /* block */)provider;
- (_Bool)presentPanelIfNeededWithPanelID:(long long)id animated:(_Bool)animated successCompletion:(id /* block */)completion;
- (id)init;

@end

#endif /* T1TabCustomizationPanelPresentationHandler_h */
