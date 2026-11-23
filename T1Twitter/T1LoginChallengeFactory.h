//
#ifndef T1LoginChallengeFactory_h
#define T1LoginChallengeFactory_h
@import Foundation;

@class NSObject;

@interface T1LoginChallengeFactory : NSObject

/* class methods */
+ (id)loginChallengeWithMode:(long long)mode requestID:(id)id user:(id)user userID:(long long)id URLString:(id)urlstring loginCause:(long long)cause;
+ (id)populatedURLFromURLString:(id)urlstring;

@end

#endif /* T1LoginChallengeFactory_h */
