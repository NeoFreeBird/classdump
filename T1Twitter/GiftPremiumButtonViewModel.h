//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GiftPremiumButtonViewModel_h
#define GiftPremiumButtonViewModel_h
@import Foundation;

@class NSObject;

@interface GiftPremiumButtonViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *isAvailable;
    NSNumber"16@0:8 *location;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *providesOverflowAction;
}

/* instance methods */
- (id)initWithLocation:(long long)location account:(id)account profileViewModel:(id)model;
- (void)didTap:(id)tap;
- (id)init;

@end

#endif /* GiftPremiumButtonViewModel_h */
