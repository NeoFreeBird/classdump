//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ShareButtonViewModel_h
#define ShareButtonViewModel_h
@import Foundation;

@class NSObject;

@interface ShareButtonViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *isAvailable;
    NSNumber"16@0:8 *location;
    NSNumber"16@0:8 *audience;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *providesOverflowAction;
}

/* instance methods */
- (void)didTap:(id)tap;
- (id)init;

@end

#endif /* ShareButtonViewModel_h */
