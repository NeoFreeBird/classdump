//
#ifndef T1OneFactorAuthorizationRequest_h
#define T1OneFactorAuthorizationRequest_h
@import Foundation;

@class NSObject, NSString, TFSTwitterOneFactorAuthorizationFactor;

@interface T1OneFactorAuthorizationRequest : NSObject

@property (nonatomic) unsigned long long factorType;
@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) TFSTwitterOneFactorAuthorizationFactor *emailFactor;
@property (readonly, nonatomic) TFSTwitterOneFactorAuthorizationFactor *smsFactor;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *scribePage;
@property (copy, nonatomic) NSString *scribeSection;
@property (copy, nonatomic) NSString *scribeElement;

/* instance methods */
- (id)initWithFactorType:(unsigned long long)type userIdentifier:(id)identifier emailFactor:(id)factor smsFactor:(id)factor requestID:(id)id;

@end

#endif /* T1OneFactorAuthorizationRequest_h */
