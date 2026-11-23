//
#ifndef GrokSummaryButtonViewModel_h
#define GrokSummaryButtonViewModel_h
@import Foundation;

@class NSObject;

@interface GrokSummaryButtonViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *type;
    NSNumber"16@0:8 *isAvailable;
    NSNumber"16@0:8 *location;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *profileViewModel;
    NSNumber"16@0:8 *actionHost;
    NSNumber"16@0:8 *barItem;
    NSNumber"16@0:8 *providesOverflowAction;
}

/* instance methods */
- (id)initWithLocation:(long long)location account:(id)account profileViewModel:(id)model actionHost:(id)host;
- (void)didTap:(id)tap;
- (void)didTapNavigationBarItem;
- (id)init;

@end

#endif /* GrokSummaryButtonViewModel_h */
