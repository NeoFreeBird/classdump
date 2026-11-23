//
#ifndef TFSTwitterUserVerificationInfo_h
#define TFSTwitterUserVerificationInfo_h
@import Foundation;

#include "TFSURTRichText.h"

@class NSDate, NSObject;

@interface TFSTwitterUserVerificationInfo : NSObject // (Swift)

@property (nonatomic, readonly) _Bool isIdentityVerified;
@property (nonatomic, readonly) TFSURTRichText *reasonDescription;
@property (nonatomic, readonly) NSDate *verifiedSinceDate;
@property (nonatomic, readonly) long long overrideVerifiedYear;

/* instance methods */
- (id)init;

@end

#endif /* TFSTwitterUserVerificationInfo_h */
