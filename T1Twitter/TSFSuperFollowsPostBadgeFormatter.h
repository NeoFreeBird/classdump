//
#ifndef TSFSuperFollowsPostBadgeFormatter_h
#define TSFSuperFollowsPostBadgeFormatter_h
@import Foundation;

@class NSObject, NSString;

@interface TSFSuperFollowsPostBadgeFormatter : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *viewModel;
    NSNumber"16@0:8 *displayType;
}

@property (nonatomic, copy) NSString *accessibilityLabel;

/* class methods */
+ (_Bool)shouldBeVisibleForViewModel:(id)model displayType:(long long)type;

/* instance methods */
- (id)initWithViewModel:(id)model displayType:(long long)type;
- (id)init;

@end

#endif /* TSFSuperFollowsPostBadgeFormatter_h */
