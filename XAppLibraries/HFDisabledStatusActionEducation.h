//
#ifndef HFDisabledStatusActionEducation_h
#define HFDisabledStatusActionEducation_h
@import Foundation;

@class NSObject;

@interface HFDisabledStatusActionEducation : NSObject // (Swift)

/* class methods */
+ (void)presentFromViewController:(id)controller limitedActionPrompt:(id)prompt linkHandler:(id /* block */)handler actionBlock:(id /* block */)block;

/* instance methods */
- (id)init;

@end

#endif /* HFDisabledStatusActionEducation_h */
