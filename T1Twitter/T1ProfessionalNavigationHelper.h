//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
