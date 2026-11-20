//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NavSearchButtonViewModel_h
#define NavSearchButtonViewModel_h
@import Foundation;

@class NSObject;

@interface NavSearchButtonViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *isAvailable;
    NSNumber"16@0:8 *location;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *actionHost;
    NSNumber"16@0:8 *barItem;
    NSNumber"16@0:8 *providesOverflowAction;
}

/* instance methods */
- (id)initWithLocation:(long long)location profileViewModel:(id)model actionHost:(id)host;
- (void)didTap:(id)tap;
- (void)didTapNavigationBarItem;
- (id)init;

@end

#endif /* NavSearchButtonViewModel_h */
