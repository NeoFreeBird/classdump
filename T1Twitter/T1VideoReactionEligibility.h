//
#ifndef T1VideoReactionEligibility_h
#define T1VideoReactionEligibility_h
@import Foundation;

@class NSObject;

@interface T1VideoReactionEligibility : NSObject

/* class methods */
+ (_Bool)_statusHasSensitiveMediaLabelOrRestriction:(id)restriction;
+ (_Bool)canVideoReactWithAccount:(id)account;
+ (_Bool)canVideoReactToStatus:(id)status account:(id)account;

@end

#endif /* T1VideoReactionEligibility_h */
