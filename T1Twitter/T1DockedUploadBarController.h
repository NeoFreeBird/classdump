//
#ifndef T1DockedUploadBarController_h
#define T1DockedUploadBarController_h
@import Foundation;

@class NSObject;

@interface T1DockedUploadBarController : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *currentDockedBar;
    NSNumber"16@0:8 *currentDockedBarViewModel;
    NSNumber"16@0:8 *dockingContainer;
}

/* instance methods */
- (id)initWithAccount:(id)account dockingContainer:(id)container;
- (void)dealloc;
- (void)didLoad;
- (void)didUpdateOutboxCompositionWithNotification:(id)notification;
- (id)init;

@end

#endif /* T1DockedUploadBarController_h */
