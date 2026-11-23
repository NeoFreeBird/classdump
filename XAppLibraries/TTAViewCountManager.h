//
#ifndef TTAViewCountManager_h
#define TTAViewCountManager_h
@import Foundation;

@class NSObject;

@interface TTAViewCountManager : NSObject // (Swift)

/* class methods */
+ (_Bool)publicVisibilityEnabled:(id)enabled;
+ (_Bool)authorVisibilityEnabled:(id)enabled;
+ (_Bool)shouldShowViewCountFor:(id)_for viewModel:(id)model isKnownFocal:(_Bool)focal;

/* instance methods */
- (id)init;

@end

#endif /* TTAViewCountManager_h */
