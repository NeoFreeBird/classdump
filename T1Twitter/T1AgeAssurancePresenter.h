//
#ifndef T1AgeAssurancePresenter_h
#define T1AgeAssurancePresenter_h
@import Foundation;

@class NSObject;

@interface T1AgeAssurancePresenter : NSObject

/* class methods */
+ (void)showAgeAssuranceWithAccount:(id)account source:(long long)source urlArguments:(id)arguments completion:(id /* block */)completion;

@end

#endif /* T1AgeAssurancePresenter_h */
