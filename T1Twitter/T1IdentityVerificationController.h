//
#ifndef T1IdentityVerificationController_h
#define T1IdentityVerificationController_h
@import Foundation;

@class NSObject;

@interface T1IdentityVerificationController : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *providers;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)createViewControllerWithAccount:(id)account flow:(id)flow returnSuccessURLString:(id)urlstring completion:(id /* block */)completion;
- (id)init;

@end

#endif /* T1IdentityVerificationController_h */
