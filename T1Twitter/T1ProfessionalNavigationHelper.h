//
#ifndef T1ProfessionalNavigationHelper_h
#define T1ProfessionalNavigationHelper_h
@import Foundation;

@class NSObject;

@interface T1ProfessionalNavigationHelper : NSObject

/* class methods */
+ (_Bool)canAccessProfessionalHomeForAccount:(id)account;
+ (id)professionalHomeURL;
+ (id)convertToProfessionalFlowSpecForAccount:(id)account;

@end

#endif /* T1ProfessionalNavigationHelper_h */
