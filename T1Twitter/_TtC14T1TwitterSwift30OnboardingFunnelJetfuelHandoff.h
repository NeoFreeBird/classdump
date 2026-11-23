//
#ifndef _TtC14T1TwitterSwift30OnboardingFunnelJetfuelHandoff_h
#define _TtC14T1TwitterSwift30OnboardingFunnelJetfuelHandoff_h
@import Foundation;

@class NSObject;

@interface T1TwitterSwift.OnboardingFunnelJetfuelHandoff : NSObject // (Swift)

/* class methods */
+ (_Bool)isFunnelRedirect:(id)redirect;
+ (void)recordPendingRedirect:(id)redirect;
+ (_Bool)handleIfMatched:(id)matched account:(id)account hostVC:(id)vc;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift30OnboardingFunnelJetfuelHandoff_h */
