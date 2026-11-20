//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
