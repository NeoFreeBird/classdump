//
#ifndef HFStatusActionConfiguration_h
#define HFStatusActionConfiguration_h
@import Foundation;

@class NSObject;

@interface HFStatusActionConfiguration : NSObject // (Swift)

/* class methods */
+ (_Bool)areAnyActionsAvailableForStatus:(id)status actions:(unsigned long long)actions account:(id)account;
+ (unsigned long long)restrictedActionsForStatus:(id)status account:(id)account;
+ (id)limitedActionForActionType:(unsigned long long)type limitedActions:(id)actions;
+ (long long)disabledEngagementReasonForActions:(unsigned long long)actions status:(id)status account:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* HFStatusActionConfiguration_h */
