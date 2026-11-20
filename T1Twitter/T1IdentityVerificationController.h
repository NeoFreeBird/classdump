//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
