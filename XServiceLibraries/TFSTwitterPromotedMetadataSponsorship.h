//
#ifndef TFSTwitterPromotedMetadataSponsorship_h
#define TFSTwitterPromotedMetadataSponsorship_h
@import Foundation;

#include "NSCoding-Protocol.h"

@class NSObject, NSString;

@interface TFSTwitterPromotedMetadataSponsorship : NSObject <NSCoding>

@property (readonly, copy, nonatomic) NSString *sponsorshipCandidate;
@property (readonly, copy, nonatomic) NSString *sponsorshipOrganization;
@property (readonly, copy, nonatomic) NSString *sponsorshipOrganizationWebsite;
@property (readonly, nonatomic) long long sponsorshipType;

/* instance methods */
- (id)init;
- (id)initWithSponsorshipCandidate:(id)candidate sponsorshipOrganization:(id)organization sponsorshipOrganizationWebsite:(id)website sponsorshipType:(long long)type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TFSTwitterPromotedMetadataSponsorship_h */
