//
#ifndef T1GrokPostDownloadButtonEligibility_h
#define T1GrokPostDownloadButtonEligibility_h
@import Foundation;

@class NSObject;

@interface T1GrokPostDownloadButtonEligibility : NSObject // (Swift)

/* class methods */
+ (_Bool)isGrokPostEligibleForDownloadButton:(id)button featureAccess:(id)access surface:(long long)surface;
+ (_Bool)isBotAccountReply:(id)reply;
+ (_Bool)isBotAccountReplyEligibleForDownloadButton:(id)button featureAccess:(id)access;

/* instance methods */
- (id)init;

@end

#endif /* T1GrokPostDownloadButtonEligibility_h */
