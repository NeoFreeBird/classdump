//
#ifndef _TtC14T1TwitterSwift28T1ProfessionalProfileWrapper_h
#define _TtC14T1TwitterSwift28T1ProfessionalProfileWrapper_h
@import Foundation;

@class NSObject;

@interface T1TwitterSwift.T1ProfessionalProfileWrapper : NSObject // (Swift)

/* class methods */
+ (id)professionalSettingsFromAccount:(id)account profileModulesDelegate:(id)delegate categorySelectionDelegate:(id)delegate;
+ (id)configureProfileSpotlightViewControllerForSpotlightType:(id)type account:(id)account profileModulesDelegate:(id)delegate categorySelectionDelegate:(id)delegate;
+ (_Bool)canAccessSpotlightConfigurationWithAccount:(id)account;
+ (id)professionalProfileConfiguration:(id)configuration;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift28T1ProfessionalProfileWrapper_h */
